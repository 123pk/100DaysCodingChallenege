/*
Platform :- Leetcode
Problem :- Maximum Number of Balls in a Box
Contest :- Weekly contest 226
Approach :- traverse from lower_limit to higher_limt and using map store the sum of digits of each number and print one with maximum value
*/

class Solution {
public:
    int countBalls(int l , int h ) {
        map<int,int>P;
        for(int i=l;i<=h;++i){
            string s=to_string(i);
            int temp=0;
            for(int j=0;j<s.size();++j){
                temp+=s[j]-'0';
            }
            P[temp]++;
        }
        
        int mx=-1;
        for(auto x:P){
            mx=max(mx,x.second);
        }
        return mx;
    }
};
