#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string nama;
    cout<<"Masukkan nama=";
    cin>>nama;
    if (nama=="samael") {
        cout<<"Namaku "<<nama;//jika nama yang dimasukkan samael akan muncul kondisi ini
    }
    else {
        cout<<"Namamu tidak terdaftar";//jika semua kondisi diatas tidak terpenuhi maka yang akan berjalan adalah else
    }
    return 0;
}
