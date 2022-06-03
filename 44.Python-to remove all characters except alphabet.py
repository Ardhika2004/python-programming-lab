str=input("Enter the string : ")
str2=' '
for i in str:
    if ( ord(i)>=65 and ord(i)<= 90 ) or( ord(i)>=97 and ord(i)<=122) :
        str2+=i
print("all the alphabets are : ",str2)