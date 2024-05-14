#include <vector>
#include <iostream>
#include <string>


using namespace std;


    bool isPalindrome(int x) {

        string number = to_string(x);
        int size = number.length();

        for (int i = 0; i < size; i++)
        {
            if (number [i] != number[size -1])
            {
                return false;
            }
            size -= 1;
        }
        return true;

        
    };


int main()
{
    int number = 0;

    cout << "Enter Number: ";
    cin >> number;

    if (isPalindrome(number)){
    cout << number << " Is a Palindrome!!";
    }
    else{
        cout << number << " Is not a Palindrome!!";
    }
}