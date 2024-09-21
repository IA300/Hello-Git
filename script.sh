sum=0
count=0
while read -r line; do
	echo "line=$line"
	sum=$((sum + line))
	echo "sum=$sum"
	count=$((count + 1))
done < numbers.txt
average=$(echo "scale=4; $sum/$count" | bc)
echo "sum=$sum"
echo "average=$average"
echo "$average" > Average.json

