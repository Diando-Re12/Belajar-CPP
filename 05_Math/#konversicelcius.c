#include <stdio.h>
int main(){

	int c,f,k,r;
	printf("Konversi Celsius\n");
	printf("1.Fahrenheit \n");
	printf("2.Kelvin \n");
	printf("3.Reamur \n");
	
	printf("Masukan celciusnya : ");scanf("%d",&c);
	
	f = (c * 9/5) + 32;
	k = c + 273;
	r = c * 4/5;
	

	printf("Konversi Fahrenheit : %d \n",f);
	
	printf("Konvers Kelvinnya : %d \n",k);

	printf("Konvers Reamurnya : %d \n",r);
	
	
	
	return 0;
}
