# Create a script file called file properties that reads a filename entered and outputs it properties.
if [ -e $1 ]
then
x=`ls -ld $1`
p=1
for i in $x
do
case $p in
1)echo "Permissions are $i";;
2)echo "File count is $i";;
[6-8])echo "File modification is done on $5 $6 at $7";;
esac
p=`expr $p+1`
echo $i
done
else 
echo "file does not exist"
fi
