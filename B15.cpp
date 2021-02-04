#include <iostream>
#include <cstring>
using namespace std;
string Fibonacci(int n)
{
    if (n == 0 )
        return "a";
    else if (n == 1)
    	return "b";
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
    int n;
    for (int i = 0; i < 10; i++) {
    	cout << Fibonacci(i) << ' ';
	}
    return 0;
}
