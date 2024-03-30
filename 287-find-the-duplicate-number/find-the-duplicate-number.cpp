class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>=2){
                ans=it.first;
                break;
            }
        }
        return ans;
    }
};