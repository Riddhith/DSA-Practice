class Solution {
public:
    int recurr(int ind,int jump,vector<int> nums,int n){
        if(ind>=n-1) return jump;
        int mini=INT_MAX;
        for(int i=1;i<=nums[ind];i++){
            mini=min(mini,recurr(ind+i,jump+1,nums,n));
        }
        return mini;
    }
    int jump(vector<int>& nums) {
        // return recurr(0,0,nums,nums.size());
          if (nums.size() == 1) return 0; 
        
        int n = nums.size();
        int l = 0, r = 0, jumps = 0, farthest = 0;

        while (r <= n - 1) { 
         

            for (int i = l; i <= r; i++) {
                farthest = max(farthest, i + nums[i]);
                if (farthest >= n - 1) { 
                    return jumps + 1;
                }
            }
            l = r + 1;
            r = farthest;
            jumps++;
        }

        return jumps;
    }
};