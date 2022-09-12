#include <iostream>

using namespace std;
/**Karena sudah belajar aritmatika dengan puh pe
Disini gwehj mau kasih contoh soal yang simple aja sih sebenernya :susagreege: 
**/
//Program menghitung luas persegi
//Rumus luas persegi : l = 4 x s
//Boleh copas code ini buat gambaran :susagreege:


int main(){
	/**Pertama buat variabel awal
	Karena disini gua mau make bilangan bulat 
	jadi gwehj memakai variabel int(integer)**/

	int s ;//s untuk sisi
	int l ;//l untuk luas
	
	//Proses penginputan nilai s
	cout<<"Masukan sisi perseginya : ";//Sebagai contoh gwehj masukin sisi perseginya 4
	cin>>s;
	
	//Angka sisi yang gua masukan tadi (4)
	//Akan masuk ke proses ini, dimana rumusnya bakal menjadi l = 4 * 4
	l = 4 * s; //Ini Algoritma (Rumus)
	
	//Output(dari proses l : 4 * 4 = 16 )
	cout<<"Luas persegi tersebut adalah : "<<l;//Maka output yang keluar nanti adalah 16
	
	//Mungkin biar ada gambaran lagi, buatlah program menghitung keliling persegi panjang
	return 0; 
}
