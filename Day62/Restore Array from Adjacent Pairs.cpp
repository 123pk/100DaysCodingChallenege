/*
Platform :- Leetcode
Contest :- Weekly Contest 226
Problem :- Restore the Array From Adjacent Pairs
Hint :- Start and end point have only one connection , find one and add the next element according use bool array to skip already used element
*/

class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& A) {
        
        map<int,vector<int>>P;
        map<int,int>Q;
        set<int>Z;
        for(auto x:A){
            P[x[0]].push_back(x[1]);
            P[x[1]].push_back(x[0]);
            Z.insert(x[0]);
            Z.insert(x[1]);
        }
        vector<int>ans;
        for(auto x:P){
            if(x.second.size()==1){
                ans.push_back(x.first);
                ans.push_back(x.second[0]);
                break;
            }
        }
        Q[ans[0]]++;
        Q[ans[1]]++;
        int n=Z.size();
        int temp=ans[1];
        while(1){
              int f=0;
                for(int i=0;i<P[temp].size();++i){
                    if(Q[P[temp][i]]==0){
                        f=1;
                        Q[P[temp][i]]++;
                        ans.push_back(P[temp][i]);
                        temp=P[temp][i];
                        break;
                    }
                }
            
             if(n==ans.size() || f==0)break;
        }
        return ans;
    }
};
