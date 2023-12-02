l=[]
dp={}

def fac(n):
	if n<=1:
		return 1;
	return n*fac(n-1)

def unique_combination(s,n,p):
	if dp.get(s,0)!=1:
	    dp[s]=1
	    l.append(s)
	if p<=1:
		return s
	if n<=0:
		n=len(s)-1
	new_s=s[:n-1] + s[n] + s[n-1] + s[n+1:]
	return unique_combination(new_s,n-1,p-1)

s=str(input("Enter your unique string : "))
p=fac(len(s))
unique_combination(s,len(s)-1,p)
#print("Factorial : ",p)
print("Here is results :")
for x in l:
	print(x)
