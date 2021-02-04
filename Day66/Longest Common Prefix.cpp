/*
Platform :- Leetcode
Problem :- Longest Common Prefix
Hint :- Use first string and compare with all other to find the prefix
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)return "";
        string ans;
         string temp=strs[0];
            for(int j=1;j<strs.size();++j){
                string x;
                int n=temp.size();
                int m=strs[j].size();
               for(int k=0;k<(min(n,m));++k){
                   if(strs[j][k]==temp[k]){
                       x+=temp[k];
                   }
                   else break;
               }        
                temp=x;
            }
        ans=temp;
        return ans;
    }
};
