t=int(input())
for _ in range(t):
    n,m,x,y=map(int,input().split())
    
    li1=list(map(int,input().split()))
    li2=list(map(int,input().split()))
    # print(li1)
    ct=0
    for i in range(n):
        if(y>=li1[i]):ct+=1
    
    for i in range(m):
        if(x>=li2[i]):ct+=1

    print(ct)

    #print(n+m)