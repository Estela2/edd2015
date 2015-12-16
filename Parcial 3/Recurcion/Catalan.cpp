#include <stdio.h>
int a;
double cat(int b){
    if (b==0){
        return 1;
    }
    else{
        return (2*((2*b)-1))/(b+1)*cat(b-1);
    }
}
int main (){
    printf("Numero Catalan");
    printf("\n\tIntroduce el limite de la serie: ");
    scanf("%i", &a);
    for (int i=0; i<=a; i++)
    {
      printf("Cat%i\t%f\n", i, cat(i));
    }
