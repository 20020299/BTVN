#include <iostream>

using namespace std;

int UCLN(int a, int b)
{
    while ( a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a;
}
 
int main()
{
    int a,b;
    cin >> a >> b;
    int a1=a, b1=b;
    int a2 = a1 / UCLN(a,b), b2 = b1 / UCLN(a,b);
    cout << a2 << '/' << b2;
    return 0;
}
