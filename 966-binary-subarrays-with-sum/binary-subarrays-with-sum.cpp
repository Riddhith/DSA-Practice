class Solution {
public:
  int lessequaltok(vector<int>& nums,int goal){
        if(goal < 0)
        return 0;

        int l = 0;
        int r = 0;
        int ans = 0;
        int n = nums.size();
        int sum = 0;

        while(r < n){
        sum += nums[r];

        while(sum > goal){
            sum -= nums[l];
            l++;
        }
        ans += (r-l+1);
        r++;
        }
        return ans;
        
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        /*int c=0;
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
        return c;*/
        return lessequaltok(nums,goal)-lessequaltok(nums,goal-1);
    }
};