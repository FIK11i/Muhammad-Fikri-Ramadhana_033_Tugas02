#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	float tinggi,alas,sisimiring,keliling;
	cout<<"Menghitung Sisi Miring dan Keliling Sebuah Segitiga"<<endl;
	cout<<"\n";
	
	cout<<"Masukkan tinggi segitiga: ";
	cin>>tinggi;
	cout<<"Masukkan alas segitiga: ";
	cin>>alas;
	
	sisimiring=sqrt(alas*alas+tinggi*tinggi);
	cout<<"Sisi miring = "<<sisimiring<<endl;
	
	keliling=alas+tinggi+sisimiring;
	cout<<"Keliling = "<<keliling<<endl;
	
	return 0;
}
