class Solution {
public:
    long long func(vector<int>& piles, long long hourly){
        long long hr=0;
        for(int i=0;i<piles.size();i++){
            hr=hr+ceil((double)(piles[i]) / (double)(hourly));
        }
        return hr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi=max(maxi,(long long)piles[i]);
        }
        long long reqTime=0;
        long long low=1;
        long long high=maxi;
        long long ans=-1;
        while(low<=high){
            long mid=low+(high-low)/2;
            reqTime=func(piles,mid);
            if(reqTime<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};