class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        vector<long> ps(n);
        vector<long> ss(n);
        int l=0,r=0;
        ps[0]=nums[0];
        for(int i=1;i<n;i++){
            ps[i]=nums[i]+ps[i-1];
        }
        ss[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            ss[i]=nums[i]+ss[i+1];
        }
        int c=0;
        for(int i=0;i<n-1;i++){
            if(ps[i]>=ss[i+1]) c++;
        }
        return c;
    }
};