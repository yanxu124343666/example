#!/bin/bash
#batch add users with file called users.txt
#The original password is "username+123456"

for username in $( more users.txt)
do
if [ $username ]
then 
   useradd -m $username
   echo $username"123456" | passwd --stdin $username
   echo "User $username has existed!"
else
   echo "The username doesn't exist!"
fi
done
