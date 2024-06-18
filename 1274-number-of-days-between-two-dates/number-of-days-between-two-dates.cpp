class Solution {
public:
    void extractDates(string date1, string date2, int& y1, int& y2, int& d1, int& d2, int& m1, int& m2) {
        y1 = stoi(date1.substr(0, 4));
        y2 = stoi(date2.substr(0, 4));
        m1 = stoi(date1.substr(5, 2));
        m2 = stoi(date2.substr(5, 2));
        d1 = stoi(date1.substr(8, 2));
        d2 = stoi(date2.substr(8, 2));
        
        if (y1 > y2 || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2)) {
            swap(y1, y2);
            swap(m1, m2);
            swap(d1, d2);
        }
    }
    
    bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
    
    int daysInMonth(int year, int month) {
        static const int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        if (month == 2 && isLeapYear(year)) {
            return 29;
        }
        return days[month - 1];
    }
    
    int daysFromStartOfYear(int year, int month, int day) {
        int days = day;
        for (int i = 1; i < month; ++i) {
            days += daysInMonth(year, i);
        }
        return days;
    }
    
    int daysBetweenDates(string date1, string date2) {
        int y1, y2, m1, m2, d1, d2;
        extractDates(date1, date2, y1, y2, d1, d2, m1, m2);
        
        if (y1 == y2) {
            return daysFromStartOfYear(y2, m2, d2) - daysFromStartOfYear(y1, m1, d1);
        }
        
        int daysBetweenYears = 0;
        for (int year = y1 + 1; year < y2; ++year) {
            daysBetweenYears += isLeapYear(year) ? 366 : 365;
        }
        
        int daysInFirstYear = (isLeapYear(y1) ? 366 : 365) - daysFromStartOfYear(y1, m1, d1);
        int daysInLastYear = daysFromStartOfYear(y2, m2, d2);
        
        return daysInFirstYear + daysBetweenYears + daysInLastYear;
    }
};
