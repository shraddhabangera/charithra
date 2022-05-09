#3b. Write a shell script to implement terminal locking (Similar to the lock command). It should
#prompt for the user for a password. After accepting the password entered by the user, it must
#prompt again for the matching password as confirmation and if match occurs, it must lock the
#keyword until a matching password is entered again by the user. Note the Script must be
#written to disregard BREAK, control-D. No time limit need be implemented for the lock
#duration

echo "Enter a passward"
stty -echo
read p1
echo "Enter the confirmed passward"
stty -echo
read p2
stty echo
while [ "$p1" != "$p2"
do
echo "Passward does not match.Enter the currect passward"
stty -echo
rerad p2
stty echo
done
clear
echo "------terminal locked------------"
echo "Enter the passward to unlock"
stty -echo
read p3
stty echo
while [ "$p1" != "$p3" ]
do
clear
echo "-------terminal locked---------------"
echo "Passward does not match.Re-enter the passward"
read p3
done
echo "---------terminal unlocked-------------"
