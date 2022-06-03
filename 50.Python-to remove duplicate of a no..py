a=input("Enter the string : ")
b=" "
for char in a:
    if char not in  b:
        b=b+char
print(b)