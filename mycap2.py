#fibonacci
n= int(input("enter number till which fibonacci series has to be generated"))
sum=0
a=0
b=1
count=1
while(count<=n):
    print(sum,end="")
    count=count+1
    a=b
    b=sum
    sum=a+b
     
     
