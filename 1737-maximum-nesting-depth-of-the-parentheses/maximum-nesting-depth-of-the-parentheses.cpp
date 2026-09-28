class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int c=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push('(');
                c++;
            }
            else if(s[i]==')'){
                ans=max(ans,c);
                st.pop();
                c--;
            }
        }
        return ans;
    }
};