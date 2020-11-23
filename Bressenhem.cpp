// Nama : 1. Bahrul Faizi 			(14116037)
//		  2. Dicky Hermawan 		(14116005)
//		  3. Muhamad Arwin Wijaya 	(14116050)
//		  4. Yoga Dwi Septana 		(14116006)

#include <iostream>
using namespace std;

int main(){
	int x1,y1,x2,y2;
	
	cout << "Batasan Program" << endl;
	cout << "1. Harus X2>X1 dan Y2>Y1" << endl;
	cout << "2. Harus Delta Y > Delta X" << endl;
	cout << "3. Harus >=0 untuk X atau Y" << endl << endl;
	cout << "Masukkan Nilai X1 : ";
	cin >> x1;
	
	cout << "Masukkan Nilai Y1 : ";
	cin >> y1;
	
	cout << "Masukkan Nilai X2 : ";
	cin >> x2;
	
	cout << "Masukkan Nilai Y2 : ";
	cin >> y2;
	
	cout << endl;
	
	int dx = x2 - x1;
	int dy = y2 - y1;
	int p0 = 2*dx - dy;
	
	cout << "K \t" << "P0 \t" << "Xk,Yk" << endl;
	for(int i=0; i<dy; i++){
		if(p0<0){
			cout << i << "\t";
			cout << p0 << "\t";
			p0 = p0 + 2*dx;
			y1++;
			cout << x1 << "," << y1 << endl;
		} else {
			cout << i << "\t";
			cout << p0 << "\t";
			p0 = p0 + 2*dx - 2*dy;
			x1++;
			y1++;
			cout << x1 << "," << y1 << endl;
		}
	}
	
	return 0;
}
