class Solution {
private:
    typedef unsigned char len_t;
    typedef unsigned short idx_t;
    static constexpr idx_t MAXLEN = 16;

public:
    int longestStrChain(const vector<string>& words) {
        const idx_t n = words.size();
        vector<idx_t> bylen[MAXLEN] = {};
        for (idx_t i = 0; i < n; i++)
            bylen[words[i].length() - 1].push_back(i);
        len_t maxlens[n];
        fill(maxlens, maxlens + n, 1);
        len_t maxtotal = !bylen[0].empty();
        for (len_t l = 2; l <= MAXLEN; l++) {
            for (const auto curridx : bylen[l-1]) {
                const string &currw = words[curridx];
                len_t mx = 0;
                for (const auto idx : bylen[l-2]) {
                    const string &w = words[idx];
                    len_t p = 0;
                    while (p < w.length() && w[p] == currw[p]) p++;
                    len_t q = w.length();
                    while (q > 0 && w[q-1] == currw[q]) q--;
                    if (p >= q && mx < maxlens[idx])
                        mx = maxlens[idx];
                }
                maxlens[curridx] = mx + 1;
                maxtotal = max<len_t>(maxtotal, mx + 1);
            }
        }
        return maxtotal;
    }
};