#include <iostream>

using namespace std;


int main() 
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
    	if (n % i == 0) {
    		sum += i;
		}
	}
	if (sum == n + 1) cout << "yes";
	else cout << "no";
    return 0;
}
