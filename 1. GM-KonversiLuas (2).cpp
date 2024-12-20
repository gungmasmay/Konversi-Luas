#include <iostream>
using namespace std;

// Nama : Anak Agung Mas Mayuri
// Kelas : XI IPA 8


int main (){
	float a;
	char mode;
	
	cout << "== Selamat Datang di Konversi Satuan Luas ==" << endl;
	cout << endl;
	cout << "Silahkan piih mode konversi" << endl;
	cout << "A. Konversi Kilometer persegi (km^2)" << endl;
	cout << "B. Konversi Hektar (ha)" << endl;
	cout << "C. Konversi Are (a)" << endl;
	cout << "D. Konversi Meter persegi (m^2)" << endl;
	cout << "E. Konversi Desimeter persegi (dm^2)" << endl;
	cout << "F. Konversi Centimeter persegi (cm^2)" << endl;
	cout << "G. Konversi Milimeter persegi (mm^2)" << endl;
	cout << endl;
	cout << "Masukkan pilihan anda dalam Huruf Kapital : " << endl;
	cin >> mode;
	cout << "--------------------------------------------" << endl;
	
	switch (mode){
		case 'A':
			cout << "Konversi Kilometer persegi" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi km^2" << endl;
            
			cout << "a. km^2 ke hektar" << endl;
			cout << "b. km^2 ke are" << endl;
			cout << "c. km^2 ke m^2" << endl;
			cout << "d. km^2 ke dm^2" << endl;
			cout << "e. km^2 ke cm^2" << endl;
			cout << "f. km^2 ke mm^2" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Kilometer persegi ke hektar" << endl;
            		cout << endl;
		            cout << "Masukkan nilai km^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km^2 adalah " << a*100 << " hektar" <<endl;
		            break;
            
				case 'b':
		            cout << "Kilometer persegi ke are" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai km^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km^2 adalah " << a*10000 << " are" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Kilometer persegi ke Meter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai km^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km^2 adalah " << a*1000000 << " m^2" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Kilometer persegi ke Desimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai km^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km^2 adalah " << a*100000000 << " dm^2" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Kilometer persegi ke Centimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai km^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km^2 adalah " << a*10000000000 << " cm^2" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Kilometer persegi ke Milimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai km^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km^2 adalah " << a*1000000000000 << " mm^2" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		
		case 'B':
			cout << "Konversi Hektar" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi ha" << endl;
            
			cout << "a. ha ke km^2" << endl;
			cout << "b. ha ke are" << endl;
			cout << "c. ha ke m^2" << endl;
			cout << "d. ha ke dm^2" << endl;
			cout << "e. ha ke cm^2" << endl;
			cout << "f. ha ke mm^2" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Hektar ke Kilometer persegi" << endl;
            		cout << endl;
		            cout << "Masukkan nilai ha" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " hektar adalah " << a/100 << " km^2" <<endl;
		            break;
            
				case 'b':
		            cout << "Hektar ke are" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai ha" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " ha adalah " << a*100 << " are" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Hektar ke Meter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai ha" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " ha adalah " << a*10000 << " m^2" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Hektar ke Desimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai ha" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " ha adalah " << a*1000000 << " dm^2" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Hektar ke Centimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai ha" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " ha adalah " << a*100000000 << " cm^2" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Hektar ke Milimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai ha" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " ha adalah " << a*10000000000 << " mm^2" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
		
		case 'C':
			cout << "Konversi Are" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi are" << endl;
            
			cout << "a. are ke km^2" << endl;
			cout << "b. are ke hektar" << endl;
			cout << "c. are ke m^2" << endl;
			cout << "d. are ke dm^2" << endl;
			cout << "e. are ke cm^2" << endl;
			cout << "f. are ke mm^2" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Are ke Kilometer persegi" << endl;
            		cout << endl;
		            cout << "Masukkan nilai are" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " are adalah " << a/10000 << " km^2" <<endl;
		            break;
            
				case 'b':
		            cout << "Are ke Hektar" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai are" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " are adalah " << a/100 << " hektar" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Are ke Meter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai are" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " are adalah " << a*100 << " m^2" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Are ke Desimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai are" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " are adalah " << a*10000 << " dm^2" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Are ke Centimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai are" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " are adalah " << a*1000000 << " cm^2" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Are ke Milimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai are" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " are adalah " << a*100000000 << " mm^2" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		case 'D':
			cout << "Konversi Meter persegi" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi m^2" << endl;
           
			cout << "a. m^2 ke km^2" << endl;
			cout << "b. m^2 ke hektar" << endl;
			cout << "c. m^2 ke are" << endl;
			cout << "d. m^2 ke dm^2" << endl;
			cout << "e. m^2 ke cm^2" << endl;
			cout << "f. m^2 ke mm^2" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Meter persegi ke Kilometer persegi" << endl;
            		cout << endl;
		            cout << "Masukkan nilai m^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " m^2 adalah " << a/1000000 << " km^2" <<endl;
		            break;
            
				case 'b':
		            cout << "Meter persegi ke Hektar" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai m^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " m^2 adalah " << a/10000 << " hektar" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Meter persegi ke Are" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai m^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " m^2 adalah " << a/100 << " are" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Meter persegi ke Desimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai m^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " m^2 adalah " << a*100 << " dm^2" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Meter persegi ke Centimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai m^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " m^2 adalah " << a*10000 << " cm^2" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Meter persegi ke Milimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai m^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " m^2 adalah " << a*1000000 << " mm^2" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		case 'E':
			cout << "Konversi Desimeter persegi" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi dm^2" << endl;
            
			cout << "a. dm^2 ke km^2" << endl;
			cout << "b. dm^2 ke hektar" << endl;
			cout << "c. dm^2 ke are" << endl;
			cout << "d. dm^2 ke m^2" << endl;
			cout << "e. dm^2 ke cm^2" << endl;
			cout << "f. dm^2 ke mm^2" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Desimeter persegi ke Kilometer persegi" << endl;
            		cout << endl;
		            cout << "Masukkan nilai dm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dm^2 adalah " << a/100000000 << " km^2" <<endl;
		            break;
            
				case 'b':
		            cout << "Desimeter persegi ke Hektar" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dm^2 adalah " << a/1000000 << " hektar" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Desimeter persegi ke Are" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dm^2 adalah " << a/10000 << " are" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Desimeter persegi ke Meter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dm^2 adalah " << a/100 << " m^2" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Desimeter persegi ke Centimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dm^2 adalah " << a*100 << " cm^2" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Desimeter persegi ke Milimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dm^2 adalah " << a*10000 << " mm^2" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		case 'F':
			cout << "Konversi Centimeter persegi" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi cm^2" << endl;
            
			cout << "a. cm^2 ke km^2" << endl;
			cout << "b. cm^2 ke hektar" << endl;
			cout << "c. cm^2 ke are" << endl;
			cout << "d. cm^2 ke m^2" << endl;
			cout << "e. cm^2 ke dm^2" << endl;
			cout << "f. cm^2 ke mm^2" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Centimeter persegi ke Kilometer persegi" << endl;
            		cout << endl;
		            cout << "Masukkan nilai cm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cm^2 adalah " << a/10000000000 << " km^2" <<endl;
		            break;
            
				case 'b':
		            cout << "Centimeter persegi ke Hektar" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai cm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cm^2 adalah " << a/100000000 << " hektar" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Centimeter persegi ke Are" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai cm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cm^2 adalah " << a/1000000 << " are" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Centimeter persegi ke Meter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai cm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cm^2 adalah " << a/10000 << " m^2" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Centimeter persegi ke Desimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai cm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cm^2 adalah " << a/100 << " dm^2" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Centimeter persegi ke Milimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai cm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cm^2 adalah " << a*100 << " mm^2" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		case 'G':
			cout << "Konversi Milimeter persegi" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi mm^2" << endl;
            
			cout << "a. mm^2 ke km^2" << endl;
			cout << "b. mm^2 ke hektar" << endl;
			cout << "c. mm^2 ke are" << endl;
			cout << "d. mm^2 ke m^2" << endl;
			cout << "e. mm^2 ke dm^2" << endl;
			cout << "f. mm^2 ke cm^2" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Milimeter persegi ke Kilometer persegi" << endl;
            		cout << endl;
		            cout << "Masukkan nilai mm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mm^2 adalah " << a/1000000000000 << " km^2" <<endl;
		            break;
            
				case 'b':
		            cout << "Milimeter persegi ke Hektar" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai mm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mm^2 adalah " << a/10000000000 << " hektar" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Milimeter persegi ke Are" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai mm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mm^2 adalah " << a/100000000 << " are" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Milimeter persegi ke Meter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai mm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mm^2 adalah " << a/1000000 << " m^2" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Milimeter persegi ke Desimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai mm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mm^2 adalah " << a/10000 << " dm^2" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Milimeter persegi ke Centimeter persegi" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai mm^2" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mm^2 adalah " << a/100 << " cm^2" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
	
		default:
            cout << "Pilihan tidak tersedia" << endl;	
			break;	
	}
	
	return 0;
}


