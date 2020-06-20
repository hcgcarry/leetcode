// 效能不好
//就只是拿permutation的code 使用erase 刪掉重複地而已
class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if(nums.empty())return this->result;
        findPermute(nums,0,nums.size()-1);
        sort(this->result.begin(),this->result.end());
        this->result.erase(unique(result.begin(),result.end()),result.end());
        return this->result;
    }
    // find all permutation of nums with index_left to index_right
    void findPermute(vector<int>& nums,int index_left,int index_right){
        if(index_left == index_right){
            vector<int> tmp(nums);
            result.push_back(tmp);
            
        }
        else{
            for(int i=index_left;i<=index_right;i++){
                
                    swap(nums[index_left],nums[i]);
                findPermute(nums,index_left+1,index_right);
                swap(nums[index_left],nums[i]);
                
                
            }
            
        }
        
    }
};