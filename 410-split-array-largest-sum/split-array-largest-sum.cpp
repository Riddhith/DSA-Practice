class Solution {
public:
    int possible(vector<int>& nums, int mid){
        int cnt=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
            }else{
                cnt++;
                sum=nums[i];
            }
        }
        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            sum=sum+nums[i];
        }
        int s=maxi;
        int e=sum;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(possible(nums,mid)>k){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return s;
    }
};