#include <iostream>
using namespace std;

int main() 
{
    int sum = 0;

    // Use a loop to iterate through numbers from 1 to 100
    for (int i = 2; i <= 100; i += 2) 
    {
        sum += i;
    }

    cout << "The sum of even numbers between 1 and 100 is: " << sum <<endl;

    return 0;
}