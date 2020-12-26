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
