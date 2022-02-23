for i in `ls`
do
fl=`expr length $i`
if [ $fl -ge 0 ] 
then
echo $i
fi
done
