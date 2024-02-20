class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                pos.push_back(nums[i]);
            } else if (nums[i] < 0) {
                neg.push_back(nums[i]);
            }
        }
        vector<int> ans;
        int poss = 0;
        int negg = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                ans.push_back(pos[poss]);
                poss++;
            } else {
                ans.push_back(neg[negg]);
                negg++;
            }
        }
        return ans;
    }
};