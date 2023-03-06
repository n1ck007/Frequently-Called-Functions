#include<iostream>
#include<fstream>
#include<string>

int main() {
  fstream file;
  string filename;
  string line;
  
  cout << "Enter the file name: ";
	getline(cin, filename);
  
  
  // read from file
  file.open(filename, ios::in);
  if (file.is_open()) {
		while (getline(file, line)) {
			cout << line << endl;
    }
  }
  
  
  return 0;
}
  
