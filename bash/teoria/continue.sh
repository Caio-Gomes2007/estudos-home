#!/bin/bash
frutas=("banana" "maçã" "limão")
for elementos in "${frutas[@]}"; do
    if [ "$elementos" = "maçã" ]; then
        echo "continue pela maçã"
        continue
    fi
    echo "$elementos"
done
