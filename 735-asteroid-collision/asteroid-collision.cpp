class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int asteroid : asteroids) {
            bool destroyed = false;

            while (!st.empty() && asteroid < 0 && st.top() > 0) {
                int topAsteroid = st.top();
                st.pop();

                if (topAsteroid > abs(asteroid)) {
                    destroyed = true;
                    st.push(topAsteroid);
                    break;
                } else if (topAsteroid == abs(asteroid)) {
                    destroyed = true;
                    break;
                } 
            }

            if (!destroyed) {
                st.push(asteroid);
            }
        }

        vector<int> result(st.size());
        for (int i = st.size() - 1; i >= 0; --i) {
            result[i] = st.top();
            st.pop();
        }

        return result;
    }
};