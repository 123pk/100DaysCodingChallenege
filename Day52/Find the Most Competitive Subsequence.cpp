/*
Platform :- Leetcode
Problem :- Find the Most Competitive sequence
Explaination :- https://leetcode.com/problems/find-the-most-competitive-subsequence/discuss/952786/JavaC%2B%2BPython-One-Pass-Stack-Solution
*/

class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        stack<int>P;
        for(int i=0;i<nums.size();++i){
            if(P.size()==0){
                P.push(nums[i]);
            }
            else{
                int z=P.size();
                int zz=nums.size()-i;
                if((z+zz)>k){
                    int f=0;
                    while(1){
                        int z1=P.size();
                        int zz1=nums.size()-i;
                        if((z1+zz1)>k){
                            int temp=P.top();
                            if(nums[i]<temp)
                            {  
                                P.pop();
                                f=1;
                                if(P.empty()){
                                    P.push(nums[i]);
                                    break;
                                }
                            }
                            else{
                                P.push(nums[i]);
                                break;
                            }
                        }
                        else{
                            if(f)P.push(nums[i]);
                            break;
                        }
                        if(P.empty())break; 
                    }
                }
                else{
                    P.push(nums[i]);
                }
            }
        }
        
         
        int xx=k;
        vector<int>ans;
        while(!P.empty()){
            ans.push_back(P.top());
            P.pop();
          
        }
        reverse(ans.begin(),ans.end());
         vector<int>R;
        for(int i=0;i<k;++i){
            R.push_back(ans[i]);
        }
        return R;
    }
};
