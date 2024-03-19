#include <iostream>
using namespace std;

//deklarasi variabel
int panjang, lebar;

//prosedur mengambil panjang dan lebar
void inputData()
{
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;
}


//fungsi menghitung luas
int hitungLuas()
{
    //mengembalikan nilai dari perkalian panjang dan lebar
    //kedalam fungsi hitung luas
    return panjang * lebar;
}

//prosedur menampilkan luas
void displayLuas()
{
    cout << "\nLuas persegi panjang adalah: " << hitungLuas() << endl;
}

//fungsi utama
int main()
{
    //memanggil prosedur dan fungsi
    inputData();
    displayLuas();

    //menghentikan operasi
    return 0;
}