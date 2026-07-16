class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        res.resize(nums.size(), 1);
        int r = nums.size() - 1;
        int l = 0;
        int tl = 1;
        int tr = 1;
        while(r >= 0){
            if (l == r)
            {
                res[l] = tr * tl;
                tr *= nums[r];
                tl *= nums[l];

            }
            else
            {
                res[l] *= tl;
                res[r] *= tr;
                tr *= nums[r];
                tl *= nums[l];
            }
            l++;
            r--;
        }
        return res;
    }
};