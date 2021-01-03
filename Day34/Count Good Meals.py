/*
Platform :- Leetcode
Problem :- Count Good Meals
Approach :- For all powers of 2 in given range find if ( power_of_2 - arr[i] ) present or not if present add the count of that element to answer don't miss MOD
*/

class Solution:
    def countPairs(self, arr: List[int]) -> int:
        m = {}  
        n=len(arr)
        for i in range(n):
            m[arr[i]] = m.get(arr[i], 0) + 1
        ans = 0
        for i in range(22):
            key = int(pow(2, i))
            for j in range(n):
                k = key - arr[j]  
                if k not in m:
                    continue
                else:
                    ans += m.get(k, 0)
                    if k== arr[j]:
                        ans=ans-1
                
        ans//=2
        ans=ans%1000000007
        return ans
        
