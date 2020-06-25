#!/bin/bash
# PLA-32311 Sulautetut järjestelmät - Kesä -20
# Iiro Kiviluoma 267380

# Crontab-komento:
# * * * * * /home/iirok/Git/sulautetut-jarjestelmat-kesa20_iirokiviluoma/2_kayttojarjestelmat/skripti

LOG_FILE="/home/iirok/Git/sulautetut-jarjestelmat-kesa20_iirokiviluoma/2_kayttojarjestelmat/skripti_log.txt"
NOW=$(date)
USERS=$(cat /etc/passwd)

echo "$NOW\n$USERS" >> $LOG_FILE
