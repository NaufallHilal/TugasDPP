#include <iostream>
#include <ncurses.h>
#include <windows.h>
using namespace std;

int main(){

	string nama="Naufal Hilal";
	string jeniskelamin="Laki Laki";
	string jurusan="Ilmu Komputer";
	int npm=2117051020,i;
	
	cout<<"\t     HELLO!\n";
	refresh();Sleep(1000);
	cout<<" Berikut Ini Adalah Biodata Saya :\n";
	refresh();Sleep(1000);
	for(i=0;i<=35;i++){
		cout<<"=";
		refresh();Sleep(0050);
	}
	cout<<"\n";
	refresh();Sleep(1000);
	cout<<" Nama\t\t: "<<nama<<endl;
	refresh();Sleep(1000);
	cout<<" Jenis Kelamin\t: "<<jeniskelamin<<endl;
	refresh();Sleep(1000);
	cout<<" Jurusan\t: "<<jurusan<<endl;
	refresh();Sleep(1000);
	cout<<" NPM\t\t: "<<npm<<endl;
}
