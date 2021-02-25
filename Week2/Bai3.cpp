#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a+b>c && a+c>b && b+c>a) {
    	cout << "chu vi: " << a + b + c << endl;
    	if(a == b == c) cout << "tam giac deu";
    	else if (a == b || a == c || b == c) cout << "tam giac can";
    	else if (a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b) cout << "tam giac vuong";
    	else cout << "tam giac thuong";
	}
	else {
		cout << "khong phai tam giac";
	}
    return 0;
}
