#1
import math
r=float(input("input the radius of the circle:"))
area= math.pi*r*r;
print('The area of the circle with radius is:',area)

#2
filename=input("input the filename:")
f_extns=filename.split(".")
print("the extension of the file is: "+repr(f_extns[-1]))
