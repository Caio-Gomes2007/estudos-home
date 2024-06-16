#!/bin/bash
frutas=("banana" "maçã" "limão")
for elementos in "${frutas[@]}"; do
    if [ "$elementos" = "maçã" ]; then
        echo "parado pela maçã"
        break
    fi
    echo "$elementos"
done
