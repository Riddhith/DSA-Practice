class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int c=0;
        int n=nums.size();
        vector<int> prefix_sum(n,0);
        prefix_sum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix_sum[i]=nums[i]+prefix_sum[i-1];
        }
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(prefix_sum[i]==goal){
                c++;
            }
            if(mp.find(prefix_sum[i]-goal)!=mp.end()){
                c+=mp[prefix_sum[i]-goal];
            }
            mp[prefix_sum[i]]++;
        }
        return c;
    }
};