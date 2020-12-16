/*
Platform :- Codeforces
Problem :- D- Add to Neighbour and Remove
Approach :-  We need to find minimum number of operations required to make all element of array equal .
             i. Thing to notice is that maximum number of operations cannot be more than 'n' .
             ii. As the value of 'n' is atmax 3000 we can use O(n*n) Approach which is to divide array into small subparts such
                 that sum of elemnts of that subparts are equal 
             iii. we will start with making 'n' subparts and go till '1'
             iv. we need to maintain prefix sum array to find sum of subparts in O(1) time
             v. we will perform the operation until we find all equal subparts
             vi. then we will print our ans that is (n-tot_subparts_that_have_same_sum)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        long int A[n];
        long int P[n];                   //P is prefix sum array
        long int tot=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(i==0){
                P[i]=A[i];
            }
            else{
                P[i]=P[i-1]+A[i];
            }
        }
        tot+=P[n-1];                //tot contain total sum of array
        int ans=0;
        for(int i=n;i>=1;--i){
            if(tot%i)continue;             // we need to divide into equal subparts so we need i such that ( (tot % i) == 0 )
            else{
                long int z=tot/i;          // z is sum of subparts that is required 
                int d=i;
                long int temp=0;
                for(int j=0;j<n;++j){
                    if(P[j]-temp==z){       
                        d--;
                        temp=P[j];
                    }
                }
                
                if(d==0){ans=i;break;}
            }
        }
        cout<<(n-ans)<<endl;
    }
}
