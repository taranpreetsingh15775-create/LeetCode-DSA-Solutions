class Solution {
public:
    bool isValid(string s) {
        stack<int> st;

        int x=s.size();
        int n=0;
        
        if(s[n]== ')' || s[n]=='}' || s[n]==']' )
        return false;

        for(int i=0;i<x;i++){
            if( s[i]== '(' || s[i]=='[' || s[i]=='{' ){
                st.push(s[i]);
            }
            else if(s[i]== ')' || s[i]=='}' || s[i]==']' ){
                if(s[i]==')' ){
                    if(!st.empty() && st.top()=='(')
                    st.pop();
                    else
                    return false;
                }
                else if(s[i]=='}' ){
                    if( !st.empty() &&  st.top()=='{')
                    st.pop();
                    else
                    return false;
                }else if( s[i]==']' ){
                    if(!st.empty() &&  st.top()=='[')
                    st.pop();
                    else
                    return false;
                }   
            }
            else if(s[i]== ')' || s[i]=='}' || s[i]==']' )
            return false;

        }
        if(st.empty()){
                return true;
                } return false;
            
    }
};