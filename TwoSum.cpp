#include <vector>
#include <iostream>
#include <unordered_map>


using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (numMap.count(complement)) {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }

        return {}; // No solution found
    }
};

int main()
{

    vector<int> input({6,13,58,654,12,45,87,12,12});
    int target = 666;

    Solution solution;
    vector<int> output = solution.twoSum(input, target);

    for (int element : output){
        cout << element;
    }
}