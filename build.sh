#!/bin/bash
# compila todos os .c do projeto
for file in *.c; do
    name=$(basename "$file" .c)
    gcc "$file" -o "$name"
    echo "Compilado By -- Louis: $name"
done
