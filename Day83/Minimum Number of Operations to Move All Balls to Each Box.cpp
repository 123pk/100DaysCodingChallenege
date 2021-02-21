/*
Platform :- Leetcode
Contest :- Weekly contest 229
Problem :- Minimum Number of Operations to Move All Balls to Each Box
*/

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;
        for(int i=0;i<boxes.size();++i){
            int c=0;
            int tot=0;
            for(int j=i-1;j>=0;--j){
                c++;
                if(boxes[j]=='1'){
                    tot+=c;
                }
            }
            c=0;
            for(int j=i+1;j<boxes.size();++j){
                c++;
                if(boxes[j]=='1'){
                    tot+=c;
                }
            }
            ans.push_back(tot);
        }
        return ans;
    }
};
