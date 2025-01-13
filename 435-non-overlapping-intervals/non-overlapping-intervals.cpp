class Interval{
    public:
    int start,end;
    Interval(int start,int end){
        this->start=start;
        this->end=end;
    }
};
bool comp(Interval a,Interval b){
    return a.end<b.end;
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<Interval> v;
        int n=intervals.size();
        for(int i=0;i<n;i++){
            v.push_back(Interval(intervals[i][0],intervals[i][1]));
        }
        sort(v.begin(),v.end(),comp);
        for(auto it:v){
            cout<<it.start<<" "<<it.end<<endl;
        }
        int endTime=INT_MIN,c=0;
        
        for(int i=0;i<n;i++){
            if(v[i].start>=endTime){
                endTime=v[i].end;
            }else{
                c++;
            }
        }
        return c;
    }
};