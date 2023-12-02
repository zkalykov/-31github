def m(x,y):
    if x==0 or y==0:
        return 0
    if y==1:
        return x
    return x+m(x,y-1)
a=int(input("Enter first number : "))
b=a
temp_a=0
temp_b=0

if a<0:
    temp_a=1 
if b<0:
    temp_b=1 

a=abs(a)
b=abs(b) 
res=m(a,b)

if temp_b!=temp_a:
    print(res*-1)
else:
    print(res)
    
