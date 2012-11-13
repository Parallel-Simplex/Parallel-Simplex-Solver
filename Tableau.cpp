/*
 * Tableau.cpp
 *
 *  Created on: Nov 12, 2012
 *      Author: Meadowlark
 */
#include <stdio.h>
#include <stdlib.h>
#include "Tableau.h"

Tableau::Tableau(double *starting_matrix, int *starting_basis, int numVars) {
	this.numVars=numVars;
	matrix=starting_matrix;
	current_basis=starting_basis;
	candidate_cols=get_candidate_cols(starting_basis, numVars);
}


Tableau::~Tableau() {
	// TODO Auto-generated destructor stub
}

int Tableau::current_objective_function_value(double *matrix, int numVars){

	return *matrix+numVars;
}

// this only returns the column not in the current basis. It doesn't evaluate them for selection.
// input: pointer to current basis, number of vars
// output: pointer to array containing candidate column numbers

int* Tableau::get_candidate_cols(int *current_basis, int numVars){

	// how many variables aren't already within the current basis?
	int *candidates = (int*) malloc(numVars*sizeof(int)-sizeof(*current_basis));

	int j=0;
	int k=0;

	// check if a col is in current_basis or not.
	for(int i=0;i<numVars; i++){
		if((*current_basis+j)!=i){
			*candidates+k=i;
			k++;
		}else{
			j++;
		}
	}
	return candidates;

}
