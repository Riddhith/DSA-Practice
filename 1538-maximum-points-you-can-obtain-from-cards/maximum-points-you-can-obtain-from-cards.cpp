class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int tot_sum = 0;
        int n = cardPoints.size();
        for (int i = 0; i < n; i++) {
            tot_sum += cardPoints[i];
        }
        int l = 0, r = 0, sum = 0, ans = 0;
        while (r < n) {
            while ((r - l) < (n - k)) {
                sum += cardPoints[r];

                r++;
            }
            if ((r - l) >= (n - k)) {
                ans = max(ans, tot_sum - sum);
                sum -= cardPoints[l];
                l++;
            }
        }
        return ans;
    }
};