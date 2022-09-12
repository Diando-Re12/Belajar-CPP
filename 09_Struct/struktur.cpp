#include <iostream>

using namespace std;

struct 
{
    int jumlah_unit;
    string jenis_mobil;
    float bensin;
    //inisiasi=isi barang
}Mobil,Mobil2;//identifier=saudaramu
//tamu dari kota asing

int main(int argc, char const *argv[])
{
    //main=pak rt
    Mobil.bensin=3.5;
    Mobil.jumlah_unit=1;
    Mobil.jenis_mobil="sedan";

    cout<<"MOBIL PAK BOWO \n";
    cout<<"Mobil yang saya pakai berjenis "<<Mobil.jenis_mobil<<"\n";
    cout<<"Jumlah unit mobil yang ada adalah "<<Mobil.jumlah_unit<<"unit"<<"\n";
    cout<<"Kapasitas bensin sebesar "<<Mobil.bensin<<"Liter"<<"\n";
    cout<<"================================================ \n";
    cout<<"MOBIL JOKO\n";
    Mobil2.bensin=6.5;
    Mobil2.jumlah_unit=3;
    Mobil2.jenis_mobil="matic";

    cout<<"Mobil yang saya pakai berjenis "<<Mobil2.jenis_mobil<<"\n";
    cout<<"Jumlah unit mobil yang ada adalah "<<Mobil2.jumlah_unit<<"unit"<<"\n";
    cout<<"Kapasitas bensin sebesar "<<Mobil2.bensin<<"Liter";
    return 0;
}


// array muat 1 tipe data int a[6]={1,2,3,4,5,6}
// struct bisa menyimpan banyak tipe data 