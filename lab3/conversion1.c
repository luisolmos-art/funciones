#include <stdio.h>
void convertir(float,float*,float*,float*,float*);
int main(){
    float dinero, Y,DLLR,PND,EUR;
    scanf("%f", &dinero);
    convertir(dinero,&Y,&DLLR,&PND,&EUR);
    printf("Yen: %f \nDolar: %f\nLibras: %f\nEuros: %f\n", Y,DLLR,PND,EUR);
    }

void convertir(float peso, float* yen, float* dolar, float* libra, float* euro){
    *yen = 9.25 * peso;
    *dolar = 0.059 * peso;
    *libra = 0.044 * peso;
    *euro = 0.051 * peso;
    return;
    }