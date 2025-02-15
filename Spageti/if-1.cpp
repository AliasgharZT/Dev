#include<iostream>

using namespace std;

int main(){
	int a=1,b=2,c,d;
	if(a==1){
		if(b==1){
			c=1;
		}
		else{
			c=3;
		}
	}
	else{
		if(a==2){
			c=2;
		}
		else{
			c=0;
		}
	}
	
	cout<<c<<endl;
	
	(a==1)?((b==1)?:d=3):((a==2)?d=2:d=0);
	cout<<d<<endl;
	// ture=1, false=0 
	cout<<(a==1)?((b==1)?d=1:d=3):((a==2)?d=2:d=0);
	
	int q=1,w=2,e=3,r;
	// ture=1, false=0 
	cout<<endl<<(q>w || q>e)?r=12:r=13;
	
	int z;
	z=(a==1)?((b==1)?d=1:d=3):((a==2)?d=2:d=0);
	cout<<endl<<z;
	
	return 0;
}

