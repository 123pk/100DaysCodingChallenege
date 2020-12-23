/*
Platform :- Leetocode
Problem :- Next Greater Element III
Approach :-  i. if digits of n are in descending order then it is already the max value and hence no value can be greater than it so return '-1'
            ii. convert n in string of digits and traverse from behind and if you find a[i] > a[i-1] store the index 'i'--> reverse all elements form 'i' to a.size()-1
            iii. convert the string into integer value and compare with n
            iv. if value<= n return -1 
            v. else return value
            

*/

class Solution {
public:
    int nextGreaterElement(int n) {
        
    string s = to_string(n);
    int i = s.size() - 2;
    
    for(; i >= 0; i--){
        if(s[i] < s[i + 1]) break;
    }
    
    if(i < 0) return -1;
    
    for(int j = s.size() - 1; j > i; j--){
        if(s[j] > s[i]){
            swap(s[i], s[j]);
            break;
        }
    }
    
    reverse(s.begin() + i + 1, s.end());
    long res = stol(s);
    if(res<=n)return -1;
    return res;
}
};
