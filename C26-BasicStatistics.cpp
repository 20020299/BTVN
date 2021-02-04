#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	} 
	int min = a[0];
	for (int i = 0; i < n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	} 
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	cout << "Mean: " << sum/n << endl
		 << "Max: " << max << endl
		 << "Min: " << min << endl;
	return 0;
}
