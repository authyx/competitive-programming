class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x < 10) return true;
        if (x % 10 == 0) return false;
        unsigned int i = x;
        unsigned int y = 0;
        while (i > 0)
        {
            y = y * 10 + i % 10;
            i /= 10;
        }
        return (x == y);
    }
};

