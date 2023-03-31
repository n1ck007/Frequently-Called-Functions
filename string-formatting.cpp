string str;

// erase part of a string 
// .erase(starting index, length of substr to remove, )
str.erase();

// erase whitespace
string eraseWhiteSpace(string str) {
    for (size_t i = str.size() - 1; i >= 0; i--) {
        if (str[i] == ' ') {
	    str.erase(i,1);
	}
    }
    return str;
}

// make lowercase
for (size_t i = 0; i < str.size(); i++) {
		str.at(i) = tolower(str.at(i));
}

// erase whitespace and make lowercase
for (size_t i = str.size() - 1; i > 0; i--) {
	if (str.at(i) == ' ') {
		//str.erase(i, 1);
	}
	else {
		str.at(i) = tolower(str.at(i));
	}
}
