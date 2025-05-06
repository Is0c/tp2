#include <iostream>
using namespace std;
int main () {
	int num[10];
	int max,min;
	cout<<"ingrese el valor del vector 1:";
	cin>>num[0];
	max=num[0];
	min=num[0];
	for(int i=1; i<10;i++)
	{
        cout<<"ingrese el valor del vector "<<i+1<<":";
        cin>>num[i];
	    if(num[i]<min)
	    {
	        min=num[i];
	    }
	    if(num[i]>max)
	    {
	        max=num[i];
	    }
	}
	for(int x=0; x<10;x++)
	{
	    cout<<num[x]<<endl;
	}
	cout<<max<<endl;
	cout<<min<<endl;
return 0;
}
