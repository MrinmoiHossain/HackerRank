#! HackerRank

a="j"
until [ -z $a ]
do
    read a
    echo $a | tr -s ' '
done
