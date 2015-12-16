#include<stdio.h>
int a;
int fibo(int b){
    if(b>2)
        return fibo(b-1)+fibo(b-2);
    else if(b==2&&1)
        return 1;
    else if (b==0)
        return 0;
}
int main(){
    printf("\t**Fibonacci**");
    printf("\n\tIntroduce el limite de la serie: ");
    scanf("%i", &a);
    for (int i=0; i<=a; i++)
    {
      printf("F%i\t%i\n", i, fibo(i));
    }
return 0;
}
