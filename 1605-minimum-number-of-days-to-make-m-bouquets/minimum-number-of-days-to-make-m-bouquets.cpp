class Solution {
public:
    int possible(vector<int>& bloomDay, int day, int m, int k){
        int cnt=0;
        int nob=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                cnt++;
            }else{
                nob+=(cnt/k);
                cnt=0;
            }
        }
        nob+=(cnt/k);
        if(nob>=m) return true;
        else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long poss=(long)m*(long)k;
        if(poss>n) return -1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }
        int start=mini;
        int end=maxi;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(possible(bloomDay,mid,m,k)){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return start;
    }
};