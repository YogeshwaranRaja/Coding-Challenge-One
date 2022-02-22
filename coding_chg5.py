from numpy import append

rows=int(input('Please enter the number of rows'))
lst=[]
i=0
space=rows
while i<=rows:
    print(" "*space,end="")
    temp=[]
    for ch in range (0,len(lst)+1):
        if ch==0:
            temp.append(1)
        elif ch== len(lst):
            temp.append(1)
        else:
            temp.append(lst[ch]+lst[ch-1])
    lst=temp
    i+=1
    space-=1
    print(*temp)