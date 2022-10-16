#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void ulang();

float hitung_persegi()
{
  float sisi;
  printf("\n\t===============================================");
  printf("\n\t                    Persegi                    ");
  printf("\n\t===============================================");
  printf("\n\n\tMasukan nilai sisi : ");
  while (scanf("%f", &sisi) == 0)
  {
    printf("\n\tNilai yang anda masukan salah!");
    printf("\n\tMasukan Nilainya lagi:");

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
  }

  float luas = sisi;
  float keliling = sisi * 4;

  printf("\n\n\t===============================================");
  printf("\n\tLuasnya adalah %.2f dan Kelilingnya adalah %.2f", luas, keliling);
  printf("\n\t===============================================");

  ulang();
}

float hitung_persegi_panjang()
{
  float panjang, lebar;
  printf("\n\t===============================================");
  printf("\n\t                Persegi Panjang                ");
  printf("\n\t===============================================");
  printf("\n\n\tMasukan nilai panjang : ");
  while (scanf("%f", &panjang) == 0)
  {
    printf("\n\tNilai yang anda masukan salah!");
    printf("\n\tMasukan Nilainya lagi:");

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
  }
  printf("\n\tMasukan nilai lebar : ");
  while (scanf("%f", &lebar) == 0)
  {
    printf("\n\tNilai yang anda masukan salah!");
    printf("\n\tMasukan Nilainya lagi:");

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
  }

  float luas = panjang * lebar;
  float keliling = (2 * panjang) + (2 * lebar);

  printf("\n\n\t===============================================");
  printf("\n\tLuasnya adalah %.2f dan Kelilingnya adalah %.2f", luas, keliling);
  printf("\n\t===============================================");

  ulang();
}

float hitung_jajargenjang()
{
  float alas, tinggi, miring;
  printf("\n\t===============================================");
  printf("\n\t                Jajar Genjang                  ");
  printf("\n\t===============================================");

  printf("\n\n\tMasukan nilai tinggi : ");
  while (scanf("%f", &tinggi) == 0)
  {
    printf("\n\tNilai yang anda masukan salah!");
    printf("\n\tMasukan Nilainya lagi:");

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
  }
  printf("\n\tMasukan nilai alas : ");
  while (scanf("%f", &alas) == 0)
  {
    printf("\n\tNilai yang anda masukan salah!");
    printf("\n\tMasukan Nilainya lagi:");

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
  }
  printf("\n\tMasukan nilai miring : ");
  while (scanf("%f", &miring) == 0)
  {
    printf("\n\tNilai yang anda masukan salah!");
    printf("\n\tMasukan Nilainya lagi:");

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
  }

  float luas = alas * tinggi;
  float keliling = 2 * (alas + miring);

  printf("\n\n\t===============================================");
  printf("\n\tLuasnya adalah %.2f dan Kelilingnya adalah %.2f", luas, keliling);
  printf("\n\t===============================================");

  ulang();
}

int main()
{
  int menu;
  printf("\n\t===============================================");
  printf("\n\t         Program Menghitung Bangun Datar       ");
  printf("\n\t===============================================");
  printf("\n\tPilihan program:                               ");
  printf("\n\t[1] Persegi                                    ");
  printf("\n\t[2] Persegi Panjang                            ");
  printf("\n\t[3] Jajar Genjang                              ");
  printf("\n\t===============================================");
  printf("\n\tPilih nomor untuk operasi hitung :");
  while (scanf("%d", &menu) == 0 || menu < 1 || menu > 3)
  {
    printf("\t-----------------------------------------");
    printf("\n\tAngka yang Anda inputkan salah!");
    printf("\n\tMohon inputkan pilihan yang benar...\n");
    printf("\t-----------------------------------------");
    printf("\n\tPilih nomor untuk operasi hitung :");
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
  }

  getchar();
  system("cls");

  switch (menu)
  {
  case 1:
    hitung_persegi();
    break;
  case 2:
    hitung_persegi_panjang();
    break;
  case 3:
    hitung_jajargenjang();
    break;

  default:
    break;
  }
}

void ulang()
{
  int menu;

  printf("\n\n\t==========================================");
  printf("\n\tApakah anda ingin mengulang ?             ");
  printf("\n\t[1] Ulangi                                ");
  printf("\n\t[0] Exit                                  ");
  printf("\n\t==========================================");
  printf("\n\tPilihan : ");
  while (scanf("%d", &menu) < 0 || menu > 1)
  {
    printf("\t---------------------------------------------");
    printf("\n\t     Mohon masukkan pilihan yang benar!");
    printf("\n\t--------------------------------------------");
    printf("\n\tPilihan : ");
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
  }
  if (menu == 1)
  {
    system("cls");
    main();
  }
  else if (menu == 0)
  {
    printf("\n\t============================================");
    printf("\n\tTerimakasih telah menggunakan program kami");
    printf("\n\t============================================");
    getch();
    system("cls");
  }
}
