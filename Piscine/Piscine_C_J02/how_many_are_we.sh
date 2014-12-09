if [[ -z $1 ]]
then
    wc -l
else
    awk -F';' '{print $3}' | grep -ic $1
fi

