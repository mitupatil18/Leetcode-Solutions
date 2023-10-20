/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    vector<int> v;
    int current_index = -1;
    void helper(NestedInteger& n)
    {
        if(n.isInteger())
        {
            v.push_back(n.getInteger());
            return;
        }
        for(auto& i : n.getList())
            helper(i);
    }
    NestedIterator(vector<NestedInteger> &nestedList) {
        for(auto& i: nestedList)
            helper(i);
    }
    
    int next() {
        return v[current_index];
    }
    
    bool hasNext() {
        if(v.size() == 0)
            return false;
        if(current_index == v.size()-1)
            return false;
        current_index++;
        return true;
    }
};


/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */