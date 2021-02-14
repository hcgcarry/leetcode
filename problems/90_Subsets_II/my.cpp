class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result={{}};
        
        for(int i=0;i<nums.size();i++){
            int dupCount=1;
            //記得check i+1是否小於nums.size()
            while(i+1 < nums.size() && nums[i+1] == nums[i]){
                i++;
                dupCount++;
            }
            vector<vector<int>> tmp=result;
            int tmpLen = tmp.size();
            for(int j=0;j<dupCount;j++){
                for(int k=0;k<tmpLen;k++){
                    tmp[k].push_back(nums[i]);
                    result.push_back(tmp[k]);
                }
            }
            
        }
        return result;
        
    }
};