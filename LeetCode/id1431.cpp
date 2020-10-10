/**
 * 1431. Kids With the Greatest Number of Candies
 * Given the array candies and the integer extraCandies,
 *  where candies[i] represents the number of candies that the ith kid has.
 * For each kid check if there is a way to distribute extraCandies among the kids 
 * such that he or she can have the greatest number of candies among them. 
 * Notice that multiple kids can have the greatest number of candies.
 * 
 * Input: candies = [2,3,5,1,3], extraCandies = 3
 * Output: [true,true,true,false,true] 
 */

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxc = candies[0];
        for(int i = 1; i< candies.size(); i++)
        {
            if(candies[i] > maxc)
                maxc= candies[i];
        }
        for(int i = 0 ; i< candies.size(); i++)
        {
            if(candies[i] + extraCandies >= maxc)
                ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};