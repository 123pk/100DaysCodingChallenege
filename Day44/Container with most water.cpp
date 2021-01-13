/*
Platform :- Leetcode
Problem :- Container with most water 
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx=-1;
        int start=0,end=height.size()-1;
        while(start<=end){
            int tot=(end-start)*min(height[start],height[end]);
            mx=max(mx,tot);
            if(height[start]<height[end]){
                start++;
            }
            else{
                if(height[start]>height[end]){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        return mx;
    }
};
