class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        // int c = 0;
        /*for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                if (sum == goal) {
                    c++;
                }
            }
        }*/
        // int n=nums.size();
        int prefix_sum[n];
        prefix_sum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix_sum[i]=nums[i]+prefix_sum[i-1];
        }
        unordered_map<int,int> mp;
        int c=0;
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