class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int> st;
        vector<int> ans;
        for(int i=0;i<n;i++){
            bool flag=false;
            while(!st.empty() && asteroids[i]<0 && st.top()>0){
                if(abs(asteroids[i])>abs(st.top())){
                    st.pop();
                }else if(abs(asteroids[i])==abs(st.top())){
                    flag=true;
                    st.pop();
                    break;
                }else{
                    flag=true;
                    break;
                }
            }
            if(!flag)
            st.push(asteroids[i]);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};