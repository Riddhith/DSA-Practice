class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int sum=0;
        int max_Sum=INT_MIN;
        while(i<n){
            sum+=nums[i];
            
            if(sum>max_Sum)
            max_Sum=sum;
            if(sum<0)
            sum=0;
            i++;
        }
        return max_Sum;
    }
};