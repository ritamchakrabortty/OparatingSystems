i=1
sum=0.0
echo "Enter a number "
read n
while [ $i -le $n ]
do
t=`echo "l($i)/l(10)"|bc -l`
sum=`echo "$sum+$t"|bc`
i=$(($i+1))
done
echo "The sum is"$sum
