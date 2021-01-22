/*
Platform :- Leetcode
Problem :- Determine if Two Strings Are Close
*/

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>P,Q;
        set<char>ch,ch2;
        map<int,int>R;
        for(auto x:word1)
        {
            P[x]++;
            
                ch.insert(x);
            
        }
        
        for(auto x:word2)
        {
            Q[x]++;
            if(ch.find(x)==ch.end())
            {
                return false;
            }
        }
        
        int f=0;
        map<int,int>S;
        for(auto x:P)
        {
            R[x.second]++;
        }
        
        for(auto x:Q)
        {
            S[x.second]++;
        }
        
        for(auto x:P)
        {
            if(!S[x.second])
            {
                return false;
            }
            else
            {
                S[x.second]--;
            }
        }
        for(auto x:Q)
        {
            if(!R[x.second])
            {
                return false;
            }
            else
            {
                R[x.second]--;
            }
        }
        return true;
        
        
    }
};
