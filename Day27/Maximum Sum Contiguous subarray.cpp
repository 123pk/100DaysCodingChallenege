/*
Platform :- GeeksforGeeks
Problem :- Maximum Sum Continguous array
Approach :- Kadane's algorithm
*/

int maxSubarraySum(int arr[], int N){
        // Your code here
        int tot=0;
        int mx=-10000008;
        for(int i=0;i<N;++i){
            tot+=arr[i];
            mx=max(mx,tot);
            if(tot<0)tot=0;
        }
        return mx;
    }
