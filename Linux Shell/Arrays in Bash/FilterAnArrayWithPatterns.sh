#! HackerRank

i=0

while read name
do
    arr[$i]=$name
    ((i+=1))
done

declare -a results=(${arr[@]/*[aA]*})

echo ${results[*]}
