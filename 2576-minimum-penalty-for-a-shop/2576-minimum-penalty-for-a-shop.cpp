class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int cand = 0, pen = 0;
        for (char &c: customers) {
            if (c=='Y') pen++;
        }

        int opt = pen;

        for (int i=1;i<=n;i++) {
            if (customers[i-1]=='Y') pen --;
            else pen++;
            if (opt>pen) {
                opt = pen;
                cand = i;
            }
        }

        return cand;

    }
};