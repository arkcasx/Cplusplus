#include <iostream>
#include <string>

using namespace std;

int main()
{
	double celsius, fahr;
	int  x= -1, y= -1, z = -1;
	int highestlimit = 5000;
	
	while (x < 0) {
		cout << "Please give in a lower limit, limit >= 0: ";
		cin >> x;
	}

	while ((y <= 10) || (y > 50000) || (y < x )) {
		cout << "Please give in a higher limit, 10 > limit <= 50000: ";
		cin >> y;
	}
	
	while ((z > 10) || (z <= 0)) {
		cout << " Please give in a step, 0 < step <= 10: ";
		cin >> z;
	}

	cout << " Celsius	Fahrenheit" << endl;
	cout << "\n-------\t\t----------\n" << endl;

	celsius = x;
	while (celsius <= y) {
		fahr = ((9.0 * celsius) / 5.0) + 32.0;
		cout << celsius << "			" << fahr << endl;
		celsius += z;
	}


	system("pause");
	return 0;

}