class Solution {
public:
    void merge(vector<int>& nums,int low,int mid,int high){
        int left=low;
        int right=mid+1;
        vector<int> temp;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
    }
    int countPairs(vector<int>& nums,int low,int mid,int high){
        int right=mid+1;
        int c=0;
        for(int i=low;i<=mid;i++){
            while(right<=high && (long)nums[i]>(long)2*nums[right]){
                right++;
            }
            c+=(right-(mid+1));
        }
        return c;
    }
    int mergeSort(vector<int>& nums,int l,int h){
        int c=0;
        if(l>=h) return c;
        int mid=(l+h)/2;
        c+=mergeSort(nums,l,mid);
        c+=mergeSort(nums,mid+1,h);
        c+=countPairs(nums,l,mid,h);
        merge(nums,l,mid,h);
        return c;

    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return mergeSort(nums,0,n-1);
    }
};