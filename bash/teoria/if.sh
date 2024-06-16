#!/bin/bash
# declare -i condicao
condicao=3

if [ $condicao -eq 0 ]; then
    echo "false"

elif [ $condicao -eq 1 ]; then
    echo "true"
else
    echo "valor invalido"

fi
