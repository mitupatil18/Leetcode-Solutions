#include <vector>
#include <unordered_map>
#include <queue>

class Solution {
public:
    int leastInterval(std::vector<char>& tasks, int n) {
        std::unordered_map<char, int> taskCount;
        std::priority_queue<int> pq;
        
        // Count the frequency of each task
        for (char task : tasks)
            taskCount[task]++;
        
        // Push task frequencies into the priority queue
        for (auto& entry : taskCount)
            pq.push(entry.second);
        
        int intervals = 0;
        while (!pq.empty()) {
            std::vector<int> temp;
            int i = 0;
            
            // Fill in intervals with tasks
            while (i <= n) {
                if (!pq.empty()) {
                    if (pq.top() > 1) {
                        temp.push_back(pq.top() - 1);
                    }
                    pq.pop();
                    intervals++;
                }
                else if (temp.empty()) {
                    break;
                }
                else {
                    intervals++;
                }
                i++;
            }
            
            // Restore tasks to the priority queue
            for (int count : temp)
                pq.push(count);
            
            // Sort the tasks with the most frequent ones on the top
            std::sort(temp.begin(), temp.end(), std::greater<int>());
        }
        
        return intervals;
    }
};
