#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi method
};

void mahasiswa::showNim() { //implementasi method diluar class
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 }; //object mhs
	mhs.showNim();	//member access operator

	mahasiswa& ref = mhs; //Pointer Referenc refMhs
	ref.nim = 2;		 //Member Access Operator
	mhs.showNim();

}