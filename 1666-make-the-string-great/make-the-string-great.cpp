class Solution {
public:
    string makeGood(string s) {
        int l=s.length();
        stack<char> stack;
        for(int i=0;i<s.length();i++){
            if(!stack.empty() && abs(s[i]-stack.top())==32){
                stack.pop();
            }else{
                stack.push(s[i]);
            }
        }
        string res="";
        while(!stack.empty()){
            res=stack.top()+res;
            stack.pop();
        }
        return res;
    }
};