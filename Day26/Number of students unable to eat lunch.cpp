class Solution {
public:
    int countStudents(vector<int>& t, vector<int>& q) {
        int c=0,d=0;
        for(auto x:t)if(x)c++;
        for(auto x:q)if(x)d++;
        if(c==d){return 0;}
        
        vector<int>s;
        vector<int>p;
        p=q;
        s=t;
        
        while(1){
            
            int f=0;
            vector<int>z;
            int i=0,j=0;
            for(int i=0;i<s.size();++i){
                
                if(s[i]==p[0]){
                    p.erase(p.begin());
                    f=1;
                    if(p.size()==0)break;
                }
                else{
                    z.push_back(s[i]);
                }
            }
            if(f==0)break;
            s.clear();
            s=z;
            
        }
        
        return s.size();
        
    }
};
