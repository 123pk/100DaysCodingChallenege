/*
Platform :- Leetcode
Problem  :- Check if two string arrays are eqivalent
*/
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       string s1,s2;
        for(auto x:word1)
        {
            s1+=x;
        }
        
        for(auto x:word2)
        {
            s2+=x;
        }
        
        if(s1==s2)
        {
            return true;
        }
        return false;
    }
};
