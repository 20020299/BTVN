#include <iostream>
using namespace std;
 
int main()
{
    int n;
    int temp;
    int sum = 0;
    cin >> n;
    temp = n;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    cout << sum << endl;
    return 0;
}
