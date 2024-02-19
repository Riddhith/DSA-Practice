class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;
        int sum=0;
        int i=0;
        while(i<nums.size()){
            sum=sum+nums[i];
            if(maxSum<sum)
            maxSum=sum;
            if(sum<0)
            sum=0;
            
            i++;
        }
        return maxSum;
    }
};