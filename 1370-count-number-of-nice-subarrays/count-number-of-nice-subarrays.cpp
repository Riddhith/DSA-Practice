class Solution {
public:
    int lessequaltok(vector<int>& temp, int k){
        int l=0;
        int r=0;
        int n=temp.size();
        int ans=0;
        int sum=0;
        while(r<n){
            sum+=temp[r];
            while(sum>k){
                sum-=temp[l];
                l++;
            }
            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> temp;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                temp.push_back(1);
            }else{
                temp.push_back(0);
            }
        }
        return lessequaltok(temp,k)-lessequaltok(temp,k-1);
    }
};