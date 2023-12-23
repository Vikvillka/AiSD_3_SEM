#include <iostream>

using namespace std;
//void ShowTables();
//
//int D[8][8]
//	{
//		{0, 2, INT_MAX, 8, 2, INT_MAX, INT_MAX, INT_MAX},
//		{2, 0, 3, 10, 5, INT_MAX, INT_MAX, INT_MAX},
//		{INT_MAX, 3, 0, INT_MAX, 12, INT_MAX, INT_MAX, 7},
//		{8, 10, INT_MAX, 0, 14, 3, 1, INT_MAX},
//		{2, 5, 12, 14, 0, 11, 4, 8},
//		{INT_MAX, INT_MAX, INT_MAX, 3, 11, 0, 6, INT_MAX},
//		{INT_MAX, INT_MAX, INT_MAX, 1, 4, 6, 0, 9},
//		{INT_MAX, INT_MAX, INT_MAX, INT_MAX, 8, INT_MAX, 9, 0},
//};
void main(){
	int x;
	int y[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		x = y[i] % 8;
		cout << "(" << x << "," << y[i] << ")" << endl;
	}

}

//void ShowTables()
//{
//	cout << "Matrix:\n";
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			cout << D[i][j] << "\t";
//		}
//		cout << "\n";
//	}
//};