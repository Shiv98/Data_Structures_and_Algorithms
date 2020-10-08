/**
 * 122. Best Time to Buy and Sell Stock II
 * Say you have an array prices for which the ith element is the price of a given stock on day i.
 * Design an algorithm to find the maximum profit. 
 * You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()== 0) return 0;
        
        int b = 0, s= 0 , totprofit = 0;
        for(int i = 1 ; i< prices.size();i++)
        {
            if(prices[i]<=prices[i-1])
            {
                totprofit += prices[s] - prices[b];
                s = i;
                b = i;
            }
            else
                s++;
        }
        totprofit += prices[s] - prices[b];
        return(totprofit);
    }
};