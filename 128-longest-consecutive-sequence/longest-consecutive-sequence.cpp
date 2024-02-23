class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        sort(nums.begin(),nums.end());
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[index]!=nums[i]){
                nums[++index]=nums[i];
            }
        }
        int c=1;
        int right=0;
        int maxc=1;
        while(right<index){
            if(nums[right]+1==nums[right+1]){
                c++;
            }
            else{
                c=1;
            }
            right++;
            maxc=max(maxc,c);
        }
        return maxc;
    }
};