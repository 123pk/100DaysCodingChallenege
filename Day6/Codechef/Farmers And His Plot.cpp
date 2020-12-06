/*
Platform :- Codechef
Problem :- Farmers And His Plot
Approach :- we know the biggest square that we can form of 'l' & 'b' is of size min(l,b)
            as we need smallest number of squares then we will have evntually larger area squares 
            so we will start loop from min(l,b) -->1 and find the min value of (l/i)*(b/i)
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int l,b;
        cin>>l>>b;
        
        int z=min(l,b);
        long int ans=1;
        for(int i=z;i>=1;--i){
            if(l%i || (b%i))
            {
                continue;
            }
            else{
                ans=(l/i)*(b/i);
                break;
            }
        }
        cout<<ans<<endl;
    }
}
