class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n=words.size();
        vector<string> ans;
        /*for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                int a=words[i].size();
                int b=words[j].size();
                if(b<a) continue;
                int l=0;
                bool flag=false;
                while(l<=(b-a)){
                    string temp=words[j].substr(l,a);
                    if(temp==words[i]){
                        flag=true;
                        break;
                    }
                    l++;
                }
                if(flag==true){
                    ans.push_back(words[i]);
                    break;
                }
            }
        }*/
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    int f=words[j].find(words[i]);
                    if(f != string::npos){
                        ans.push_back(words[i]);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};