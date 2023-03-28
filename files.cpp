#include<iostream>
#include<fstream>
#include<string>

int main() {
	fstream file;
  	string fileName;
  	string line;
  
  	cout << "Enter the file name: ";
	getline(cin, fileName);
  
  
  	// read from file
  	file.open(fileName, ios::in);
  	if (file.is_open()) {
		// print every line from the file
		while (getline(file, line)) {
		cout << line << endl;
    		}
  	}
	file.close();
  return 0;
}
  
