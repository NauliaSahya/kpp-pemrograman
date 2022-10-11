// NAMA		: Naulia Sahya Althafah
// NRP		: 5023221006
// Jurusan	: Teknik Biomedik

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

float mencari_V0(int Xmax)
{
	/* Tulis fungsi mencari v0 kalian disini */
  	return sqrt(Xmax*10);
}

int speed_dgn_loss(int V0)
{
	/* tulis fungsi hitung_loss kalian disini */
    if (V0 <= 10){
        return 1;
    }
    else if (V0 >= 11 && V0 <= 20){
        return 3;
    }
    else {
        return 5;
    }
}

int main() {
    /* tulis kode utama kalian disini */
    int x, jarak;
    float vtgn;
  	/* input adalah kecepatan tangensial maksimum roller */
  	/* std::cin >> input */
    std::cin >> x;
    jarak = pow(x-speed_dgn_loss(x), 2)*1/GRAVITASI;
    vtgn = mencari_V0(jarak) + speed_dgn_loss(mencari_V0(jarak));
  	/* std::cout << jarak << " " << kecepatan tangensial << std::endl */
    std::cout << jarak << " " << vtgn << std::endl;
    return 0;
}
