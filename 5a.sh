echo -n "Enter the file name"
read filename
if [ -e $filename ]
then
set -- `ls -ld $filename`
echo "creation time of $filename is $6 $7 $8"
else
echo "File does not exist"
fi
