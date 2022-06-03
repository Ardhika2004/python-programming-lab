row=int(input("Enter the number of rows : "))
k=65
for i in range(1,row+1):
    
    for j in range(i):
        
        print(chr(k),end='')
    k=k+1
    # for j in range(row+1-i):
    #     print("*",end='')
    print()