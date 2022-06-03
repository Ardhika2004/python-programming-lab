# num=int(input("Enter the number :"))
# x=num
# while num>0:
#     a=num%10
#     num=num//10
#     b=num%10
#     num=num//10
#     c=num%10
#     num=num//10
#     rev=c*c*c+b*b*b+a*a*a
# if rev==x:
#         print("Enter number is armstrong ")
# else:
#         print("Enter number is not armstrong ")



x=eval(input('Enter the number :'))
s=x
sum=0

while x>0:
        a=x%10
        x=x//10
        sum+=a**3
x=x//10
if s==sum:
        print('Armstrong')
else:
        print('not armstrong')