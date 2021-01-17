/*
Platform :- Leetcode
Problem :- Tuple with same product
*/

bool comp(pair<pair<int,int>,long int>&P,pair<pair<int,int>,long int>&Q){
    return P.second<Q.second;
}

class Solution {
public:
    int tupleSameProduct(vector<int>& A) {
        set<int>zz;
        for(auto x:A)zz.insert(x);
        vector<int>nums;
        for(auto x:zz)nums.push_back(x);
        
        vector< long long>ans;
        for(int i=0;i<nums.size();++i){
            for(int j=i+1;j<nums.size();++j){
                if((i!=j)){
                    ans.push_back(nums[i]*nums[j]);
                }
            }
        }
        
         
        map<int,int>P;
        for(auto x:ans){
            P[x]++;
        }
        
        int tot=0;int temp=0;
        for(auto x:P){
            int z=x.second;
            z*=(z-1);
            z/=2;
            tot+=(z)*8;
        }
        return tot;
    }
};
