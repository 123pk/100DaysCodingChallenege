/*
Platform :- Leetcode
Problem :- Decode Xored Array
*/

int xor_all_elements(int n) 
{ 
  
    switch (n & 3) { 
  
    case 0: 
        return n; 
    case 1: 
        return 1; 
    case 2: 
        return n + 1; 
    case 3: 
        return 0;
    default: return 0;
    } 
} 
  
  
vector<int> pk(vector<int> xorr, int n) 
{ 
     
    vector<int> arr; 
  
    // XOR of N natural numbers 
    int xor_all = xor_all_elements(n); 
    int xor_adjacent = 0; 
  
     
    for (int i = 0; i < n - 1; i += 2) { 
        xor_adjacent = xor_adjacent ^ xorr[i]; 
    } 
    int last_element = xor_all ^ xor_adjacent; 
    arr.push_back(last_element); 
  
     
    for (int i = n - 2; i >= 0; i--) { 
        // Finding the next and next elements 
        last_element = xorr[i] ^ last_element; 
        arr.push_back(last_element); 
    } 
  
    return arr; 
}

class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int n=encoded.size()+1;
        vector<int>ans= pk(encoded,n);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
