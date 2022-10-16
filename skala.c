#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void ulang();

void open()
{
  printf("\n\t===============================================");
  printf("\n\t             Program Menghitung Skala          ");
  printf("\n\t===============================================");
  printf("\n\n\tTekan apa enter untuk melanjutkan....");

  getch();
  system("cls");
}

int hitung_skala(float jarak_peta, float jarak_sebenarnya)
{
  int hasil = jarak_sebenarnya / jarak_peta;

  return hasil;
}

void output()
{
  float jarak_peta, jarak_sebenarnya;
  printf("\n\t===============================================");

  printf("\n\tMasukan jarak pada peta : ");
  while (scanf("%f", &jarak_peta) == 0)
  {
    printf("\n\tNilai yang anda masukan salah!");
    printf("\n\tMasukan Nilainya lagi:");

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
  }

  printf("\n\tMasukan jarak yang sebenarnya : ");
  while (scanf("%f", &jarak_sebenarnya) == 0)
  {
    printf("\n\tNilai yang anda masukan salah!");
    printf("\n\tMasukan Nilainya lagi:");

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
  }

  int hasil = hitung_skala(jarak_peta, jarak_sebenarnya);

  printf("\n\n\t===============================================");
  printf("\n\tSkala yang digunakan adalah 1:%d", hasil);
  printf("\n\t===============================================");
}

int main()
{
  open();

  output();

  ulang();

  return 0;
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
