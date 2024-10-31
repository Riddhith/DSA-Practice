class Solution {
public:
    int trap(vector<int>& height) {
        //tc : O(3N) sc : O(2N)
        /*int n=height.size();
        int total=0;
        vector<int> left_max(n,0);
        left_max[0]=height[0];
        for(int i=1;i<n;i++){
            left_max[i]=max(left_max[i-1],height[i]);
        }
        vector<int> right_max(n,0);
        right_max[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            right_max[i]=max(right_max[i+1],height[i]);
        }
        for(int i=0;i<n;i++){
            if(height[i]<left_max[i] && height[i]<right_max[i]){
                total+=min(left_max[i],right_max[i])-height[i];
            }
        }
        return total;*/
        int n=height.size();
        int left_max=0;
        int right_max=0;
        int left=0;
        int right=n-1;
        int total=0;
        while(left<right){
            if(height[left]<=height[right]){
                if(left_max>height[left]){
                    total+=left_max-height[left];
                }else{
                    left_max=height[left];
                }
                left++;
            }
            else{
                if(right_max>height[right]){
                    total+=right_max-height[right];
                }else{
                    right_max=height[right];
                }
                right--;
            }
        }
        return total;
    }
};