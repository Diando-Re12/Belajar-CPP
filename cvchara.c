#include <stdio.h>

int main(){
    int jawab;
    float a,cr,cdm;

    //Input rasio karakter
    printf("CV Character\n");
    printf("Crit Rate   :");
    scanf("%f",&cr);
    printf("Crit Damage :");
    scanf("%f",&cdm);

    //Inputan apabila melihat rasio dari detail tertentu
    printf("Stat Detail (1)/ Arte Detail(2) ? \n");
    scanf("%i",&jawab);

    //Proses penghitungan jika rasio dari stat detail
    if(jawab == 1){
        a = 2 * cr + cdm - 60;
        //Output
        printf("CV :%.1f",a);
    }
    //Proses penghitungan jika rasio dari arte detail
    else{
        a = (cr * 2) + cdm;
        //Output
        printf("CV :%.1f",a);
    }

}