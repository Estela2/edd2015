#include <iostream>
#define largo 100

using namespace std;
void quicksort(int A[],int izq, int der )
{
int i, j, x , aux;
i = izq;
j = der;
x = A[ (izq + der) /2 ];
	do{
		while( (A[i] < x) && (j <= der) )
		{
			i++;
		}

		while( (x < A[j]) && (j > izq) )
		{
			j--;
		}

		if( i <= j )
		{
			aux = A[i]; A[i] = A[j]; A[j] = aux;
			i++;  j--;
		}

	}while( i <= j );

	if( izq < j )
		quicksort( A, izq, j );
	if( i < der )
		quicksort( A, i, der );
}
void leeCadena(int cant,int n[])
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
    leeCadena(n,A);
    quicksort(A,0,n-1);
    muestraCadena(n,A);

}
