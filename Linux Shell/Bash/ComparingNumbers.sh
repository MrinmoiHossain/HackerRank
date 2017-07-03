#! HackerRank

read a
read b

if [ $a -eq $b ]
then
    echo "X is equal to Y"
elif [ $a -gt $b ]
then
    echo "X is greater than Y"
else
    echo "X is less than Y"
fi
