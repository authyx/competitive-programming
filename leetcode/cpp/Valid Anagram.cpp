// https://leetcode.com/problems/valid-anagram/

#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <iterator>

#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (t.size() != s.size()) return false;
        char arr[26] = {0};
        for (int i = 0; i < t.size(); i++)
        {
            ++arr[t[i] - 'a'];
            --arr[s[i] - 'a'];
        }
        for (short i = 0; i < 26; i++)
            if (arr[i] != 0)
                return false;
        return true;
    }
};


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    auto run_test = [&](const string& s, const string& t, const string& name, bool expected) {
        bool result = sol.isAnagram(s, t);
        bool pass = (result == expected);

        cout << "[" << (pass ? "PASS" : "FAIL") << "] " << name << " -> ";
        cout << "s=\"" << s << "\", t=\"" << t << "\", ";
        cout << "result=" << (result ? "true" : "false") << ", ";
        cout << "expected=" << (expected ? "true" : "false") << "\n";

        return pass;
    };

    // Test cases: comprehensive coverage
    vector<tuple<string, string, string, bool>> tests = {
        // Basic examples from problem
        {"anagram", "nagaram", "example_1_valid", true},
        {"rat", "car", "example_2_invalid", false},
        
        // Same string
        {"abc", "abc", "identical_string", true},
        
        // Single character
        {"a", "a", "single_char_same", true},
        {"a", "b", "single_char_different", false},
        
        // Different lengths
        {"ab", "abc", "different_length_longer", false},
        {"abc", "ab", "different_length_shorter", false},
        
        // Repeated characters
        {"aab", "aba", "repeated_chars_valid", true},
        {"aab", "bbb", "repeated_chars_invalid", false},
        
        // All same character
        {"aaaa", "aaaa", "all_same_valid", true},
        {"aaaa", "aaab", "all_same_invalid", false},
        
        // Reversed string (anagram)
        {"abc", "cba", "reversed_valid", true},
        
        // Different character frequencies
        {"aa", "ab", "freq_mismatch", false},
        
        // Larger strings
        {"aabbcc", "abcabc", "larger_valid", true},
        {"aabbcc", "aabbcd", "larger_invalid", false},
        
        // Empty-like (min constraint is 1, but test anyway)
        {"a", "a", "min_length", true},
        
        // More complex anagrams
        {"listen", "silent", "listen_silent", true},
        {"hello", "world", "hello_world", false},
        {"dormitory", "dirtyroom", "dormitory_valid", true},
    };

    int passed = 0;
    for (size_t i = 0; i < tests.size(); ++i) {
        const auto& [s, t, name, expected] = tests[i];
        if (run_test(s, t, name, expected)) ++passed;
    }

    cout << "\nSummary: " << passed << " / " << tests.size() << " tests passed.\n";

    return 0;
}
