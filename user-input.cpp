bool getYesNo() {
	string str;
	getline(cin, str);

	if (str.size() != 0) {
		// erase whitespace or make lowercase
		for (size_t i = str.size() - 1; i > 0; i--) {
			if (str.at(i) == ' ') {
				str.erase(i, 1);
			}
			else {
				str.at(i) = tolower(str.at(i));
			}
		}

		if (str == "y" || str == "yes" || "t" || "true") {
			return true;
		}
		else if (str == "n" || str == "no" || "f" || "false") {
			return false;
		}
	}

	cout << "Input cannot be understood. Please try again: ";
	return getYesNo();
}
