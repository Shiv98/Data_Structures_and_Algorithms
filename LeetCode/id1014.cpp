/**
 * 1014. Best Sightseeing Pair
 * Given an array A of positive integers, 
 * A[i] represents the value of the i-th sightseeing spot, 
 * and two sightseeing spots i and j have distance j - i between them.
 * The score of a pair (i < j) of sightseeing spots is (A[i] + A[j] + i - j) :
 * the sum of the values of the sightseeing spots, minus the distance between them.
 * Return the maximum score of a pair of sightseeing spots.
 * Input: [8,1,5,2,6]
 * Output: 11
 * Explanation: i = 0, j = 2, A[i] + A[j] + i - j = 8 + 5 + 0 - 2 = 11
 */

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
        int value = 0 , start_point = 0;
        for(int i = 0 ; i< A.size(); i++)
        {
            value = max(value, start_point + A[i] - i);
            start_point = max(start_point, A[i] + i);
        }
        return value;
    }
};