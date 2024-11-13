#include <iostream>

int main() {
  int bilangan, hasilbagi;
  std::cout << "Masukan Bilangan: ";
  std::cin >> bilangan;
  hasilbagi = bilangan % 2;
  if(hasilbagi == 0)
    std::cout << "Angka " << bilangan << " adalah bilangan Genap";
  else 
    std::cout << "Angka " << bilangan << " adalah bilangan Ganjil";
  return 0;
}
