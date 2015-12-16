#include <stdio.h>
int a,b;
int ackermann(int m, int n)
{
    if (m==0)
        return n + 1;
    else if (n==0)
        return ackermann(m-1, 1);
    else
        return ackermann(m-1, ackermann(m, n-1));
}

int main(){
    printf("Funcion ackermann");
    printf("\n\tIntroduce el primer numero: ");
    scanf("%i", &a);
    printf("\n\tIntroduce el segundo numero: ");
    scanf("%i", &b);
    printf("Resultado: %i", ackermann(a,b));
return 0;
}
