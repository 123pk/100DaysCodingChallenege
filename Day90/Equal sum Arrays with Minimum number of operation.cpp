/*
Platfrom :- Leetcode
Problem :- Equal Sum Arrays with Minimum number of Operations 
Coontest :- Weekly contest 230
*/

class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int tot1=0,tot2=0;
        for(int i=0;i<nums1.size();++i){
            tot1+=nums1[i];
        }
        int d=0;
        for(auto x:nums2)tot2+=x;
        if(tot1==tot2)return 0;
         if(tot1<tot2){
             
              reverse(nums2.begin(),nums2.end());
             //cout<<tot1<<" "<<tot2<<endl;
             int i=0;int j=0;
             while(i<nums1.size() || j<nums2.size()){
                 if(i==nums1.size() && j==nums2.size())break;
                 if(i==nums1.size()){
                     if(tot1<tot2){
                         int temp=nums2[j]-1;
                         int temp2=tot2-tot1;
                         if(temp<temp2){
                             tot2-=temp;
                             d++;
                         }
                         else{
                             tot2-=temp2;
                             d++;
                             return d;
                         }
                     }
                     else  break;
                     j++;
                 }
                 else if(j==nums2.size()){
                     if(tot1<tot2){
                         int temp= 6-nums1[i];
                         int temp2= tot2-tot1;
                         if(temp<temp2){
                             tot1+=temp;
                             d++;
                         }
                         else{
                             tot1+=temp2;
                             d++;
                             return d;
                         }
                     }
                     else break;
                     i++;
                 }
                 else{
                     int temp = 6-nums1[i];
                     int temp2=nums2[j]-1;
                     int temp3=tot2-tot1;
                     
                     if(temp3>temp){
                         if(temp3>temp2){
                             if(temp>temp2){
                                 tot1+=temp;
                                 i++;
                                 d++;
                             }
                             else{
                                 tot2-=temp2;
                                 d++;
                                 j++;
                             }
                         }
                         else{
                             tot2-=temp3;
                             d++;
                             return d;
                         }
                     }
                     else{
                         tot1+=temp3;
                         d++;
                         return d;
                     }
                       
                 }
                 
             }
         }
        else{
            int i=0;int j=0;
            reverse(nums1.begin(),nums1.end());
             while(i<nums1.size() || j<nums2.size()){
                 if(i==nums1.size() && j==nums2.size())break;
                 if(i==nums1.size()){
                     if(tot1>tot2){
                         int temp=6-nums2[j] ;
                         int temp2=tot1-tot2;
                         if(temp<temp2){
                             tot2+=temp;
                             d++;
                         }
                         else{
                             tot2+=temp2;
                             d++;
                             return d;
                         }
                     }
                     else  break;
                     j++;
                 }
                 else if(j==nums2.size()){
                     if(tot1>tot2){
                         int temp=  nums1[i]-1;
                         int temp2= tot1-tot2;
                         if(temp<temp2){
                             tot1-=temp;
                             d++;
                         }
                         else{
                             tot1-=temp2;
                             d++;
                             return d;
                         }
                     }
                     else break;
                     i++;
                 }
                 else{
                     int temp =  nums1[i]-1;
                     int temp2=6-nums2[j];
                     int temp3=tot1-tot2;
                     
                     if(temp3>temp){
                         if(temp3>temp2){
                             if(temp>temp2){
                                 tot1-=temp;
                                 i++;
                                 d++;
                             }
                             else{
                                 tot2+=temp2;
                                 d++;
                                 j++;
                             }
                         }
                         else{
                             tot2+=temp3;
                             d++;
                             return d;
                         }
                     }
                     else{
                         tot1-=temp3;
                         d++;
                         return d;
                     }
                       
                 }
                 
             } 
            
        }
         return -1;
    }
};
