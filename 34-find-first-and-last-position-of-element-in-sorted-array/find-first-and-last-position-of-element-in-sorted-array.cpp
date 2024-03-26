class Solution {
public:
int firstOcc(vector<int>& arr, int n, int k){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k){
            ans=mid;
            end=mid-1;
        }else if(arr[mid]<k){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
int lastOcc(vector<int>& arr, int n, int k){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k){
            ans=mid;
            start=mid+1;
        }else if(arr[mid]<k){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> v;
        v.push_back(firstOcc(nums,n,target));
        v.push_back(lastOcc(nums,n,target));
        return v;
    }
};