#! HackerRank

read a
read b
read c

if [ $a -eq $b -a $b -eq $c ]
then
    echo "EQUILATERAL"
elif [ $a -eq $b ] || [ $b -eq $c ] || [ $c -eq $a ]
then
    echo "ISOSCELES"
else
    echo "SCALENE"
fi
