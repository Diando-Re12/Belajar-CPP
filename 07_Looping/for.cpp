#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //for looping adalah suatu program untuk membuat perulangan dengan perintah for
    /*
    int x;
    int y;
    int c;
    cout<<"Masukkan Jumlah anak yang ada di barisan="; 
    cin>>c;
    cout<<"Masukkan Jumlah keseluruhan anak=";
    cin>>y;

    for (int c=0;c<=y;c++){ //(start,finish,langkah)
        cout<<"Anak-anak Mulai Menghitung "<<c<<endl;
    }
    cout<<"Menghitung selesai";
    return 0;
    */
   int t;
   cout<<"Masukkan angka = ";
   cin>>t;
   for (int x=t;x>=0;x--){//karena kondisi x>=t itu 
        cout<<"Angka ini ke- "<<x<<endl;//angka nya akan terus berkurang sampai titik tertentu
   }
}

/** 
 * Hal yang perlu diperhatikan pada for adalah masukkan inisiasi
 * inisiasi yang dimaksud disini adalah x=0 dimana x akan di hitung dari 0
 * 
 * x<=y adalah kondisi dimana nilai x akan berjalan jika belum mencapai tujuan
 * dan akan berhenti ketika tujuan pada nilai y tercapai
 * 
 * x++ atau x increament digunakan untuk menambah nilai sebanyak 1 dan untuk increament
 * bisa di atur sesuai kebutuhan dengan konsep aritmatika
 * 
 * 
 * Disini ane menggunakan contoh untuk menghitung baris siswa
 * **/