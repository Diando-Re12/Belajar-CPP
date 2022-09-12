#include <iostream>
#include <string>

using namespace std;

// oke ya ges ya jadi disini ada beberapa variabel mirip mirip kek tetangga sebelah v;

    // Int = basic number
    // double = desimal number (mirip float di python)
    // char = single huruf (kayak "A" "b")
    // string = ya tau lah ini kek kalimat/kata biasa
    // bool = True/False udah itu ae

    //contoh penggunaan :

int main()
{
    int Nomersaya = 50; //variable Nomersaya jadi 50
    cout << Nomersaya << endl;


// awokaow gampang kan sekarang contoh variabel lain
// dengan pemanis kalimat v;
// OWH YA COK "endl" INI BUAT ENTER SAMA KAYAK "\n"

    cout << "INI CONTOH YANG LEBIH RAPI YA TOD" <<"\n\n";
    int Nomerint = 50;
    cout << "Ini nomer integer :" << Nomerint <<endl;

    double Nomerdouble = 50.5;
    cout << "Ini nomer desimal :" << Nomerdouble <<endl;

    char Hurufchar ='A';
    cout << "Ini huruf sebiji buat loe :" << Hurufchar <<endl;

    string Textstring = "Halo Anjing";
    cout << "Iya bang ini adalah string :" << Textstring <<endl;

    bool Mybool = true;
    cout << "Kamu ganteng banget :" << Mybool <<endl;

// variabel tadi juga bisa kita tambahin lo gess
    cout << "\n\n"; //abaikan ini hanya buat space double enter
    
    int x = 20;
    int y = 15;
    int hasil = x + y;
    cout << "Nilai X adalah " << x << endl;
    cout << "Nilai Y adalah " << y << endl;
    cout << "Hasil dari X + Y adalah " << hasil;
    return 0;
    
}