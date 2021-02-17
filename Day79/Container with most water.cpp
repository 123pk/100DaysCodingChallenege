/*
Platform :- Leetcode
Event :- February Daily challenge 
Problem :- Container with most water
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx=-1;
        int tot=0;
        int n=height.size();
        int i=0,j=n-1;
        tot=min(height[i],height[j]);
        tot*=(j-i);
        mx=tot;
        while(i<j){
            int temp=min(height[i+1],height[j]);
            temp*=((j)-(i+1));
            
            if(temp>tot){
            int temp2=min(height[i],height[j-1]);
            temp2*=((j-1)-(i));
             if(temp2>temp){
                 j--;
                 n--;
                 tot=temp2;
             }
             else{
                 tot=temp;
                 i++;
                 n--;
             }
            }
            else{
                int temp2=min(height[i],height[j-1]);
                temp2*=((j-1)-i);
                if(temp2>tot){
                    j--;
                    n--;
                    tot=temp2;
                }
                else{
                    if(height[i]<height[j]){
                        i++;
                    }
                    else{
                        j--;
                    }
                }
            }
            mx=max(mx,tot);
           
        }
        
        return mx;
    }
};
