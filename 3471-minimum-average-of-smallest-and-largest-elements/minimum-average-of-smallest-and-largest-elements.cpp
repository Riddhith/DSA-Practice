class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> sum;
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            sum.push_back(nums[i]+nums[n-i-1]);
        }
        int mini=INT_MAX;
        for(int i=0;i<sum.size();i++){
            mini=min(mini,sum[i]);
        }
        double m=(double)mini/2;
        return m;
    }
};