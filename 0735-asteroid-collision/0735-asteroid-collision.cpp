class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int x = asteroids.size();
        stack<int> s;
        vector<int> ans;
        int c = 0;

        while (c < x) {
            if (asteroids[c] > 0) {
                s.push(asteroids[c]);
                c++;
            } else {
                if (!s.empty()) {
                    if (s.top() < abs(asteroids[c])) {
                        s.pop();
                    } else if (s.top() == abs(asteroids[c])) {
                        s.pop();
                        c++;
                    } else {
                        c++;
                    }
                } else {
                    ans.push_back(asteroids[c]);
                    c++;
                }
            }
        }
        int prevSize = ans.size();
        ans.resize(prevSize + s.size());
        for (int i = ans.size() - 1; i >= prevSize; i--) {
            ans[i] = s.top();
            s.pop();
        }

        return ans;
    }
};
