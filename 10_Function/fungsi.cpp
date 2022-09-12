#include <iostream>

using namespace std;


//Penjelasan tentang function void tanpa kembalian
//void nama_fungsi()
//KANTONG
void judul(){// void tanpa kembalian
    cout<<"BALONKU ADA 5 \n";//ISI
}

void isi(){
    cout<<"RUPA RUPA WARNANYA \n";
}

void isi2(){
    cout<<"HIJAU KUNING KELABU \n";
}

//Penjelasan tentang funtion void dengan kembalian

//tipe_data nama_fungsi(tipe_data variabel1,tipe_data variabel2,tipe_data variabel3,....dst)
float luas_persegi_panjang(int x,int y){// harus isi parameter
    return x*y;// kembalian
}
float luas_segitiga(int a,int t){
    return 0.5*a*t;
}

//Penjelasan fungsi rekusif

//tipe_data  nama_fungsi(tipe_data variable1,tipe_data variable2.tipe_data variable3,.....dst)

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}



//TAS
int main(int argc, char const *argv[])
{
    //float hasilp=luas_persegi_panjang(5,6);
    //float hasils=luas_segitiga(7,9);
    //judul();
    //isi();
    //isi2();
    //cout<<hasilp<<endl;
    //cout<<hasils;
    //int hasil=sum(3);
    //cout<<hasil;
    return 0;
}

