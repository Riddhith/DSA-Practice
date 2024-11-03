class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int left_max,right_max=0;
        int count=0;
        while(left<right){
            if(height[left]<=height[right]){
                if(height[left]<left_max){
                    count+=left_max-height[left];
                }else{
                    left_max=height[left];
                }
                left++;
            }else{
                if(height[right]<right_max){
                    count+=right_max-height[right];
                }else{
                    right_max=height[right];
                }
                right--;
            }
        }
        return count;
    }
};