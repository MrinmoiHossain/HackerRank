#! HackerRank

read n
count=1
sum=0

while [ $count -le $n ]
do
    read a
    sum=`expr $sum + $a`
    count=`expr $count + 1`
done
printf "%.3f" $(echo "scale = 4; $sum / $n" | bc)
