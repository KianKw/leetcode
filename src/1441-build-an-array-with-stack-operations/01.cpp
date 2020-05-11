/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon May 11 10:37:57 2020
 ************************************************************************/

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        ans.reserve(n);
        for (int i = 0, count = 1; i < target.size(); ++i, ++count) {
            while (count != target[i]) {
                ++count;
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            ans.push_back("Push");
        }
        return ans;
    }
};
