/*
Platform :- Leetcode
Contest :- Weekly contest 229
Problem :- Merge string Alternately
*/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=min(word1.size(),word2.size());
        string ans;
        int i=0;
        for( i=0;i<n;++i){
            
                ans+=word1[i];
           
                ans+=word2[i];
        }
        if(i==word1.size()){
            if(i==word2.size()){
                return ans;
            }
            else{
                for(int j=i;j<word2.size();++j){
                    ans+=word2[j];
                }
            }
            return ans;
        }
        else{
            for(int j=i;j<word1.size();++j){
                ans+=word1[j];
            }
            return ans;
        }
    }
};
