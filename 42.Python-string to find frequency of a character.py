# str1=input("Enter the string : ")
# st={}
# for i in str1:
#     if i in st:
#         st[i]+=1
#     else:
#         st[i]=1
# print("Count of all character in given string is : \n"+str(st))

str1=input("Enter the string : ")
st={}
for i in str1:
    if i in st:
        st[i]+=1
    else:
        st[i]=1
print("Count of all the alphabet : ",str(st))