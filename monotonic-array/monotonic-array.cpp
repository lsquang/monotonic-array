// monotonic-array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <vector>
using namespace std;

bool isMonotonic(vector<int>& A) {
    bool is_increase = true;
    bool is_decrease = true;
    for (int index = 0; index + 1 != A.size(); ++index) {
        if (A[index] > A[index+1]) {
            is_increase = false;
        }
        if (A[index] < A[index+1]) {
            is_decrease = false;
        }
    }
    return is_increase || is_decrease;
}

int main()
{
    std::cout << "Hello World!\n";
}
 