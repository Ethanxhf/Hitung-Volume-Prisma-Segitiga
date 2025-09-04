/***************************************************
 Program menghitung volume prisma segitiga.
 Initial State : program meminta input user berupa alas segitiga, tinggi segitiga, dan tinggi prisma segitiga.
 Final State   : program menghasilkan output berupa volume prisma segitiga (cm^3).
 ***************************************************/
#include <iostream>

using namespace std;
int main()
{
    float alas_segitiga, tinggi_segitiga, tinggi_prisma_segitiga, 
    volume_prisma_segitiga;

    cout << "[ TOOLS HITUNG VOLUME PRISMA ]" << endl;
    // input
    cout << "Masukkan Alas (cm):";
    cin >> alas_segitiga;
    
    cout << "Masukkan Tinggi (cm): ";
    cin >> tinggi_segitiga;

    cout << "Masukkan Tinggi Prisma (cm): ";
    cin >> tinggi_prisma_segitiga;
    
    // rumus
    volume_prisma_segitiga = 0.5*alas_segitiga*tinggi_segitiga*
    tinggi_prisma_segitiga;

    // final output
    cout << "Volume Prisma (cm^3): " << volume_prisma_segitiga << endl;

    return 0;
}