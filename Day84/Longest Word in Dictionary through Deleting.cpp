/*
Platform :- Leetcode
Problem :- Longest Word in Dictionary through Deleting
*/

bool comp(string a, string b) 
{ 
    if(a.size()==b.size()){
    if (a.compare(0, b.size(), b) == 0 
        || b.compare(0, a.size(), a) == 0) 
  
        return a.size() > b.size(); 
  
   
    else
        return a < b; 
    }
    return a.size()>b.size();
} 

class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
         
        string ans;
        vector<string>P;
        for(int i=0;i<d.size();++i){
            int start=0;
            for(int j=0;j<d[i].size();++j){
                int f=0;
                for(int k=start;k<s.size();++k){
                    if(s[k]==d[i][j]){
                        start=k+1;
                        if(j==d[i].size()-1){
                            
                                P.push_back(d[i]);
                             
                        }
                        f=1;
                        break;
                    }
                }
                if(f==0)break;
            }
        }
        if(P.size()==0)return ans;
        if(P.size()>1){
            sort(P.begin(),P.end(),comp);
        }
        
         
        ans=P[0];
        return ans;
    }
};
