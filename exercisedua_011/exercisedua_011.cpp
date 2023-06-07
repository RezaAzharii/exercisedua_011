#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;																		//variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() {														//constructor
		x = 0;
	}
	virtual void input() {
		
	}
																				// fungsi yang menerima input dan mengirim input melalui
																				//fungsi setX untuk disimpan di x
	virtual float Luas(int a) { 
		return 0; 
	}																		//fungsi untuk menghitung luas
	virtual float Keliling(int a) { 
		return 0; 
	}																			//fungsi untuk menghitung keliling
	void setX(int a) {															//fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX(int a) {																//fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar {
public:
	void input() {
		int r;
		cout << "Masukan jejari" << r << endl;
		cin >> r;
		setX(r);
	}

	float luaslingkaran(float r) {
		return 3.14 * r * r;
	}

	float kelilinglingkaran(float r) {
		return 2 * 3.14 * r;
	}
};

class Bujursangkar :public bidangDatar {
public:
	void input(int a) {
		cout << "Masukan Luas : " << endl;
		cin >> a;
		setX(a);

	}
	float luasbujursangkar(float s) {
		return s * s;
	}
	
	float kelilingbujursangkar(float s) {
		return 4 * s;
	}
};

int main() {
bidangDatar* bidang;

bidang = new Lingkaran();



return 0;
}