#include <iostream>
#include <ctime>
#include <string>
#include <fstream>


using namespace std;


const int rows = 10;
const int elements = 10;

int maxships = 10;

string matrix[rows][elements];

void Clear() {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < elements; j++) {
			matrix[i][j] = "0";
		}
	}
}

void Show() {

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < elements; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int NumberOfShips() {
	int c = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < elements; j++) {
			if (stoi(matrix[i][j]) == 1) {
				c++;
			}
		}

	}
	return c;
}


void SetShips() {
	int s = 0;
	while (s < maxships) {
		int x = rand() % rows;
		int y = rand() % elements;

		if (stoi(matrix[x][y]) != 1) {
			s++;
			matrix[x][y] = "1";
		}
	}
}

bool Attack(int x, int y) {
	if (stoi(matrix[x][y]) == 1) {
		matrix[x][y] = "X";
		return true;
	}
	return false;
}






int main() {
	srand(time(NULL));
	Clear();
	SetShips();
	int pos1, pos2;
	while (1) {
		cout << "Please input location: "; cin >> pos1 >> pos2;
		Show();
		if (Attack(pos1, pos2)) {
			cout << "You got me! :" << endl;

		}
		else {
			cout << "No ship at location, Please Try Again!" << endl;
			cout << "Number of ships left: " << NumberOfShips() << endl;
		}
	}

	system("pause");
	return 0;
}