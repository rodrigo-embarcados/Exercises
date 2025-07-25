#!/bin/bash

for arquivo in *.c; do
    nome="${arquivo%.c}"
    gcc "$arquivo" -o "$nome"
done

