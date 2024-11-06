#include <iostream>
//const int MAX_MAHASISWA = 10;

class Mahasiswa {
  public:
    int NIM;
    std::string Name;

    bool isEmpty() const {
        return (NIM == 0 || Name.empty());
    }
};

/*
void AddMahasiswa() {
  int AddData[2];
  Mahasiswa DataMahasiswa[MAX_MAHASISWA];
  std::cin >> AddData[1];
  std::cin >> AddData[2];

  for (int i; i < MAX_MAHASISWA; i++) {
    if(!DataMahasiswa[i].isEmpty()) {
      
    }
  }
}

void Tugas() {
  int arrx[3][4] = {{1,3,4,5}, {2,4,6,8}, {3,5,7,9}};
  for (int i; i < 3; i++) {
    for (int j; j < 4; j++) {
      std::cout << arrx[i][j] << " ";
    }
      std::cout << std::endl;
  }
}
*/

int main () {
  int MAX_MAHASISWA = 10;
  Mahasiswa DataMahasiswa[10];
  
  DataMahasiswa[0].NIM = 10001;
  DataMahasiswa[0].Name = "Rizkyana Nurfadillah";
  DataMahasiswa[1].NIM = 10002;
  DataMahasiswa[1].Name = "Mike Tyson";
  
  for (int i; i < 10; i++) {
    if(!DataMahasiswa[i].isEmpty())
      std::cout << "\nMahasiswa " << i+1 << "\nNIM: " << DataMahasiswa[i].NIM << "\nNama: "<< DataMahasiswa[i].Name << std::endl;
  }
  return 0;
}
