#! HackerRank

a="j"
until [ -z $a ]
do
    read a
    echo $a | tr -d [a-z]
done
