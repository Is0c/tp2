#include <iostream>
using namespace std;
int main () {
	int a[3];
	int suma=0;
	for(int i=0;i<3;i++)
	{
	    cout<<"ingrese el valor del vector "<<i+1<<": ";
	    cin>>a[i];
	    suma+=a[i];
	}
	cout<<suma<<endl;
}
