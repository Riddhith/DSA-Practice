class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        int size=1<<nums.size();
        for(int num=0;num<size;num++){
            vector<int> temp;
            for(int i=0;i<nums.size();i++){
                if(num & (1<<i)){
                    temp.push_back(nums[i]);
                }
            }
            v.push_back(temp);
        }
        return v;
    }
};