#include <iostream>
using namespace std;

class barang
{
public:
    int jumlah;
    string nama;
    string kategori;
    string tanggalProduksi;
    void printData()
    {
        cout << "Nama Barang = " << nama << endl;
        cout << "Jumlah = " << jumlah << endl;
        cout << "kategori = " << kategori << endl;
        cout << "Tanggal Produksi = " << tanggalProduksi << endl;
    }
};

int main()
{
    barang elektronik;

    elektronik.nama = "Laptop";
    elektronik.jumlah = 5;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "12 april 2000";
    elektronik.printData();
    barang nonElektronik;
    nonElektronik.nama = "Buku Tulis";
    nonElektronik.jumlah = 5;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "5 juli 2017";

    nonElektronik.printData();
}
