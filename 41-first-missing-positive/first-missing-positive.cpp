class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        /*
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            v.push_back(i+1);
        }
        for(int i=0;i<v.size();i++){
            if(find(nums.begin(),nums.end(),v[i])==nums.end()){
                return v[i];
            }
        }
        return nums.size()+1;
        */
        unordered_map<int,int>mp;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            maxi=max(maxi,nums[i]);
        }
        for(int i=1;i<=maxi;i++){
            if(mp.find(i)==mp.end())
            return i;
        }
        if(maxi>0)
        return maxi+1;
        else
        return 1;
    }
};