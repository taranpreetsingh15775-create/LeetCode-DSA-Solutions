class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int x=asteroids.size();
        stack<int> s;
        stack<int> s2;
        int c=0;
        vector<int> ans;

        while(c<x){
            if(asteroids[c]>0){
                s.push(asteroids[c]);
                c++;
            }
            else if(asteroids[c]<0){
                if(!s.empty()){
                    if(s.top()<abs(asteroids[c])){
                        s.pop();
                    }
                    else if(s.top()==abs(asteroids[c])){
                        s.pop();
                        c++;
                    }
                    else if(s.top()>abs(asteroids[c])){
                        c++;
                    }
                }else{
                    ans.push_back(asteroids[c]);
                    c++;
                }
            }
        }if(!s.empty()){
            int yo=s.size();

            for(int i=0;i<yo;i++){
                s2.push(s.top());
                s.pop();
            }
            
            for(int i=0;i<yo;i++){
                ans.push_back(s2.top());
                s2.pop();
            }
        }
        return ans;
    }
};