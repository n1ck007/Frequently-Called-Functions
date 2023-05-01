// pause the console until the user pushes a key
system("pause");

// get the user's response to a yes or no question
bool getYesNo() {
	// the question must be asked before this function is called
	
	std::string str;
	getline(std::cin, str);

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
		str.at(0) = tolower(str.at(0)); // loop stop if !(i > 0)

		// check response
		if (str == "y" || str == "yes" || str == "t" || str == "true" || str == "1") {
			return true;
		}
		else if (str == "n" || str == "no" || str == "f" || str == "false" || str == "0") {
			return false;
		}
	}

	std::cout << "Input cannot be understood, please try again: ";
	return getYesNo();
}


// print a list of options
void printMenu() {
	std::cout << "1.  option1" << std::endl;
	std::cout << "2.  option2" << std::endl;
	std::cout << "3.  option3" << std::endl;
	std::cout << "4.  option4" << std::endl;
	std::cout << "5.  option5" << std::endl;
	std::cout << "6.  option6" << std::endl;
	std::cout << "7.  option7" << std::endl;
	std::cout << "8.  option8" << std::endl;
	std::cout << "9.  option9" << std::endl;
	std::cout << "10. option10" << std::endl;
	std::cout << "11. option11" << std::endl;
	std::cout << "q.  quit" << std::endl;
	std::cout << std::endl;
}


// execute the menu until user quit's
void runMenu() {
	std::string select;

	do {
		printMenu();
		std::cout << "Select an option: ";

		getline(std::cin, select);

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
				std::cout << "call option1()" << std::endl;
				std::cout << std::endl;
			}
			else if (select == "2" || select == "op2") {
				std::cout << "call option2()" << std::endl;
				std::cout << std::endl;
			}
			else if (select == "3" || select == "op3") {
				std::cout << "call option3()" << std::endl;
				std::cout << std::endl;
			}
			else if (select == "q" || select == "quit") {
				std::cout << "Are you sure you want to quit (Y/N)? " << std::endl;
				bool ans = getYesNo();
				if (ans) {
					return;
				}
				// if you don't change select, it will remain as 'q'.
				select = "";
				std::cout << std::endl;
			}
			else {
				std::cout << "Input cannot be understood. Please try again.";
				std::cout << std::endl;
			}
		}// != 0 if

	} while (select != "q" && select != "quit");
	return;
}
