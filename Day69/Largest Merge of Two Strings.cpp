/*
Platform :- Leetcode
Contest :- Weekly contest 227
Problem :- Largest Merge of Two Sequence
*/

class Solution {
public:
    string largestMerge(string word1, string word2) {
        string ans;
        while(1){
            if(word1.size()==0 && word2.size()==0){
                break;
            }
            
            if(word1.size()==0){
                ans+=word2[0];
                word2.erase(word2.begin());
            }
            else if(word2.size()==0){
                ans+=word1[0];
                word1.erase(word1.begin());
            }
            else{
                if(word1[0]>word2[0]){
                    ans+=word1[0];
                    word1.erase(word1.begin());
                }
                else{
                    int i=0,j=0;
                    int f=0,g=0;
                    while(i<word1.size()  || j<word2.size()){
                        
                        if(i==word1.size()){
                            if(word1[i-1]<word2[j]){
                                g=1;
                                break;
                            }
                            else j++;
                            continue;
                        }
                        if(j==word2.size()){
                            if(word2[j-1]<word1[i]){
                                f=1;break;
                            }
                            else i++;
                            continue;
                        }
                        if(word1[i]<word2[j] || word1[i]>word2[j]){
                            if(word1[i]<word2[j]){
                                g=1;
                            }
                            else{
                                f=1;
                            }
                            break;
                        }
                        i++;
                        j++;
                    }
                    
                    if(f==0 && g==0){
                        if(word1.size()<word2.size()){
                            ans+=word1[0];
                            word1.erase(word1.begin());
                        }
                        else{
                            ans+=word2[0];
                            word2.erase(word2.begin());
                        }
                    }
                    else{
                        if(f){
                            ans+=word1[0];
                            word1.erase(word1.begin());
                        }
                        else{
                            ans+=word2[0];
                            word2.erase(word2.begin());
                        }
                    }
                }
            }
        }
        return ans;
    }
};
