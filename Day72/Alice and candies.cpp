/*
Platform :- Hackerearth
Problem :- Alice and Candies
Contest :- February easy
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
	
    int ans=0;
    for(long long i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int x=i;
            int y=n/i;
            if((x+y)%2==0)
            {
                cnt++;
            }
        }
    }
    cout<<ans<<endl;
}
