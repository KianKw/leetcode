/*************************************************************************
# File Name: 03.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Mar  6 16:50:34 2020
 ************************************************************************/

class Solution {
public:
#if 0
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ans;
        int left = 1, right = 1;
        int sum = 0;
        while (right <= target / 2 + 1) {
            if (sum < target) {
                sum += right;
                ++right;
            } else {
                if (sum == target) {
                    vector<int> temp(right - left, 0);
                    for (int i = 0; i < right - left; ++i) {
                        temp[i] = left + i;
                    }
                    ans.push_back(temp);
                }
                sum -= left;
                ++left;
            }
        }
        return ans;
    }
#else
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ans;
        int left = 1, right = 1;
        int sum = 0;
        while (right <= target / 2 + 1) {
            sum += right;
            ++right;
            while (sum >= target) {
                if (sum == target) {
                    vector<int> temp(right - left, 0);
                    for (int i = 0; i < right - left; ++i) {
                        temp[i] = left + i;
                    }
                    ans.push_back(temp);
                }
                sum -= left;
                ++left;
            }
        }
        return ans;
    }
#endif
};
