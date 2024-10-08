#!/bin/bash

echo "Olá deseja criar um arquivo de monitoramento?(y)or(n)"
read respostaInicial

if [[ $respostaInicial == "y" ]]; then
	echo "perfeito vamos criar uma pasta para alocar os arquivos"

echo "Para qual atividade sera o monitoramento?,sera o nome do arquivo coloca .sh no final"
read atividadeMonitoramento

echo "Agora eu quero saber o diretorio que sera monitorado"
read diretorioMonitorado

echo " agora para onde eu devo carrega-lo?"
read diretorioDestino


cat <<EOF >> $atividadeMonitoramento

#!/bin/bash
#ele ajuda com o php em ambiente linux, não mexe porra
# Diretório a ser monitorado
DIR_TO_WATCH="$diretorioMonitorado"

# Diretório de destino
DEST_DIR="$diretorioDestino"

# Função para tratar as alterações
handle_change() {
    EVENT=$1
    FILE=$2
    REL_PATH="${FILE#$DIR_TO_WATCH/}"

    case $EVENT in
    MODIFY | CREATE | MOVED_TO)
        echo "Arquivo modificado/criado/movido: $FILE"
        cp -f "$FILE" "$DEST_DIR/$REL_PATH"
        echo "Arquivo copiado para: $DEST_DIR/$REL_PATH"
        ;;
    DELETE | MOVED_FROM)
        echo "Arquivo deletado/movido: $FILE"
        rm -f "$DEST_DIR/$REL_PATH"
        echo "Arquivo deletado de: $DEST_DIR/$REL_PATH"
        ;;
    *)
        echo "Evento desconhecido: $EVENT no arquivo $FILE"
        ;;
    esac
}

# Função para sincronizar a pasta de destino com a origem
sync_directories() {
    rsync -av --delete "$DIR_TO_WATCH/" "$DEST_DIR/"
}

# Sincronizar inicialmente as pastas
sync_directories

# Usar inotifywait para monitorar o diretório
inotifywait -m -r -e modify,create,delete,move "$DIR_TO_WATCH" --format '%e %w%f' |
    while read EVENT FILE; do
        handle_change "$EVENT" "$FILE"
        # Sincronizar novamente após cada mudança
        sync_directories
    done
EOF

chmod +x $atividadeMonitoramento

fi
