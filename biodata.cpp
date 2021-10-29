#include<iostream>

using namespace std;

int main(){
	//input
	string nama;
	string sekolah;
	string jk;
	cout<<"Masukan Data Berikut :"<<endl;
	cout<<"1.Nama          : ";
	getline(cin,nama);
	cout<<"2.Sekolah       : ";
	getline(cin,sekolah);
	cout<<"3.Jenis Kelamin : ";
	getline(cin,jk);cout<<"."<<endl;
	//output
	cout<<"Data Siswa :"<<endl;
	cout<<"Nama Anda Adalah = "<<nama<<endl<<"Sekolah di 	 = "<<sekolah<<endl<<"Jenis Kelamin 	 = "<<jk;
	return 0;
}
