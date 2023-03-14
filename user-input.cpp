bool getYesNo() {
	string str;
	getline(cin, str);

	// must test for a zero size first or else the for loops be out_of_range
	if (str.size() == 0) {
		cout << "Input cannot be understood. Please try again: ";
		return getYesNo();
	}

	// erase whitespace or make lowercase
	for (size_t i = str.size() - 1; i > 0; i--) {
		if (str.at(i) == ' ') {
			str.erase(i, 1);
		}
		else {
			str.at(i) = tolower(str.at(i));
		}
	}


	if ( str == "y" || str == "yes" ) {
		return true;
	}
	else if ( str == "n" || str == "no" ) {
		return false;
	}
	else {
		cout << "Input cannot be understood. Please try again: ";
		return getYesNo();
	}
}
