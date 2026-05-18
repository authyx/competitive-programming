// https://leetcode.com/problems/contains-duplicate/

#include <iostream>
#include <vector>
#include <string>
#include <tuple>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                return true;
        }
        return false;
    };
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    auto run_test = [&](const vector<int>& nums, const string& name, bool expected){
        vector<int> data = nums; // copy since method mutates
        bool result = sol.containsDuplicate(data);
        bool pass = (result == expected);
        cout << "[" << (pass ? "PASS" : "FAIL") << "] " << name << " -> ";
        cout << "nums={";
        for (size_t i = 0; i < nums.size(); ++i) {
            if (i) cout << ", ";
            cout << nums[i];
        }
        cout << "}, result=" << (result ? "true" : "false") << ", expected=" << (expected ? "true" : "false") << "\n";
        return pass;
    };

    vector<tuple<vector<int>, string, bool>> tests = {
        {{1,2,3,1}, "duplicate_non_adjacent", true},
        {{1,2,3,4}, "no_duplicate", false},
        {{1,1}, "adjacent_duplicate", true},
        {{}, "empty", false},
        {{1}, "single_element", false},
        {{2,2,3,4,5}, "duplicate_start", true},
        {{1,2,2,3}, "duplicate_middle", true},
        {{-1,-1}, "negative_duplicates", true},
        {{1000000000, -1000000000, 1000000000}, "large_numbers_duplicate", true}
    };

    int passed = 0;
    for (size_t i = 0; i < tests.size(); ++i) {
        const auto& [nums, name, expected] = tests[i];
        if (run_test(nums, name, expected)) ++passed;
    }

    cout << "\nSummary: " << passed << " / " << tests.size() << " tests passed." << "\n";

    return 0;
}


