class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int preSum=0;
        int c=0;
        map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            preSum+=nums[i];
            // if(preSum==k)
            // c++;
            int rem=preSum-k;
            if(mp.find(rem)!=mp.end()){
                c+=mp[rem];
            }
            mp[preSum]++;
        }
        return c;
    }
};