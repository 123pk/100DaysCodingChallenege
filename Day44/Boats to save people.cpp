/*
Platform :- Leetcode
Problem :- Boats to save people
*/

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        map<int,int>P;
        int c=0;
        sort(people.begin(),people.end(),greater<int>());
        
        for(auto x:people)P[x]++;
        
        int end=people.size()-1;
        
        for(int i=0;i<people.size();++i){
            if((P[people[i]]>0)){
                if(people[i]==limit){
                    P[people[i]]--;
                    c++;
                }
                else{
                    if((P[people[end]]>0)){
                        if(people[i]+people[end]<=limit){
                            c++;
                            P[people[end]]--;
                            P[people[i]]--;
                            end--;
                        }
                        else{
                            P[people[i]]--;
                            c++;
                        }
                    }
                    else{
                        P[people[i]]--;
                        c++;
                    }
                }
            }
        }
        
        return c;
    }
};
