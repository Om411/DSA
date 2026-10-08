class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int cnt = 0;
        for(char a:s){
            if(a=='('){
                if(cnt!=0){
                    ans=ans+"(";
                }
                cnt++;
            }
            else if(a==')'){
                cnt--;
                if(cnt!=0){
                    ans=ans+")";
                }
            }
        }
        return ans;
    }
};