if [ -z $1 ] 
then
    echo "Give me a repo name please"
    exit
fi

TOKEN="ef97e73b96c5c0c1cb7640188b041b9283d47f63814b9bcc705c22f7f49e352e761815a62cc9df37ba4e4a07b395a3e63998441c02cbf15b0f97c3aa029cf011"

#echo "=hBa3i-z" | blih repository create $1
blih -u "dupard_e" -t $TOKEN repository create $1
blih -u "dupard_e" -t $TOKEN repository setacl $1 ramassage-tek r
blih -u "dupard_e" -t $TOKEN repository getacl $1

