#include <iostream>
using namespace std;

int main(){
	int HargaPokok,Bunga,Cicilan,JangkaWaktuCicilan,KeuntunganDealer,TotalHargaMotor,HargaMotor;
	
	cout<<"Menghitung Cicilan, Total Harga Motor dan Keuntungan Dealer dari Pembelian Sepeda Motor"<<endl;
	cout<<"\n";
	
	cout<<"Masukkan Harga Sepeda Motor = Rp. ";
	cin>>HargaMotor;
	cout<<"Masukkan Jangka Waktu Cicilan Sepeda Motor (Bulan) = ";
	cin>>JangkaWaktuCicilan;
	cout<<"\n";
	
	cout<<"Rincian Biaya Sepeda Motor"<<endl;
	HargaPokok=HargaMotor/JangkaWaktuCicilan;
	cout<<"  Harga Pokok = Rp. "<<HargaPokok<<endl;
	Bunga=HargaPokok*0.1;
	cout<<"  Bunga = Rp. "<<Bunga<<endl;
	Cicilan=HargaPokok+Bunga;
	cout<<"  Cicilan = Rp. "<<Cicilan<<endl;
	TotalHargaMotor=Cicilan*JangkaWaktuCicilan;
	cout<<"  Total Harga Motor = Rp. "<<TotalHargaMotor<<endl;
	KeuntunganDealer=TotalHargaMotor-HargaMotor;
	cout<<"  Keuntungan Dealer = Rp. "<<KeuntunganDealer<<endl;
	
}
