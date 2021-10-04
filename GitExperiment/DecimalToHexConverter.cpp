#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;


int main()
{
    int number, digit = 0;
    string result = "";
    cout << "Hi!" << endl;
    cout << "Input number please=" << endl;
    cin >> number;
    while (number > 0)
    {
        digit = number % 16;
        switch (digit)
        {
            case 15 : result = 'F' + result; break;
            case 14 : result = 'E' + result; break;
            case 13 : result = 'D' + result; break;
            case 12 : result = 'C' + result; break;
            case 11 : result = 'B' + result; break;
            case 10 : result = 'A' + result; break;

            default: result = to_string(digit) + result; break;
        }

        
        number /= 16;
    }
    cout << "The number in binary is:" << result << endl;
    system("pause");
    return 0;
}
