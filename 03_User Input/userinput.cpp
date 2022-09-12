#include <iostream>
#include <string>

using namespace std;

int main()
{
    // okeh, jadi disini ada 2 basic cmd yang perlu lo tau
    
    // "cout" ini buat ngeprint kan (C out = keluar v;)
    // "cin" nah ini tuh buat ngambil input data dari user (C in = masuk v;)

    // okeh contoh sederhana dulu

    int x;
    cout << "Masukan nomer: ";
    cin >> x; // ini bakal ngambil input data dari user lalu dibawa ke variabel "x"
    
    cout << "Nomer pilihan kamu adalah: " << x;

    // mudah kan cok v;
    // sekarang kita bakal buat kalkulator SUPER DUPER BASIC IN DA WHOLE WORLD
    cout << "\n\n";

    int angkapertama;
    int angkakedua;
    int hasil;

    cout << "---KALKULATOR PENJUMLAHAN SEDERHANA--- \n";

    cout << "Masukan angka pertama: ";
    cin >> angkapertama;

    cout << "Masukan angka kedua: ";
    cin >> angkakedua;

    hasil = angkapertama + angkakedua;

    cout << "Hasil penjumlahan: " << hasil;
    return 0;
}