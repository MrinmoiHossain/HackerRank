#! HackerRank

line="j"
until [ -z $line ]
do
    read line
    echo "$line" | tr "()" "[]"
done
