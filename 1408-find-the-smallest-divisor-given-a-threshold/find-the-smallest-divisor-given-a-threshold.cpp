class Solution {
public:
    bool possible(vector<int>& nums, int limit, int smallposs){
	int sum=0;
	for(int i=0;i<nums.size();i++){
		sum+=ceil((double)nums[i]/(double)smallposs);
	}
	if(sum<=limit)
	return true;
	else
	return false;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            maxi = max(nums[i], maxi);
        }
        int start = 1;
        int end = maxi;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (possible(nums, threshold, mid))
                end = mid - 1;
            else
                start = mid + 1;
        }
        return start;
    }
};