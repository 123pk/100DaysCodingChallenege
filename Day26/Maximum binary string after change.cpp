/*
Platform :- Leetcode
Approach :- if you will read the problem carefully you will find that you can always group '0's all together and let c= total '0's then we can convert (c-1)of them into '1's
            rest we will be '1's in our string . we will add '1' up to staring index where '0' occured

*/

class Solution {
public:
    string maximumBinaryString(string binary) {
        int f=0;
        string s;
        if(binary.size()==1)return binary;
        if(count(binary.begin(),binary.end(),'0')<=1)return binary;
        
        int z=0;
        for(int i=0;i<binary.size();++i){
            if(binary[i]=='0'){
                z=i;
                break;
            }
            else{
                s+=binary[i];
            }
        }
        
        int c=count(binary.begin(),binary.end(),'0');
        for(int i=1;i<c;++i){
            s+='1';
        }
        s+='0';
        for(int i=s.size();i<binary.size();++i){
            s+='1';
        }
        return s;
    }
};
