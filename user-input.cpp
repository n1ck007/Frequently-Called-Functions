// pause the console until the user pushes a key
system("pause");

// get the user's response to a yes or no question
bool getYesNo() {
	// the question must be asked before this function is called
	
	string str;
	getline(cin, str);

	// without this check an out_of_range exception will be thrown as a result of the string indexing
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

		// check response
		if (str == "y" || str == "yes" || str == "t" || str == "true" || str == "1") {
			return true;
		}
		else if (str == "n" || str == "no" || str == "f" || str == "false" || str == "0") {
			return false;
		}
	}

	cout << "Input cannot be understood, please try again: ";
	return getYesNo();
}


// print a list of options
void printMenu() {
	cout << "1.  option1" << endl;
	cout << "2.  option2" << endl;
	cout << "3.  option3" << endl;
	cout << "4.  option4" << endl;
	cout << "5.  option5" << endl;
	cout << "6.  option6" << endl;
	cout << "7.  option7" << endl;
	cout << "8.  option8" << endl;
	cout << "9.  option9" << endl;
	cout << "10. option10" << endl;
	cout << "11. option11" << endl;
	cout << "q.  quit" << endl;
	cout << endl;
}


// execute the menu until user quit's
void runMenu() {
	string select;

	do {
		printMenu();
		cout << "Select an option: ";

		getline(cin, select);

		// proccess input
		if (select.size() != 0) {
			
			// erase whitespace and make lowercase
			for (size_t i = select.size() - 1; i > 0; i--) {
				if (select.at(i) == ' ') {
					select.erase(i, 1);
				}
				else {
					select.at(i) = tolower(select.at(i));
				}
			}// erase if

			// option branching
			if (select == "1" || select == "op1") {
				cout << "call option1()" << endl;
				cout << endl;
			}
			else if (select == "2" || select == "op2") {
				cout << "call option2()" << endl;
				cout << endl;
			}
			else if (select == "3" || select == "op3") {
				cout << "call option3()" << endl;
				cout << endl;
			}
			else if (select == "q" || select == "quit") {
				cout << "Are you sure you want to quit (Y/N)? " << endl;
				bool ans = getYesNo();
				if (ans) {
					return;
				}
				// if you don't change select, it will remain as 'q'.
				select = "";
				cout << endl;
			}
			else {
				cout << "Input cannot be understood. Please try again.";
				cout << endl;
			}
		}// != 0 if

	} while (select != "q" && select != "quit");
	return;
}
