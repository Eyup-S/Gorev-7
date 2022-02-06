#include <string>
#include <vector>
#include <stdlib.h>
#include <iostream>
int main(int cons, int rownumber, char* matr[]){

	/*int cons = 3;
	int rownumber = 2;
	char* matr[4]= {"5","6","7","8"};*/

	int element_number= sizeof(matr)/ sizeof(matr[0]);
	std::vector<std::vector<int> > matrix(rownumber, std::vector<int>(element_number));
	int index = 0;
	for( int i=0;i < rownumber; i++ ){
	
		for (int j=0; j < element_number/rownumber; j++ ){
			matrix[i][j]= atof(matr[index]);
			index +=1;
	}
}
	for(int i=0; i < element_number/rownumber; i++){
		matrix[0][i]= matrix[0][i] * cons;
		std::cout << matrix[0][i] << " ";
	}
	
	return 0;
}
