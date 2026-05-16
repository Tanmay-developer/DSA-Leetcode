n = int(input("Enter the Number: "))

for i in range(1, n+1):
    space = n-i
    for k in range(1, space+1):
        print(' ', end=' ')
    for j in range(1, i+1):
        print('*', end=' ')
    print('\n')