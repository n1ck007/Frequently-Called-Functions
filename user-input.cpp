// pause the console until the user pushes a key
system("pause");

// get the user's response to a yes or no question
bool getYesNo() {
	
	// get the users response to a yes or no question
	// the question must be asked before this function is called
	// also be sure to clear the istream by using cin.ignore() just before you call 
	// this function. since getline() is use there may still be a '\n' left over from somthing else

	string str;
	getline(cin, str);


	// without this check an out_of_range exception will be thrown as a result of the string indexing
	if (str.size() != 0) {

		// erase whitespace or make lowercase
		for (size_t i = str.size() - 1; i > 0; i--) {
			if (str.at(i) == ' ') {
				//str.erase(i, 1);
			}
			else {
				str.at(i) = tolower(str.at(i));
			}
		}

		// check response
		if (str == "y" || str == "yes" || str == "t" || str == "true" || str == "1") {
			return true;
		}
		else if (str == "n" || str == "no" || str == "f" || str == "false" || str == "0") {
			return false;
		}
	}

	cout << "Input cannot be understood. Please try again: ";
	return getYesNo();
}



