#include <iostream>
using namespace std;

int main(){
	float NilaiPraktikum,NilaiTeori,NilaiTugasdanFinalProject,RataRata;
	
	cout<<"Menghitung Nilai Rata-Rata dari Mata Kuliah Pemrogaman Terstruktur"<<endl;
	cout<<"\n";
	
	cout<<"Masukkan Nilai Praktikum : ";
	cin>>NilaiPraktikum;
	cout<<"Masukkan Nilai Teori : ";
	cin>>NilaiTeori;
	cout<<"Masukkan Nilai Tugas dan Final Project : ";
	cin>>NilaiTugasdanFinalProject;
	cout<<"\n";
	
	RataRata=(0.4*NilaiPraktikum)+(0.4*NilaiTeori)+(0.2*NilaiTugasdanFinalProject);
	cout<<"Nilai Rata-Rata Mata Kuliah Pemrogaman Dasar = "<<RataRata<<endl;
	
}
