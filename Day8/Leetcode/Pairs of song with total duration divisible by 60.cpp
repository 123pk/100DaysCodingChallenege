/*
Platform :- Leetcode
Question :- Pairs of Songs With Total Durations Divisible by 60
Approach :- Use map to store %60 value of all times in array and when we find a value which add up to current value to make a sum divisible by that sum 
           we increment our count by the number of such values .
           Note:-  if a number is divisible by 60 or ( time[i]%60 == 0  )
           Ex:- Time = {30,60,150,60,20}
              we will separately count the numbers that are divisible by 60 
              Array1 = { 60,60}     --->numbers divisible by 60 
              Array2 = { 30,150,20} ---->numbers not divisible by 60
              i.for Array 1 --> total number of pairs is ( n*(n-1))/2 --> n= size of array 1
             ii.for Array 2 ---> we first change all values to %60 so it becomes ---> { 30,30,20 }
             iii. we will use map to find for time[i] if (60-time[i]) is present then we update count ---> count+=P[(60-time[i]))
Time complexity :- O(n)
*/
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int c=0,d=0;
        map<int,int>P;
        for(int i=0;i<time.size();++i){
            if(time[i]%60==0){
                d++;
                continue;
            }
            time[i]%=60;
            int temp=60-time[i];
            if(P[temp]){
                c+=P[temp];
            }
            P[time[i]]++;
        }
        c+=((d*(d-1))/2);

        return c;
    }
};
