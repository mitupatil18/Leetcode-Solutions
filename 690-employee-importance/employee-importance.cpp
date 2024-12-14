// Definition for Employee.
// class Employee {
// public:
//     int id;
//     int importance;
//     vector<int> subordinates;
// };

class Solution {
public:
    void dfs(unordered_map<int, Employee*>& employees, int id, int& sum) {
        sum += employees[id]->importance;
        for (auto x : employees[id]->subordinates) {
            dfs(employees, x, sum);
        }
    }
    
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> employee_map;
        for (auto emp : employees) {
            employee_map[emp->id] = emp;
        }
        
        int sum = 0;
        dfs(employee_map, id, sum);
        return sum;
    }
};
