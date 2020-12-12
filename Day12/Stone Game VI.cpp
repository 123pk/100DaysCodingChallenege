/*
Platform :- Leetcode
Problem :- Stone Game VI
Approach :- The approach that I have used here is for each index I have calculated A[i]+B[i] and paired it with the corresponding index 
            and then sorted it on the basis of values of A[i]+B[i]   . I have done so because everyone would love to play a move which have large impact
            next we will start accordingly with c=0 whenever c%2==0 Alice will make a move and we will add A[i] to his points similarly with bob
            At the end we compare total coins of both of them

*/
bool compare(pair<int,int>P,pair<int,int>Q){
    return P.first>Q.first;
}

class Solution {
public:
    int stoneGameVI(vector<int>& A, vector<int>& B) {
        int n=A.size();
        int tot1=0,tot2=0;
        vector<pair<int,int>>P;
        for(int i=0;i<n;++i){
            P.push_back(make_pair(A[i]+B[i],i));
        }
        
        sort(P.begin(),P.end(),compare);
        
        int c=0;
        for(int i=0;i<n;++i){
            if(c%2){
                tot2+=B[P[i].second];
            }
            else{
                tot1+=A[P[i].second];
            }
            c++;
        }
        
        if(tot1==tot2)return 0;
        if(tot1>tot2)return 1;
        return -1;
    }
};
