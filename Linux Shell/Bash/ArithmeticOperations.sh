#! HackerRank

read a

printf "%.3f" $(echo "scale = 4; $a" | bc)
