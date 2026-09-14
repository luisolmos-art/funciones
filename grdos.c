#include <stdio.h>
float CaF(float);
float FaC(float);
    int main(){
    int opc;
    float grados, resul;
    int i = 0;
    while(i == 0){
    printf("Elige:\n1)C => F\n2)F => C\n3)mejor no\n");
    scanf("%d", &opc);
    switch(opc){
        case 1:
        printf("\nDime los grados: ");
        scanf("%f", &grados);
        resul = CaF(grados);
        printf("\n%f\n", resul);
        break;
        case 2:
        printf("\nDime los grados: ");
        scanf("%f", &grados);
        resul = FaC(grados);
        printf("\n%f\n", resul);
        break;
        case 3:
        return(0);
        break;
        default:
        printf("que haces?\n\n");
        break;
    };
}
    }

    float CaF(float grados){
        float calc= grados*1.8+32;
        return(calc);
    }
    float FaC(float grados){
        float calc = (grados-32)/1.8;
        return(calc);
    }