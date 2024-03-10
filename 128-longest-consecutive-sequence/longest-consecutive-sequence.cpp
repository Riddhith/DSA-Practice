class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int maxc=1;
        for(auto it:s){
            if(s.find(it-1)==s.end()){
                int c=1;
                int x=it;
                while(s.find(x+1)!=s.end()){
                    c++;
                    x++;
                }
                maxc=max(maxc,c);
            }
        }
        return maxc;
    }
};