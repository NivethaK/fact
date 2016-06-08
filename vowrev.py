t='hello'
v=['a','e','i','o','u']
r=''
for i in t:
     if i not in v:
         r+=i
         
print(r[::-1])
