awk -F : '{print  $1}' | sort -r | rev | sed -n '2~2 p'| sed -ne ''$MY_LINE1','$MY_LINE2' p' | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./g' 
