#include <iostream>

using namespace std;

int main()
{
	int factorialnumber = 0;
	cout << "Please enter a number: ";
	cin >> factorialnumber;

	int zero_count = 0;
	
	for (int five_factor = 5; five_factor <= factorialnumber; five_factor *= 5)
	{
		cout << five_factor<<endl;
		zero_count += factorialnumber / five_factor;
	}

	cout << "Trailing zeros of " << factorialnumber << "! is " << zero_count << endl;

	system("pause");
	return 0;
}