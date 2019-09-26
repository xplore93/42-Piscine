#! /bin/sh
cat /etc/passwd | sed '/^$/d; / *#/d' | awk 'NR % 2 == 0' | cut -d ":" -f 1 | rev | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | paste -sd ',' - | sed 's/,/, /g' | sed 's/[^.]$/&./' | tr -d "\n"