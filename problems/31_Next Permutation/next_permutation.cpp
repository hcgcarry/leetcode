class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len = nums.size();
        int i;
        if(!nums.empty()){
            // maximum
            
            for(i = nums.size()-2;i >=0 ; i--){
              if(nums[i] < nums[i+1]) break;
            }
             if(i <0){
                reverse(nums.begin(),nums.end());
                 return;
            }
            
              
                    
            for(int j = len-1;j>i ;j--){
                if(nums[j] > nums[i] ){
                    swap(nums[j],nums[i]);
                    reverse(nums.begin()+i+1,nums.end());
                    break;
                }
            }
                   
        
           
        }
        
        
    }
 
};