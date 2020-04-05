#include <iostream>

using namespace std;

class weh{
	public:
		int nilai;
};

int main()
{
	weh wah;
	
	cout << "Input Nilai = ";
	cin >> wah.nilai;
	if(wah.nilai>=85 && wah.nilai <= 100){
		cout << "LULUS";
		cout << "\nGrade A";	
	}if(wah.nilai>=75 && wah.nilai < 85){
		cout << "LULUS";
		cout << "\nGrade B";
	}if(wah.nilai>=60 && wah.nilai < 75 ){
		cout << "LULUS";
		cout << "\nGrade C";
	}if(wah.nilai>=45 && wah.nilai < 60 ){
		cout << "GAGAL";
		cout << "\nGrade D";
	}if(wah.nilai>=0 && wah.nilai < 45 ){
		cout << "GAGAL";
		cout << "\nGrade E";
	}if(wah.nilai<0 || wah.nilai >100 ){
		cout << "\nInput Nilai Antara 0 - 100";
	}
}
