/*
Given a string of English letters s, return the greatest English letter which occurs as both a lowercase and uppercase letter in s. The returned letter should be in uppercase. If no such letter exists, return an empty string.

An English letter b is greater than another letter a if b appears after a in the English alphabet.
*/

class Solution {
public:
    string greatestLetter(string s) {
        vector<bool>low(26,false);
        vector<bool>up(26,false);

        for(char &ch:s){
            if(islower(ch)) low[ch-'a']=true;
            else up[ch-'A']=true;
        }
        string ans="";
        for(int i=0;i<26;i++){
            if(low[i] && up[i]) ans=i+'A';
        }
        return ans;
    }
};
