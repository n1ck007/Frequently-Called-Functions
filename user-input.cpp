// processes the user's response to a yes or no question
bool getYesNo() {
	string str;
	getline(cin, str);

	// if nothing is entered or the input more than 3 characters, or the first char is a space, prompt again
	while (str.size() < 1 || str.size() > 3 || str.at(0) == ' ') {
		cout << "Input cannot be understood. Please try again: ";
		getline(cin, str);

		while (!(str.size() < 1 || str.size() > 3 || str.at(0) == ' ')) {
			
			// erase whitespace
			for (size_t i = str.size() - 1; i > 0; i--) {
				if (str.at(i) == ' ') {
					str.erase(i, 1);
				}
			}
			// is they answered yes
			if (str.at(0) == 'Y' || str.at(0) == 'y' || str.at(0) == '1' ) {
				return true;
			}
			// if they answered no
			else if (str.at(0) == 'N' || str.at(0) == 'n' || str.at(0) == '0') {
				return false;
			}
			// if unclear
			else {
				cout << "Input cannot be understood. Please try again: ";
				getline(cin, str);
			}
		}
	}
}
