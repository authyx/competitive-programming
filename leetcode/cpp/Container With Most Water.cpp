#include <vector>
#include <iostream>

class Solution {
public:
    int maxArea(vector<int>& height) {
        int r = height.size() - 1;
        int l = 0;
        int area = 0;
        int calced = 0;
        
        while (l < r)
        {
            calced = min(height[l], height[r]) * (r - l);
            if (area < calced)
            {
                area = calced;
            }
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return area;
    }
};