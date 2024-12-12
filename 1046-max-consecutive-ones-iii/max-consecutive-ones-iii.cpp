class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0;
        int n=nums.size();
        /*for(int i=0;i<n;i++){
            int c=0;
            for(int j=i;j<n;j++){
                if(nums[j]==0){
                    c++;
                }
                if(c<=k){
                    maxlen=max(maxlen,j-i+1);
                }else{
                    break;
                }
            }
        }
        return maxlen;*/
        int l=0;
        int r=0;
        int zero=0;
        while(r<n){
            if(nums[r]==0) zero++;
            while(zero>k){
                if(nums[l]==0) zero--;
                l++;
            }
            if(zero<=k){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};