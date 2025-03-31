class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                s++;
                maxi=max(maxi,s);
            }else{
                s=0;
            }
        }
        return maxi;
    }
};