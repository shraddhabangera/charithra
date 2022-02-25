# Write a shell script that accepts filename as argument and display its creation time if file exist and if does not send output error message
echo -n "Enter the file name"
read filename
if [ -e $filename ]
then
set -- `ls -ld $filename`
echo "creation time of $filename is $6 $7 $8"
else
echo "File does not exist"
fi
