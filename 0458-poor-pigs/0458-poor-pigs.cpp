class Solution {
public:
    int poorPigs(int b, int m, int n) {
return ceil(log2(b)/log2(n/m+1));
}
};