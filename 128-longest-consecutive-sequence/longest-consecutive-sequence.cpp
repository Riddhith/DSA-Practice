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
        
        /*
        int n=nums.size();
        if(n==0) return 0;
        set<int> s;
        for(int i=0;i<n;i++){
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
        */
        return maxc;
    }
};