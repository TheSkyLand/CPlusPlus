#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double y;
    cout << "использование цикла for" << endl;
    for (double p = 6; p <= 8; p += 0.2)
    {
        y = pow(log(p), 2) / p;
        cout << y << endl;
    }

    cout << " -------------------------- " << endl << endl;
    cout << " использование цикла while " << endl;
    double x = 6;

    while (x <= 8)
    {
        y = pow(log(x), 2) / x;
        x += 0.2;
        cout << y << endl;
    }

    cout << " ---------------------------- " << endl << endl;
    cout << " использование цикла do while " << endl;
    x = 6;

    do
    {
        y = pow(log(x), 2) / x;
        x += 0.2;
        cout << (y) << endl;
    } while (x <= 8);
    system("pause");
}
