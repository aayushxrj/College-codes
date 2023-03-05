n=int(input("Enter num "))
for x in range(1,n+1):
    for i in range(0,n-x):
        print(" ", end='')
    for i in range(0,x):
        print(x, end=' ')
    print("")