#include <vector>
#include <iostream>

using namespace std;

int removeElement(vector<int> &nums, int val)
{

    int end = nums.size() - 1;
    int start = 0;
    int number_left = nums.size();
    int tmp = 0;

    for (int k = 0; k < nums.size(); k++)
    {
        if (nums[k] == val)
        {

            if (nums[end] == val)
            {
                nums[end] = 255;
                end--;
                number_left--;
            }
            tmp = nums[k];
            nums[k] = nums[end];
            nums[end] = 255;
            end--;
            number_left--;

            
        }
    }

    return number_left;
}

int main()
{

    vector<int> numbers({0,1,2,2,3,0,4,2});
    int k = removeElement(numbers, 2);

    cout << "Size: " << k << ", nums = [";

    for (int k = 0; k < numbers.size(); k++)
    {
        cout << numbers[k] << ",";
    }

    cout << "]";

    return 0;
}