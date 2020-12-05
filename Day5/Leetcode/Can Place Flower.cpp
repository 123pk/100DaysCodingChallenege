/*
Platform :- Leetcode
Question :- Can Place Flower
Approach :- if (A[i] ==0 ) check A[i-1] && A[i+1] if both are 0 add 1 to current index and decrease n by 1 . if after
            traversing n>0 return false
                           else true

*/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        
        for(int i=0;i<f.size();++i){
            if(f[i]==0){
                if(i==0){
                    if( (i+1) < f.size() ){
                        if(f[i+1]){
                            continue;
                        }
                        else{
                            n--;
                            f[i]=1;
                        }
                    }
                    else{
                        f[i]=1;
                        n--;
                    }
                }
                else if(i==f.size()-1){
                    if((i-1)>=0){
                        if(f[i-1]){
                            continue;
                        }
                        else{
                            n--;
                            f[i]=1;
                        }
                    }
                    else{
                        f[i]=1;
                        n--;
                    }
                }
                else{
                    if(f[i-1]==0 && f[i+1]==0){
                        n--;
                        f[i]=1;
                    }
                }
            }
        }
        
        if(n>0)return false;
        return true;
    }
};
