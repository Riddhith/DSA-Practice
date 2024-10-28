class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        /*vector<int> ans;
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
        return ans;*/
        stack<int> st;
        unordered_map<int, int> m;
        int n = nums2.size();
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && st.top() < nums2[i])    st.pop();
            if(st.empty())  m[nums2[i]] = -1;
            else    m[nums2[i]] = st.top();
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++){
            ans.push_back(m[nums1[i]]);
        }
        return ans;
    }
};