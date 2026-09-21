// https://leetcode.com/problems/two-sum/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            int sub = target - nums[i];
            if (map.find(sub) != map.end())
                return {map[sub],i};
            map[nums[i]] = i;
        }
        return {};
    }
};

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     Solution s;

//     auto run_test = [&](const vector<int>& nums, int target, const string& name, bool expect_solution){
//         vector<int> data = nums; // copy because twoSum expects non-const
//         vector<int> res = s.twoSum(data, target);

//         bool pass = false;
//         if (expect_solution) {
//             if (res.size() == 2) {
//                 int a = res[0], b = res[1];
//                 if (a != b && a >= 0 && b >= 0 && a < (int)nums.size() && b < (int)nums.size()) {
//                     if (nums[a] + nums[b] == target) pass = true;
//                 }
//             }
//         } else {
//             bool valid = false;
//             if (res.size() == 2) {
//                 int a = res[0], b = res[1];
//                 if (a != b && a >= 0 && b >= 0 && a < (int)nums.size() && b < (int)nums.size()) {
//                     if (nums[a] + nums[b] == target) valid = true;
//                 }
//             }
//             pass = !valid;
//         }

//         cout << "[" << (pass ? "PASS" : "FAIL") << "] " << name << " -> ";
//         cout << "nums={";
//         for (size_t i = 0; i < nums.size(); ++i) {
//             if (i) cout << ", ";
//             cout << nums[i];
//         }
//         cout << "}, target=" << target << ", returned={";
//         for (size_t i = 0; i < res.size(); ++i) {
//             if (i) cout << ", ";
//             cout << res[i];
//         }
//         cout << "}";
//         if (!pass) {
//             cout << " -> expected ";
//             cout << (expect_solution ? "a valid index pair" : "no valid pair");
//         }
//         cout << "\n";
//         return pass;
//     };

//     vector<pair<vector<int>, pair<int,bool>>> tests = {
//         {{2,7,11,15}, {9, true}},                 // example
//         {{2,7}, {9, true}},                       // minimal
//         {{3,3}, {6, true}},                       // duplicates
//         {{3,2,4}, {6, true}},                     // unordered
//         {{-3,4,3,90}, {0, true}},                 // negatives
//         {{1000000000, 2, 3}, {1000000002, true}}, // large numbers
//         {{1,2,3,4,4}, {8, true}},                 // multiple candidates
//         {{0,4,3,0}, {0, true}}                    // zeroes with solution
//     };

//     int passed = 0;
//     for (size_t i = 0; i < tests.size(); ++i) {
//         const auto& t = tests[i];
//         string name = "case_" + to_string(i+1);
//         if (run_test(t.first, t.second.first, name, t.second.second)) ++passed;
//     }

//     cout << "\nSummary: " << passed << " / " << tests.size() << " tests passed.\n";

//     return 0;
// }
