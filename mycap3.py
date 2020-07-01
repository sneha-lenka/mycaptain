string=input("enter the required string")
d=dict()
for key in string:
    if key not in d:
        d[key]=1
    else:
        d[key]=d[key]+1
print (d)
    
    


        
        
        
    
    
