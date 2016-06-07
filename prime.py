c=0
for num in range(1,10):
    for i in range(2,num):
        if (num%i==0):
            break
        else:
            print(num)
            c=c+1
            print("count:",c)
            break
            print(c)
