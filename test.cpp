#include <iostream>

void RumusLuasKeliling()
{
	int varA[3];
	std::cout << "Masukan panjang persegi panjang: ";
	std::cin >> varA[0];
	std::cout << "Masukan lebar persegi panjang: ";
	std::cin >> varA[1];

	varA[2] = varA[0] * varA[1];
	std::cout << "Luas persegi panjang adalah " << varA[2] << std::endl;
}

int main()
{
  #define JumlahProducts 4

  int menu;
  std::cout << "\n1. Rumus Luas Keliling\n2. Rumus Array\n3. Pertemuan P5\nMasukan Pilihan Program: ";
	std::cin >> menu;
  std::cout << std::endl;
  switch (menu)
  {
    case 1:
      RumusLuasKeliling();
    break;
    
    case 2:
    {
      std::string products[JumlahProducts] = {"Buku", "Pensil", "Penggaris", "Pulpen"};
      int data[JumlahProducts][2] = { {10, 5000}, {25, 2000}, {15, 3000}, {30, 4000}};
      for(int i; i < JumlahProducts; i++)
        std::cout << "Produk: " << products[i] <<  ", Stok: " << data[i][0] << ", Harga: " << data[i][1] << std::endl;
    }
    break;

    case 3:
    {
        float Var3[3];
        Var3[2] = 3.14;
        std::cout << "Masukan Jari-Jari: ";
        std::cin >> Var3[0];
        Var3[1] = Var3[2]*Var3[0]*Var3[0];
        std::cout << "Luas Lingkaran: " << Var3[1];
    }
    break;

    default: main();
  }
  std::cout << std::endl;
  return 0;
}
