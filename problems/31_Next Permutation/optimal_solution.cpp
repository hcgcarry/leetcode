//https://leetcode.com/problems/next-permutation/discuss/13867/C%2B%2B-from-Wikipedia
/*
重點:從後面的index 往前面看,descending的情況下,就是目前這幾的位數是最大值,只能往前面的找才能使的數列增加
找到第一個非descending另為k,並且 descending的值離這個nums[k]最近的把他換到k


*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    	int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }
}; 