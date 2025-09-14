t=int(input())
for _ in range(t):
    n=int(input())
    li=list(map(int,input().split()))
    even=[]
    odd=[]

    for num in li:
        if(num&1):odd.append(num)
        else: even.append(num)
    

    even.sort(reverse=True)
    odd.sort(reverse=True)

    if(len(odd)==0):
        print(0)
        continue

    ans=0
    for val in even:
        ans+=val

    
    indx=(len(odd)+1)//2

    for i in range(0,indx):
        ans+=odd[i]

    print(ans)