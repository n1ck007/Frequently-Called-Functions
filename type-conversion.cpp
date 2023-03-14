// Convert char to string 
// using the string constructor String(length, char)
char myChar = 'a';
string myStr(1, myChar);

// Convert String to int
// using stoi(string, starting position, number base) 
string myStr = "743";
int myInt = stoi(myStr, 0, 10);

// convert size_t to int
size_t life = 42;
static_cast<int>(life);
