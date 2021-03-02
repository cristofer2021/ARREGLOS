#include <iostream>
#include <fstream>
using namespace std;

#define tam 50

void ingresar (int a[], int n);
void ordenar (int a[], int n);
void suma (int a[], int n);
void imprimir (int a[], int n);
void busqueda(int a[], int n);


int main()
{

    int arreglo1[tam];

    int n;
    cout<<"Dijite lo numeros que va ingresar:";
    cin>>n;
    ingresar(arreglo1,n);
    cout<<endl;
    imprimir(arreglo1,n);
    cout<<endl;
    ordenar(arreglo1,n);
    cout<<endl;
    imprimir(arreglo1,n);
    cout<<endl;
    suma(arreglo1,n);
    cout<<endl;
    busqueda(arreglo1,n);
    return 0;
}




void ingresar (int a[], int n)
{
    int i;

    for (i=0 ; i<n ; i++)
    {
        cout<<"dijite :"<<i+1<<endl;
        cin>>a[i];
    }

}

void ordenar (int a[], int n)
{
    int aux;
    for (int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[j]<a[i])
            {
                aux=a[i];

                a[i]=a[j];

                a[j]=aux;

            }

        }
    }


}
void suma (int a[], int n){
  int suma=0,i;
  suma=suma+i;
  for (i=0 ; i<n ; i++){
    suma=suma+a[i];

  }
  cout<<" la suma de los elemtos es : " << suma;


}

void imprimir(int a[], int n)
{
  ofstream binario;
binario.open("Ordenamiento.txt",ios::app);
    int i;
    for (i=0 ; i<n; i++)
    {
        cout<<"["<<a[i]<<"]";
        
    }
        binario<<a[i];
       binario.close(); 
}
void busqueda(int a[], int n){
  int i,busqueda,ultimo,primero,medio,num ;
  ofstream binario;
binario.open("busqueda .txt",ios::app);
for (i=0; i<a[i];i++) 
    {
        cout<<"Ingrese el numero que desea buscar: ";
        cin>>num;
    }
    primero=0;
    ultimo=n-1;
    medio=(primero+ultimo)/2;
    while (primero<=ultimo) 
    {
        if (a[medio]< num)
        {
            primero=medio+1;
        }else{
           if (a[medio]== num) 
        {
            cout<<" Se encontro la posición ";
            cout<<medio+1;
            break;
        }
        else {
            ultimo = medio - 1;
        }

        medio = (primero+ultimo)/2;
    }
    if (primero>ultimo)
    {
        cout<<num<<" no se encontro";
    }

   
}
cout<<" el elemento a buscar es ";
binario<<"dijite que numero desea buscar ";
binario.close(); 
}
