#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream file("berkas.txt");
    file << "Belajar PP sore bikin ngantuk" << endl;
    file << "Hai saya kelas A" << endl;
    file.close();

    ifstream bacaFile("berkas.txt");
    string isi;

    while(getline(bacaFile, isi)){
        cout << isi << endl;
    }

    bacaFile.close();

    ifstream bacaFile("berkas.txt");
    char isi;

    while(bacaFile.get(isi)){
        cout << isi << endl;
    }

    bacaFile.close();

    return 0;
}