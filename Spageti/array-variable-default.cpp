#include<iostream>

using namespace std;

int main(){
	int i=0;
	int a[100];
	
	a[i]=20;
	cout<<"i="<<i<<" a["<<i<<"]="<<a[i];
	
	i+=3;i*=10;
	cout<<endl<<"i="<<i<<endl;
	
	a[0x1]=5;
	cout<<"a[0x1]="<<a[0x1]<<" a[1]="<<a[1]<<endl;
		
	a[i+a[a[1]]]=30;
	cout<<"a[i+a[a[1]]]="<<a[i+a[a[1]]]<<endl;
	
	return 0;
}

