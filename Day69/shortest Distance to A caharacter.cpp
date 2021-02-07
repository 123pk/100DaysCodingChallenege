/*
Platform :- Leetcode
Event :- February Daily challenge
Problem :- Shortest distance to a Character
*/

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ans;
        int n=s.size();
        for(int i=0;i<n;++i){
            int f=0;
            if(s[i]==c){
                ans.push_back(0);
                continue;
            }
            int d=0,e=0;
            for(int j=i-1;j>=0;--j){
                if(s[j]==c){
                    f=1;
                    d++;
                    break;
                }
                else d++;
            }
            int temp=INT_MAX;
            if(f){
                temp=min(temp,d);
            }
            
            f=0;
            for(int j=i+1;j<n;++j){
                if(s[j]==c){
                    e++;
                    f=1;
                    break;
                }
                else e++;
            }
            if(f){
                temp=min(temp,e);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
