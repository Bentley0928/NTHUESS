from numpy import sqrt 
a,b,c=int(input()),int(input()),int(input())
if (b*b-4*a*c)<0:
    print((-b/2*a),end="")
    print("±",end="")
    print((sqrt(-(b*b-4*a*c)))/2*a,end="")
    print("i")
else:
    print((-b+sqrt(b*b-4*a*c))/2*a)
    print(" and ")
    print(-(-b-sqrt(b*b-4*a*c))/2*a)