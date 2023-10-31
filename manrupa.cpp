#include <fstream>
#include <iostream>

using namespace std;
void writing() {
  ofstream fout;
  fout.open("file.txt", ios::out);
  char string[] = "Mero pyaro mamu";
  fout << string;
  fout.close();
}
void reading() {
  ifstream fin;
  fin.open("file.txt", ios::in);
  if (!fin) {
    cerr << "error in opeinig the file";
  } else {
    string word;
    while (!fin.eof()) {
      fin >> word;
      cout << word;
    }
  }
  fin.close();
}
void append(char data[]) {
  ofstream fout;
  fout.open("file.txt", ios::app);
  fout<<data;
  fout.close();
}
int main() {
  writing();
  reading();
  char string[] = "mero pyaro baba,babu,aama,mamamaiju";
  append(string);
  reading();
}
/*ifstream fin;
fin.open("data_in.txt");
char next;
while (!fin.eof()){
fin.get(next);
cout << next;
}*/
