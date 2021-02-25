#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double d = b * b - (4 * a * c);
    if (d < 0) {
    	cout << "Phuong trinh vo nghiem";
	}
	else if (d == 0) {
		cout << "Phuong trinh co 1 nghiem duy nhat: " << -b/(2*a);
		
	}
	else {
		cout << "Phuong trinh co 2 nghiem: ";
		double x1 = (-b + sqrt(d)) / (2 * a);
		double x2 = (-b - sqrt(d)) / (2 * a);
		cout << x1 << ", " << x2;
	}
    return 0;
}
