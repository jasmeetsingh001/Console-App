#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float n, m, x, sum;
    cout << "Enter a First Number : ";
    cin >> n;
    cout << "Enter a Second Number : ";
    cin >> m;
    cout << "\nChoose one Options for Sum : " << endl;

    cout << "1. Addition" << endl;

    cout << "2. Subtraction" << endl;

    cout << "3. Multiplication" << endl;

    cout << "4. Divide" << endl;
    cout << "\nOPTION : ";
    cin >> x;
    if(x == 1)
    {
        sum = n + m;
        cout << "The Answer is : " << sum;
    }
    if(x == 2)
    {
        sum = n - m;
        cout << "The Answer is : " << sum;
    }
    if(x == 3)
    {
        sum = n * m;
        cout << "The Answer is : " << sum;
    }
    if(x == 4)
    {
        sum = n / m;
        cout << "The Answer is : " << sum;
    }


    getch();
    return 0;
}
