    bool compare(vector<int> a,vector<int> b){


        if(a[0] < b[0]){
            return true;
        }
        else if(a[0] == b[0]){
            return a[0] < b[0];
        }
        else{
            return false;
        }
    }
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        if(intervals.empty())return result;
        sort(intervals.begin(),intervals.end(),compare);
        for(int i=0;i<intervals.size();i++){
            result.push_back(intervals[i]);
            if(i){
                if(result[result.size()-2][1] >= result[result.size()-1][0] ){
                    if(result[result.size()-2][1] < intervals[i][1]){
                         result[result.size()-2][1] = intervals[i][1];
                    }
                   
                    result.pop_back();
                } 
                
                    
            
            
            }
           
        }
        return result;
    }

};
