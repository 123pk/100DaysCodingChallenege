/*
Platform :- Leetcode
Problem :- Valid Mountain array
Approach :- i. Find the index at which maximum value is present in array
           ii. check to left side of that index if (arr[i] <= arr[i-1]) 
           iii. check to right side of that index if (arr[i]>= arr[i-1])
           iv. if any of condition of ii and iii step is true then return false else retrun true


*/


class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)return false;
        int f=0;
        int mx=-1,temp=-1;
        for(int i=0;i<arr.size();++i){
            if(mx<arr[i]){
                mx=arr[i];
                temp=i+1;
            }
        }
        
        if(temp==1 || temp==arr.size())return false;
        
        //checking to left side of maximum value
        for(int i=1;i<temp;++i){
            if(arr[i]<=arr[i-1]){
                f=1;break;}
        }
        if(f)return false;
        
        //checking to right side of maximum value
        for(int i=temp;i<arr.size();++i){
            if(arr[i]>=arr[i-1]){
                f=1;
                break;
            }
        }
        if(f)return false;
        return true;
    }
};
