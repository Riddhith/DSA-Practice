class Solution {
public:
    double minimumAverage(vector<int>& nums) {        
        set<double> s;
        
        sort(nums.begin(),nums.end());
        
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            s.insert( ( nums[i] + nums[j] ) / 2.0 );
            i++,j--;
        }
        set<double>::iterator it=s.begin();

        return *it ;
    }
};