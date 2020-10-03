/**
 * 1. Two Sum
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * Given nums = [2, 7, 11, 15], target = 9,
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
*/

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> result;
            unordered_map<int, int> nums_map;
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums_map.find(target - nums[i]) != nums_map.end())
                {
                    result.push_back(nums_map[target - nums[i]]);
                    result.push_back(i);
                    return result;
                }
                nums_map[nums[i]] = i;
            }
            return result;
        }
    };