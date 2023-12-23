#include <iostream>
using namespace std;

void hanoi(int i, int k, int n) // i-номер исходного стержня k-целевой стержень n-диски 
{
	if (n == 1) {
		cout << "Переместить первый диск со стержня " << i << " на стержень " << k << endl;
	}
	else
	{
		int tmp = 6 - i - k; // номер промежуточного стержня
		hanoi(i, tmp, n - 1); // перемещает верхние дискии с исходного на промежуточный
		cout << "Переместить диск " << n << " со стержня " << i << " на стержень " << k << endl;
		hanoi(tmp, k, n - 1);
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	hanoi(1, 2, 4);
	return 0;
}