#!/bin/bash
echo "Qual é o seu nome?"
read nome
echo "Qual é a sua idade?"
read idade

if [ $idade -ge 18 ]; then
    echo "$nome vai precisar servir"
elif [ $idade -lt 18 ]; then
    echo "$nome n precisa servir ainda"
fi
