num=eval(input("Enter the number whose factorial you want : "))
product=1
for i in range(num,1,-1):
    product=product*i
print("The factorial of the given number : ",product)
