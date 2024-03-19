#include <iostream>
using namespace std;

int main() {

	int i;
	int arr[5];

	for (i = 0; i < 5; i++) {
		cout << i << " Selamat Pagi Dunia" << endl;
	}

	cout << "Nilai i terakhir : " << i << endl;
	
	for (i = 0; i < 5; i++) {
		cout << "Masukan Nilai index ke-" << i << " :";
		cin >> arr[i];

	}
	for (i = 0; i < 5; i++) {
		cout << "Data Array ke-" << i << " :" << arr[i] << endl;
	}
	return 0;
}