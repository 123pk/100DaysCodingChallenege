/*
Platform :- Leetcode
Problem :- Latest Time by Replacing Hidden Digits
Hint :- brute force
*/

class Solution {
public:
    string maximumTime(string time) {
         if(time[time.size()-1]=='?'){
             time[time.size()-1]='9';
         }
        if(time[time.size()-2]=='?'){
            time[time.size()-2]='5';
        }
        
        
        if(time[1]=='?'){
            if(time[0]=='?'){
                time[0]='2';
                time[1]='3';
            }
            else{
                if(time[0]=='2'){
                 time[1]='3';   
                }
                else{
                    time[1]='9';
                }
            }
            
        }
        else{
            if(time[0]=='?'){
                if(time[1]>'3'){
                    time[0]='1';
                }
                else{
                    time[0]='2';
                }
            }
        }
        return time;
    }
};
