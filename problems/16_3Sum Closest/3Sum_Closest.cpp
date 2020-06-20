/*

*/


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
          if(nums.size()<3){
            return 0;
          }
            sort(nums.begin(),nums.end());
         int result = nums[0] +  nums[1] + nums[2];
       
        
        for(int i=0;i<nums.size();i++){
            
            int front=i+1;
            int back=nums.size()-1;
           
            while(front < back){
                 int candidate = nums[i] + nums[front] + nums[back];
                if( abs(target - candidate) < abs(target - result)){
                    result = candidate;
                }
                if(candidate < target){
                    while(front < back && nums[front] == nums[front+1]){
                        front ++;
                    }
                    front ++;
                }
                else if(candidate > target){
                    while(front < back && nums[back] == nums[back-1]){
                        back--;
                    }
                    back--;
                }
                else{
                    return target;
                }
                
            }
        }
        return result;
        
    }
};