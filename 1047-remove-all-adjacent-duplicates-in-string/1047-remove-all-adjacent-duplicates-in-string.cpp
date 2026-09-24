class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        stack<char> s1;
        for(int i=n-1;i>=0;i--){
            if(s1.empty() || s1.top()!=s[i]){
                s1.push(s[i]);
            }else{
                s1.pop();
            }
        }

        int x=0;
        string yo="";
        while(!s1.empty()){
            yo += s1.top();
            s1.pop();
            x++;
        }return yo;


    }
};