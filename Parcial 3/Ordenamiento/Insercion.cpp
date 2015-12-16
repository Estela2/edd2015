#include<iostream>
#include<cstdio>
using namespace std;
#define largo 50
void insercionDirecta(int A[],int n)
{
      int i,j,v;

      for (i = 1; i < n; i++)
        {
             v = A[i];
             j = i - 1;
             while (j >= 0 && A[j] > v)
             {
                  A[j + 1] = A[j];
                  j--;
             }

             A[j + 1] = v;
      }
}
void cad(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<"Ingresa numero "<<i+1<<": ";
        cin>>n[i];
    }

}
void muestraCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<n[i]<<endl;
    }
}

int main ()
{
    int A[largo],n;
    do{
    cout<<"Cantidad de numeros a ingresar: ";cin>>n;
        if(n<=0||n>largo)
            cout<<"Debe ingresar un valor  > a 0 y < a "<<largo<<endl;
    }while(n<=0||n>largo);

    cad(n,A);
    insercionDirecta(A,n);
    muestraCadena(n,A);

}
