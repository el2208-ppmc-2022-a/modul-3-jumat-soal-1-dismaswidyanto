/*EL2208 Praktikum Pemecahan Masalah dengan C 2021/2022
*Modul            : 3 - Pointers and Functions
*Percobaan        : -
*Hari dan Tanggal : Jumat, 4 Maret 2022
*Nama (NIM)       : -
*Asisten (NIM)    : -
*Nama File        : soal-01.c
*Deskripsi        : -
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define size  5

void sinyal(float arr[], int tipe, int panjang, int amplitudo)
{
	//Isi kode anda
}
float *convolution(float a[], float b[])
{
    //Isi kode anda
}


int main()
{
    float a[size] = { 0,0,0,0,0 }; 
    float b[size] = { 0,0,0,0,0 };
    float* hasil;
    int tipe,panjang,amplitudo;
	
    //buat runtun 1
    printf("masukkan runtun pertama : \n");
    printf("masukkan jenis runtun : \n 1. step ( f(n) = Au(t)-Au(t-n)) \n 2. ramp( f(n) = An ) \n 3. eksponen luruh( f(n) = Ae^-t \n");
    scanf("%d", &tipe);
    printf("masukkan panjang runtun  (1-5): ");
    scanf("%d", &panjang);
    printf("masukkan amplitudo runtun  : ");
    scanf("%d", &amplitudo);
    sinyal(a,tipe, panjang, amplitudo);
    printf("\n");
	
    //buat runtun 2
    printf("masukkan runtun kedua : \n");
    printf("masukkan jenis runtun : \n 1. step ( f(n) = Au(t)-Au(t-n)) \n 2. ramp( f(n) = An ) \n 3. eksponen luruh( f(n) = Ae^-t \n");
    scanf("%d", &tipe);
    printf("masukkan panjang runtun  (1-5): ");
    scanf("%d", &panjang);
    printf("masukkan amplitudo runtun  : ");
    scanf("%d", &amplitudo);
    sinyal(b, tipe, panjang, amplitudo);
	
    //print runtun 1
    printf("runtun 1 adalah:");
    for (int i = 0; i < 5; i++)
    {
        printf("%f,", a[i]);
    }
    printf("\n");
	
    //print runtun 2
    printf("runtun 2 adalah:");
    for (int i = 0; i < 5; i++)
    {
        printf("%f,", b[i]);
    }
    printf("\n");
	
	//print runtun 2
	printf("hasil konvolusi adalah : ");
    hasil = convolution(a, b);
    for (int i = 0; i < 9; i++)
    {
        printf("%f,", hasil[i]);
    }

  
}
