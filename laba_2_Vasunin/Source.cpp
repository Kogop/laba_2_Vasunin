#include <iostream>
#include<math.h>

using namespace std;

int p = 0;
double d = 0, y = 0, r = 0;
int n = 0;

int EasyNumber(int x) {

	p = x * 10 + 1;

	for (double i = 1; i < 10000000; i = i*10)
	{
		d = p / i;
		if ( d < 1) {

			d = d + 1;
			d = d * i;
			break;

		}
	}

	return d;
}


bool IsEasyNumber(int x) {

	r = x / 2.0;
	for (int i = 2; i < r; i++)
	{

		y = x % i;
		if (y == 0)
			return false;

			//cout << y << endl;
	}

	return 1;
}


int main() {
	cout << "Vvedite celoe 4islo" << endl;
	cin >> n;
	cout << EasyNumber(n) << endl;
	cout << " 1 - prostoe, 0 - net" << endl;
	cout << IsEasyNumber(EasyNumber(n)) << endl;






	return 1;
}