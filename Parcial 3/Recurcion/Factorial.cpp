#include <stdio.h>

int a;
//funcion
int fact(int b){
    int resultado=0;
    if(b<2){
        resultado=1;
    }else{
        resultado=b*fact(b-1);
    }
    return (resultado);
}
int main(){
    printf("\t**Factorial**");
    printf("\nIntroduce el numero:\n");
    scanf("%i", &a);
	int factorial = fact(a);
	printf("\n%i!= %i ", a,factorial);
return 0;
}
