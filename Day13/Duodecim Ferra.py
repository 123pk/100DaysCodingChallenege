# Platform :- Atcoder
# Problem :- Duodecim Ferra
# Approach :- It looks scarry but you need to find (n-1) C (n-12) Permutation

n=int(input())
temp=n-12
z=1
for x in range(n-temp,n):
    z= z*x
z2=1
for x in range(1,temp+1):
    z2= z2*x
print((z//z2))
