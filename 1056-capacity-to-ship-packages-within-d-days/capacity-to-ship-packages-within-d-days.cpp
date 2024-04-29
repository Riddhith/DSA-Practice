class Solution {
public:
    bool possible(int num, vector<int>& weights, int d) {
        int sum = 0;
        int c = 1;
        for (int i = 0; i < weights.size(); i++) {
            if (weights[i] > num)
                return false;
            if ((sum + weights[i]) <= num)
                sum = sum + weights[i];
            else {
                sum = weights[i];
                c++;
            }
        }
        if (c <= d)
            return true;
        else
            return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        for (int i = 0; i < weights.size(); i++) {
            sum = sum + weights[i];
        }
        int start = 0;
        int end = sum;
        int ans = 0;
        while (start <= end) {
            int mid = end + (start - end) / 2;
            if (possible(mid, weights, days)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};