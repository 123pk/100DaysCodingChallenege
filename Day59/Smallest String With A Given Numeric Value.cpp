/*
Platform :- Leetcode
Problem :- Smallest String With A Given Numeric Value
*/

class Solution {
public:
    
    string pk(int n, int k) 
{ 
    string arr = ""; 
  
    for(int i = 0; i < n; i++) 
        arr += 'a'; 
  
    
    for (int i = n - 1; i >= 0; i--) 
    { 
        k -= i; 
  
        // If k is a positive integer 
        if (k >= 0) 
        { 
  
            // 'z' needs to be inserted 
            if (k >= 26) 
            { 
                arr[i] = 'z'; 
                k -= 26; 
            } 
  
            // Add the required character 
            else
            { 
                char c= (char)(k + 97 - 1); 
                arr[i] = c; 
                k -= arr[i] - 'a' + 1; 
            } 
        } 
  
        else
            break; 
  
        k += i; 
    } 
    return arr; 
}
    
    string getSmallestString(int n, int k) {
        return pk(n,k);
    }
};
