#!/bin/bash

# Obtener la lista de archivos y ordenarlos naturalmente
files=$(ls -v example*.c)  # Usa -v para ordenar naturalmente los nombres

# Inicializar el contador
counter=1

# Recorrer cada archivo y renombrar en secuencia
for file in $files; do
    # Formatear el nuevo nombre como exampleXX.c
    new_name=$(printf "example%02d.c" $counter)
    
    # Renombrar el archivo
    mv "$file" "$new_name"
    
    # Incrementar el contador
    ((counter++))
done
