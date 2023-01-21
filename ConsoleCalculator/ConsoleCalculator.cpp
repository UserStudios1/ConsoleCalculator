#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Console Calculator\n\n";
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b| a/b\n";

    Calculator c;
    while (true) 
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Divided by 0 exception\n";
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        } 
        cout << "Result: " << result << "\n";
    }
    return 0;
}