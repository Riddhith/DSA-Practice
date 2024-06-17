class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int majele;
        for(int i=0;i<nums.size();i++){
            if(c==0){
                majele=nums[i];
                c=1;
            }else if(nums[i]==majele){
                c++;
            }else{
                c--;
            }
        }
        int c1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==majele){
                c1++;
            }
        }
        if(c1>nums.size()/2) return majele;
        else return -1;
    }
};