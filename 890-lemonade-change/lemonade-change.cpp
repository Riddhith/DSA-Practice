class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int> mp;
        int price=5;
        int n=bills.size();
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                mp[bills[i]]++;
            }else if(bills[i]==10){
                if(mp[bills[i]-price]>0){
                    mp[bills[i]-price]--;
                    mp[bills[i]]++;
                }else return false; 
            }else{
                if(mp[10]>0 && mp[5]>0){
                    mp[10]--;
                    mp[5]--;
                }else if(mp[5]>2){
                    mp[5]=mp[5]-3;
                }else return false;
            }
        }
        return true;
    }
};