#include<string>

string str;

// .erase(starting index, length of substr to remove, )
str.erase();
  
// make lowercase
for (size_t i = 0; i < str.size(); i++) {
		str.at(i) = tolower(str.at(i));
}
