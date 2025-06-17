#include <iostream>
using namespace std;
int main () {
	int notas[5]={3,9,4,10,0};
	int nuevo;
	int posicion;
	// declaramos el for con un valor i el cual vale 0, mientras el valor i sea menor a 5
	//se repetira y el valor i aumentara su valor en 1
	for(int i=0;i<5;i++)
	{
	    notas[i]=notas[i]*2;
	    cout<<"Duplicar el elemento "<<i+1<<" del vector: "<<notas[i]<<endl;
	}
	//como resultado los nuevos valores del vector deberian ser 6,18,8,20,0
	
	//le pedimos al usuario ingresar el nuevo elemento y lo guardaremos en nuevo
	cout<<"ingrese un nuevo elemento: ";
	cin>>nuevo;
	//le pedimos al usuario la posicion de deseada 
	cout<<"ingrese la posicion donde se ubica en el vector(del 1 al 5): ";
	cin>>posicion;
	//declaramos el nuevo vector para poner el nuevo elemento
	int notas2[5];
	//en este caso como anteriormente le pedimos al usuario que ingrese una posicion del 1 al 5
	//para acceder a ella tenemos que iniciar desde el 0 al 5 por lo tendremos
	//que restarle 1 a la posicion
	notas2[posicion-1]=nuevo;
	for(int x=0, j=0;j<5;x++)
	{
	    if(j==posicion)
	    {
	        notas2[j]=nuevo;
	    }
	    else
	    {
	        notas2[j]=notas[x];
	       x++;
	    }
	}
	//mostramos el resultado final
	for(int z=0;z<6;z++)
	{
	    cout<<"elemento "<<z+1<<": "<<notas2[z];
	}
	
return 0;
}
