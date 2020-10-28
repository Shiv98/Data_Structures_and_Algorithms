/**
 * 496. Next Greater Element I
 * You are given two arrays (without duplicates) nums1 and nums2 
 * where nums1’s elements are subset of nums2. 
 * Find all the next greater numbers for nums1's elements in the corresponding places of nums2.
 * The Next Greater Number of a number x in nums1 is the first greater number to its right in nums2.
 *  If it does not exist, output -1 for this number.
 */

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        unordered_map<int,int> mp;
        stack<int> s;
        for(int i=n-1; i>=0; i--){
            while(!s.empty() && nums2[i] >= nums2[s.top()]){
                s.pop();
            }
            
            mp[nums2[i]] = s.empty() ? -1 : nums2[s.top()];
            
            s.push(i);
        }
        
        for(int i=0; i<nums1.size(); i++){
            nums1[i]=mp[nums1[i]];
        }
        
        return nums1;
    }
};