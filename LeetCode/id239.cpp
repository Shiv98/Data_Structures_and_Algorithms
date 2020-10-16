/**
 * 239. Sliding Window Maximum
 * You are given an array of integers nums, 
 * there is a sliding window of size k which is moving from the very left of the array to the very right. 
 * You can only see the k numbers in the window. 
 * Each time the sliding window moves right by one position.
 * Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
 * Output: [3,3,5,5,6,7]
 */
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        vector<int> ans;
        int n = arr.size();
        int nger[n];
        stack<int> st;
        st.push(n-1);
        nger[n-1] = n;
        for(int i = n-2;i>=0;i--)
        {
            while(!st.empty() && arr[i] >= arr[st.top()]) st.pop();

            if(st.empty()) nger[i] = n;
            else nger[i] = st.top();
            st.push(i);
        }

        int j = 0;
        for(int i = 0; i <= n - k; i++){
          if(j < i) j = i;

          while(nger[j] < i + k){
            j = nger[j];
          }
          ans.push_back(arr[j]);
        }
        return ans;
    }
};