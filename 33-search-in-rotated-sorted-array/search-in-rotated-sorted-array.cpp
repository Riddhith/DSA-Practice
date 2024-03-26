class Solution {
public:
    int binarySearch(vector<int>& arr, int start, int end, int target) {
        // Write your code here.
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1;
    }
    int getpivot(vector<int>& arr, int n) {
        int start = 0;
        int end = n - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] >= arr[0]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }
        return start;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot=getpivot(nums,n);
        if(target>=nums[pivot] && target<=nums[n-1]){
            return binarySearch(nums,pivot,n-1,target);
        }else{
            return binarySearch(nums,0,pivot-1,target);
        }
    }
};