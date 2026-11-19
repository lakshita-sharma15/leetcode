class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.length();

        while (i < n && s[i] == ' ')
            i++;

        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        long long num = 0;

        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            if (num > (LLONG_MAX - digit) / 10)
                return sign == 1 ? INT_MAX : INT_MIN;

            num = num * 10 + digit;

            if (sign == 1 && num > INT_MAX)
                return INT_MAX;

            if (sign == -1 && -num < INT_MIN)
                return INT_MIN;

            i++;
        }

        return (int)(sign * num);
    }
};