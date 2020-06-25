# PLA-32311 Sulautetut järjestelmät - Kesä -20
# Iiro Kiviluoma 267380
#!/bin/bash

echo "Hello World!"

FILE="${0##*/}" # Ajettavan tiedoston nimi
NOW=$(date)
echo "Ajettava tiedosto: $FILE, aika: $NOW."

# Kysytään käyttäjältä kaksi lukua.
read -p "Anna 1. luku: " num_1

while [ $num_1 -lt 0 ]
do
    echo "Anna positiivinen luku!"
    read -p "Anna 1. luku: " num_1
done

read -p "Anna 2. luku: " num_2

while [ $num_2 -lt 0 ]
do
    echo "Anna positiivinen luku!"
    read -p "Anna 2. luku: " num_2
done

SUM=$((num_1 + num_2))
echo "Annettujen lukujen summa: $SUM"
