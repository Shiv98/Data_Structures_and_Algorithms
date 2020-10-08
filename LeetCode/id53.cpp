/**
 * 53. Maximum Subarray
 * Given an integer array nums, find the contiguous subarray (containing at least one number) 
 * which has the largest sum and return its sum.
 * Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
 * Output: 6
 * Explanation: [4,-1,2,1] has the largest sum = 6.
 */


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int msf = nums[0], meh = 0;
        
        for(int i = 0; i<nums.size();i++)
        {
            meh = meh + nums[i];
            if(meh>msf) msf = meh;
            if(meh<0) meh = 0;
        }
        return(msf);
    }
};