class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        int c=0;
        map<string,int> b;
        for(int i=0;i<bannedWords.size();i++){
            b[bannedWords[i]]++;
        }
        for(int i=0;i<message.size();i++){
            if(b.find(message[i])!=b.end())
            c++;
        }
        return c>=2;
    }
};