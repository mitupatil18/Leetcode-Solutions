class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int size) {
        map<int,int> m;
        priority_queue<pair<int,int>> pq;
        
        for(int i = 0; i < hand.size(); i++)
            m[hand[i]]++;
        
        for(auto x : m)
            pq.push({x.first, x.second});
        
        while(!pq.empty()) {
            queue<pair<int,int>> q;
            vector<int> v;
            int i = 0;
            
            while(!pq.empty() && i < size) {
                v.push_back(pq.top().first);
                m[pq.top().first]--;
                
                if(m[pq.top().first] > 0)
                    q.push({pq.top().first, m[pq.top().first]});
                
                pq.pop();
                i++;
            }
            
            if (v.size() != size)
                return false;
            
            for(int i = 0; i < v.size() - 1; i++) {
                if(abs(v[i+1] - v[i] )!= 1)
                    return false;
            }
            
            while(!q.empty()) {
                pq.push(q.front());
                q.pop();
            }
        }
        return true;
    }
};
