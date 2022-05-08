#!/bin/sh
cat /etc/passwd | sed -e '/^[ ]*#/d' -e '/^$/d' | sed -n 2~2p | cut -d: -f1 | rev | sort -r | head -n$FT_LINE1 | tail -n$FT_LINE2 | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./'

