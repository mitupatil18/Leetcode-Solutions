class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
           vector<vector<int>> graph(n);
           vector<int> inDegree(n, 0);
           for (const auto& relation : relations)
           {
               int prevCourse = relation[0] - 1;
               int nextCourse = relation[1] - 1;
               graph[prevCourse].push_back(nextCourse);
               inDegree[nextCourse]++;
           }
           queue<int> q;
           vector<int> timeNeeded(n, 0);
           for (int i = 0; i < n; i++)
           {
               if (inDegree[i] == 0) 
               {
                   q.push(i);
               }
           }
           int minMonths = 0;
           while (!q.empty()) 
           {
               int course = q.front();
               q.pop();
               for (int nextCourse : graph[course]) 
               {
                   inDegree[nextCourse]--;
                   timeNeeded[nextCourse] = max(timeNeeded[nextCourse], timeNeeded[course] + time[course]);
                   if (inDegree[nextCourse] == 0) 
                   {
                       q.push(nextCourse);
                   }
               }
               minMonths = max(minMonths, timeNeeded[course] + time[course]);
           }
           return minMonths;
    }
};