a,b=int(input()),int(input())
bol=1
counter=0
s=""
for i in range(a,b):
    bol=1
    if i==1:continue
    if i==2:
        counter+=1
    for j in range(2,i-1):
        if i%j==0:
            bol=0
            break
    if bol==1:
        counter+=1
        s+=str(i)+", "
s = s[:-2]
print("有"+str(counter)+"個質數\n"+s)