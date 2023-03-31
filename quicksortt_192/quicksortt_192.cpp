#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;
void input() {
	while (true)
	{
		cout << "masukkan panjang element array ;";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\n masukkan panjang array adalah 20" << endl;

	}
	cout << "\n===============" << endl;
	cout << "\nenter array element" << endl;
	cout << "\n===============" << endl;


