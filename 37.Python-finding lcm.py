a=eval(input("Enter the first number : "))
b=eval(input("Enter the second number : "))
for i in range(1,a*b+1):
    if i%a==0 and i%b==0:
        print("The lcm of two numbers = ",i)
        break

GCD=(a*b)/i # greatest commom divisor
print("THE GCD IS EQUAL TO ",GCD)