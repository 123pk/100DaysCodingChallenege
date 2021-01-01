/*
Platform :- Leetcode
Problem :- Check Array Formation Through Concatenation
*/
bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
            
        unordered_map<int,vector<int>> m;
        
        for(int i=0;i<pieces.size();i++)
        {
            m[pieces[i][0]] = pieces[i];
        }
        
        for(int i=0;i<arr.size();)
        {
            if(m.find(arr[i])==m.end())
                return false;
            
            vector<int> temp = m[arr[i]];
            
            for(int j=0;j<temp.size();j++,i++)
            {
                if(arr[i]!=temp[j])
                    return false;
            }
        }
        
        return true;
    }
