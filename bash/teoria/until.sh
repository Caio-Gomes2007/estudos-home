#!/bin/bash
## O until executa um bloco de comandos enquanto uma condição for falsa.
num=1

until [ $num -gt 5 ]; do
    echo "$num"
    ((num++))
done
