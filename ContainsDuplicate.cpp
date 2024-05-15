#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

bool containsDuplicate(vector<int>& nums){

    unordered_map<int,int> nummaps;

    for (int k = 0; k < nums.size(); k++){
        if (nummaps.count(nums[k]))
            return true;

        nummaps[nums[k]] = k;
        }




    return false;
}

int main(){

    vector<int> numbers({1,1});

    bool answer = containsDuplicate(numbers);

    std::cout << "Output: " << answer;

    return 0;
}