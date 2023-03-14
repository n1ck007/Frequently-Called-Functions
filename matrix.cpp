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
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}



// Static Matrix
int mat[3][4] = {
  { 0, 1,  2,  3 }, 
  { 4, 5,  6,  7 }, 
  { 8, 9, 10, 11 }
};


// Dynamic Matrix 
// https://stackoverflow.com/questions/1403150/how-do-you-dynamically-allocate-a-matrix

