class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            auto it=find(nums2.begin(),nums2.end(),nums1[i]);
            if((it==nums2.end()) || ((it-nums2.begin())==(nums2.size()-1))){
                ans.push_back(-1);
            }else{
                int j=it-nums2.begin();
                int k=j+1;
                bool flag=false;
                while(k<=(nums2.size()-1)){
                    if(nums2[k]>nums1[i]){
                        ans.push_back(nums2[k]);
                        flag=true;
                        break;
                    }
                    k++;
                }
                if(!flag) ans.push_back(-1);
            } 
        }
        return ans;
    }
};