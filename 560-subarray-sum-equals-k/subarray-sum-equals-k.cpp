class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mpp;
        mpp[0]=1;
        int preSum=0;
        int c=0;
        for(int i=0;i<nums.size();i++){
            preSum+=nums[i];
            int remove=preSum-k;
            c+=mpp[remove];
            mpp[preSum]++;
        }
        return c;
    }
};