#include <string>
#include <vector>
#include <stdlib.h>
#include <iostream>
int main(int argc, char* argv[]){

	double rownumber= atof(argv[2]);
	double cons = atof(argv[1]);
	int element_number= argc - 3;
	std::vector<std::vector<int> > matrix(rownumber, std::vector<int>(element_number));
	int index = 3;

	for( int i=0;i < rownumber; i++ ){
	
		for (int j=0; j < element_number/rownumber; j++ ){
			matrix[i][j]= atof(argv[index]);
			index +=1;
	}
}

	for(int i=0; i < element_number/rownumber; i++){
		matrix[0][i]= matrix[0][i] * cons;		
	}
	
	
	for( int i=0;i < rownumber; i++ ){

		for (int j=0; j < element_number/rownumber; j++ ){
	 		std::cout << matrix[i][j] << " ";
}
	std::cout << std::endl;
}

	return 0;
}
