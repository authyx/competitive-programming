// old code 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        set<vector<int>> res;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < size; i++)
        {
            if (nums[i] > 0)
                break;
            int l1 = i+1;
            int r = nums.size() - 1;
            while(l1<r){
                    if (nums[i] + nums[l1] + nums[r] == 0)
                    {
                        
                        vector<int> l (3);
                        l[0] = (nums[i]);
                        l[1] = (nums[l1]);
                        l[2] = (nums[r]);
                        res.insert(l);
                        l1++;
                        r--;
                    }
                else if (nums[i] + nums[l1] + nums[r]<0)
                    l1++;
                else
                    r--;
            }                
        }
        vector<vector<int>> se(res.begin(), res.end());
        return se;
    }
};