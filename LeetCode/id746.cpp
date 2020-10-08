/**
 * 746. Min Cost Climbing Stairs
 * On a staircase, the i-th step has some non-negative cost cost[i] assigned (0 indexed).
 * Once you pay the cost, you can either climb one or two steps. You need to find minimum cost to reach the top of the floor, 
 * and you can either start from the step with index 0, or the step with index 1.
 * Input: cost = [10, 15, 20]
 * Output: 15
 * Explanation: Cheapest is start on cost[1], pay that cost and go to the top.
 * */

// DP using O(n) space:
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int dp[n];
        for(int i = 0;i<n;i++)
        {
            if(i<2)
                dp[i] = cost[i];
            else
            {
                dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
            }
        }
        return(min(dp[n-1],dp[n-2]));
    }
};

// DP using O(1) space:
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int s1= cost[0], s2 = cost[1];
        for(int i = 2;i<cost.size();i++)
        {
            int temp = cost[i] + min(s1,s2);
            s1 = s2;
            s2 = temp;
        }
        return(min(s1,s2));
    }
};