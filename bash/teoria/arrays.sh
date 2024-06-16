#!/bin/bash

jogos=("DOOM" "League of Legends" "Watch Dogs")
echo ${jogos[0]}                                     ##seleção unica
echo "Meu jogos ${jogos[*]}"                         ##seleção geral
echo "tamanho da minha array de jogos: ${#jogos[*]}" ##obtendo o tamnho da array

##percorrer uma array
for elementos in "${jogos[@]}"; do
    echo "$elementos"
done

##add e remov

jogos+=("Hollow knight")
echo "add Hollow knight"
echo ${jogos[*]}

unset jogos[2]
echo "removendo o Watch Dogs"
echo ${jogos[*]}

##associação de arrays

#!/bin/bash

jogos=("DOOM" "League of Legends" "Watch Dogs")
echo ${jogos[0]}                                     ##seleção unica
echo "Meu jogos ${jogos[*]}"                         ##seleção geral
echo "tamanho da minha array de jogos: ${#jogos[*]}" ##obtendo o tamnho da array

##percorrer uma array
for elementos in "${jogos[@]}"; do
    echo "$elementos"
done

##add e remov

jogos+=("Hollow knight")
echo "add Hollow knight"
echo ${jogos[*]}

unset jogos[2]
echo "removendo o Watch Dogs"
echo ${jogos[*]}
