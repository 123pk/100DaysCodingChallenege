/*
Platform :- Atcoder
Problem :- A - Simple Math 2
*/
N,M = map(int,input().split()[:2])
print((pow(10,N,M*M))//M % M)
