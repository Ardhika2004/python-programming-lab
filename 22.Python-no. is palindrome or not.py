# number=eval(input("Enter the number : "))
# temp=number
# reverse=0
# while number!=0:
#     remainder= number%10
#     reverse= (reverse*10)+remainder
#     number//=10
# if reverse==temp:
#     print("Given number is pallindrome")
# else:
#     print("Given number is not pallindrome")

def pallindrome(num):
    s=num
    reverse=0
    while num!=0:
     rem=num%10
     reverse=(reverse*10)+rem
     num=num//10
    if reverse==s:
        return True
    else:
        return False
         

num=eval(input("Enter the number : "))
out=pallindrome(num)