/*
Platform :- GeeksforGeeks
Problem :- Maximum Ocurring Digit
Approach :- count occurence of digit k in each number and find number with maximum k or minimum number with same number of k
*/

int maxoccourence(int arr[], int n, int k)
    {
        // code here
        sort(arr,arr+n);
        int ans=0,mx=0;
        string s=to_string(k);
        char ch=s[0];
        for(int i=0;i<n;++i){
            string temp=to_string(arr[i]);
            if(count(temp.begin(),temp.end(),ch)>mx){
                ans=arr[i];
                mx=count(temp.begin(),temp.end(),ch);
            }
        }
        return ans;
    }
