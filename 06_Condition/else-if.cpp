#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nilai;
    cout<<"Masukkan nilai =";
    cin>>nilai;
    if (nilai>=80&& nilai<=100){
        cout<<"Anak ini mendapat peringkat A";// jika nilai diatas atau sama dengan 80 dan dibawah atau sama dengan 100
    }
    else if(nilai>=60&& nilai<80){
        cout<<"Anak ini mendapat peringkat B";// jika nilai diatas atau sama dengan 60 dan dibawah 80
    }
    else if(nilai>=40&& nilai<60){
        cout<<"Anak ini mendapat peringkat C";// jika nilai diatas atau sama dengan 40 dan dibawah 60
    }
    else if(nilai>=20&& nilai<40){
        cout<<"Anak ini mendapat peringkat D";// jika nilai diatas atau sama dengan 20 dan dibawah 40
    }
    else{
        cout<<"Mau mati kapan lu";
    }
    return 0;
}
