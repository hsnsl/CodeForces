###################CodeForces Problem Link : https://codeforces.com/problemset/problem/71/A #########################
###################Code Generated By Hasan Saleh ########################################
n=input() 
n=int(n)
res=[]
if(1<=n<=100):
    for i in range(0,n):
        w=input() 
        if(1<=len(w)<=100):
            if(len(w)>10):
                res.append(w[0]+str(len(w)-2)+w[len(w)-1])
            else:
                res.append(w)
for j in range(0,n):
    print(res[j])
