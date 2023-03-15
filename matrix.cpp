// Dynamic Matrix using std::vector
vector<vector<int>> mat = {
        { 1,   2, 3,   4, 5 },
        { 16, 17, 18, 19, 6 },
        { 15, 24, 25, 20, 7 },
        { 14, 23, 22, 21, 8 },
        { 13, 12, 11, 10, 9 }
    };

// Populate matrix
for (int i = 0; i < matSize; i++) {
        vector<int> temp;
        for (int j = 0; i < matSize; j++) {
                temp.push_back(i+j);
        }
        mat.push_back(temp);
}


// print matrix
void printMat(vector<vector<int>> mat) {
	for (size_t i = 0; i < mat.size(); i++) {
		for (size_t j = 0; j < mat.size(); j++) {
			// if one digit, put a space after
			if (mat[i][j] < 10) {
				cout << mat[i][j] << " ";
			}
			else {
				cout << mat[i][j];
			}
		}
		cout << endl;
	}
}

// print matrix with color
void colorPrintMat(vector<vector<int>> mat, bool useColor) {
	for (int i = 0; i < mat.size(); i++) {
		for (int j = 0; j < mat.size(); j++) {
			if (useColor) {
				if (mat[i][j] % 7 == 0 && mat[i][j] != 0) {
					// 0 is coded to black so there would be no color. Use 10 and 0 for grey instead.
					cout << "\033[100m" << endl;
				}
				else {
					// set color code. Use mod 7 because the color code shouldn't exceed 6.
					cout << "\033[4" << to_string(mat[i][j] % 7) << "m";
				}
			}

			// output matrix contents
			// if one digit, put a space after
			if (mat[i][j] < 10) {
				cout << mat[i][j] << " ";
			}
			else {
				cout << mat[i][j];
			}

		}
		cout << "\033[0m" << endl;
	}
	cout << endl;
}


// is a coordinate within range
bool isValid(vector<vector<int>> mat, int x, int y) {
	return 0 <= x && x < mat.size()	// if x is within range
		&& 0 <= y && y < mat.size();// if y is within range
}




// Static Matrix
int mat[3][4] = {
  { 0, 1,  2,  3 }, 
  { 4, 5,  6,  7 }, 
  { 8, 9, 10, 11 }
};


// Dynamic Matrix 
// https://stackoverflow.com/questions/1403150/how-do-you-dynamically-allocate-a-matrix

