#include<iostream>
#define f for

using namespace std;

int main(){
	
	for(int q=0;q<5;q++)
		cout<<q;
		
	cout<<endl;

	f(int a=0;a<5;a++)
		cout<<a;
	
	cout<<endl;
	#undef f
	
	for(int z=0;z<5;z++)
		cout<<z;
	
	cout<<endl;
	#define f for
		
	f(int w=0;w<5;w++)
		cout<<w;
		
	cout<<endl;
	#undef for
	
	for(int s=0;s<5;s++)
		cout<<s;
	
	#define bool float
	#define float bool
	
//	bool b1=true; error
	bool b2=12.3;
	
//	float f1=13.2 error
	float f2=false;
	
	return 0;
}

