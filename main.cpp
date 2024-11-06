#include <iostream>

class Mahasiswa {
  public:
    int NIM;
    std::string Name;
};

int const MAX_MAHASISWA = 10;
Mahasiswa DataMahasiswa[MAX_MAHASISWA];

void ShowMahasiswa() {
  for(int i = 0; i < MAX_MAHASISWA; i++) {
    if(DataMahasiswa[i].NIM != 0 && !DataMahasiswa[i].Name.empty())
      std::cout << "\nMahasiswa " << i+1 << "\nNIM: " << DataMahasiswa[i].NIM << "\nNama: " << DataMahasiswa[i].Name << std::endl;
  }
}

void AddMahasiswa(int NIM, std::string Name) {
  for (int i = 0; i < MAX_MAHASISWA; i++) {
    if(DataMahasiswa[i].NIM == 0 && DataMahasiswa[i].Name.empty()) {
      DataMahasiswa[i].NIM = NIM;
      DataMahasiswa[i].Name = Name;
      break;
    }
  }
}

void Menu() {
  int menu;
  std::cout << "\n1. Tampilkan Mahasiswa\n2. Tambah Mahasiswa\n3. Hapus Mahasiswa\nMasukan Pilihan >> ";
  std::cin >> menu;
  switch (menu)
  {
    case 1:
      ShowMahasiswa();
      Menu();
    case 2: {
      int NIM;
      std::string Name;

      std::cout << "\nMasukan NIM: ";
      std::cin >> NIM;
      std::cout << "Masukan Nama: ";
      std::cin >> Name;
      AddMahasiswa(NIM, Name);
      std::cout << "Data berhasil ditambahkan!" << std::endl;
    }
    Menu();
    case 3: {
      int no;
      ShowMahasiswa();
      std::cout << "\nPilih Nomor Mahasiswa yang akan di Hapus: ";
      std::cin >> no;
      no--;
      if(DataMahasiswa[no].NIM == 0 && DataMahasiswa[no].Name.empty())
        std::cout << "Nomor Data Mahasiswa tidak ditemukan!!\n";
      else {
        DataMahasiswa[no].NIM = 0;
        DataMahasiswa[no].Name.clear();
        std::cout << "Data Mahasiswa " << no+1 << " telah berhasil dihapus!\n";
      }
    }
    Menu();
  }
}

int main() {
  Menu();
  return 0;
}
