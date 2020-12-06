"""
Platform :- Leetcode
Question :- Concatenation of Consecutive Binary Numbers
Approach :- run a loop from (i = 1 to  i = n) and change 'i' to binary form which we can do easily using 'bin()'
           i.'bin()' - it convert number into binary form with unwanted prefix '0b' which we can remove by string slicing and add to our answer string
           ii. At the end we will convert binary string into integer . there are various ways one way which I used is 'int(string,2)'
           iii. return answer by doing mod of the integer value
"""
class Solution:
    
    def concatenatedBinary(self, n: int) -> int:
        ans=""
        for x in range(n):
            z=bin(x+1)
            ans=ans+z[2:]
        #print(ans)
        temp=int(ans,2)
        temp=temp%1000000007
        return temp
