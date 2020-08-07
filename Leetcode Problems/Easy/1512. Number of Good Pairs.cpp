#include <vector>
#include <map>
#include <iostream>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[i] == nums[j])
                    count++;
            }
        }

        return count;
    }
};
