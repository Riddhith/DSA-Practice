class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int res=0;
        for(auto i:derived){
            res^=i;
        }
        if(res==0) return true;
        else return false;
    }
};