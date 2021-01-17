/*
Platform :- Leetcode
Problem :- Count Sorted Vowel Strings
*/

class Solution {
public:
    int countVowelStrings(int n) {
        if(n==1)
        {
            return 5;
        }
        
        int A[5]={5,4,3,2,1};
        int tot=15;
        if(n==2)
        {
            return tot;
        }
        for(int i=3;i<=n;++i)
        {  int temp=tot;
         int z=0;
            for(int j=0;j<5;++j)
            {
                if(j==0)
                {
                    z=A[j];
                    A[j]=tot;
                }
                else
                {  
                    tot+=(temp-z);
                    temp=temp-z;
                    z=A[j];
                    A[j]=temp;
                    
                }
            }
        
        }
        return tot;
    }
};
