class Solution {
public:
    long long countCommas(int n) {
        long long ans = 0;
        for (int i = 1; i <= n; i++) {
            if (i >= 1000)
                ans++;
        }
        return ans;
    }
};