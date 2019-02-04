

i = int(input())
while i>0:
	n=int(input())
	n=bin(n)
	ans=0
	for j in n:
		if(j=='1'):
			ans+=1
	i-=1
	print(ans)