/*
Platform :- Leetcode
Problem :- The kth factor of n
Approach :- we need to find the factors of n and return the kth factor is present else return -1
          we can find factors in O(n) and O(sqrt(n)) .
          We have use O(sqrt(n))aproach you can found about this approach more from :- https://www.geeksforgeeks.org/find-divisors-natural-number-set-1/.
*/

class Solution {
public:
    int kthFactor(int n, int k) {
        
        set<int>P;                          //we need set becuase we don't need any repeating values
        for(int i=1;i*i<=n;++i){
            if(n%i==0){
                if(n/i==i){
                    P.insert(i);
                }
                else{
                    P.insert(i);
                    P.insert(n/i);
                }
            }
        }
       
        int c=0;
        for(auto x:P){
            c++;
            if(c==k)return x;
        }
        return -1;
    }
};
