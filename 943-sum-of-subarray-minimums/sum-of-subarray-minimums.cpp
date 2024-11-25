class Solution {
public:
    vector<int> findPsee(vector<int>& arr,int n){
        vector<int> ans(n,-1);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            ans[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> findNse(vector<int> arr,int n){
        vector<int> ans(n,-1);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            ans[i]=st.empty()?(n):st.top();
            st.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> nse=findNse(arr,n);
        vector<int> pse=findPsee(arr,n);
        // for(int i=0;i<nse.size();i++){
        //     cout<<nse[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<pse.size();i++){
        //     cout<<pse[i]<<" ";
        // }
        long long total=0;
        int mod=(int)(1e9+7);
        for(int i=0;i<arr.size();i++){
            long long right=nse[i]-i;
            long long left=i-pse[i];
            total=(total+(right*left*arr[i])%mod)%mod;
        }
        return total;
    }
};