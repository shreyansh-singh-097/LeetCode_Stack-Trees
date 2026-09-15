class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> nge(n, n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            if (!st.empty()) {
                nge[i] = st.top();
            }
            st.push(i);
        }
        vector<int> ans;
        for (int i = 0; i <= n - k; i++) {
            int j = i;
            int end = i + k - 1;
            while (nge[j] <= end) {
                j = nge[j];
            }
            ans.push_back(nums[j]);
        }
        return ans;
    }
};