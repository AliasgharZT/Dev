#include<iostream>

using namespace std;

int main(){
	int sixten[16]={0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xA,
	0xB,0xC,0xD,0xE,0xF};
	
	for(int q=0;q<16;q++)
		cout<<sixten[q]<<endl;
		
	cout<<"ox118(16)="<<0x118<<" 8*1+1*16+1*256="<<8*1+1*16+1*256<<"(10)\n";
	cout<<"280(10)="<<280<<" (280/16)/16 (280/16)%16 280%16 ="<<(280/16)/16<<(280/16)%16<<280%16<<"(16)\n";
	
	return 0;
}
