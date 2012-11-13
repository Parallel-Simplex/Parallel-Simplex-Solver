/*
 * Tableau.h
 *
 *  Created on: Nov 12, 2012
 *      Author: Meadowlark
 */

#ifndef TABLEAU_H_
#define TABLEAU_H_

class Tableau {
public:
	Tableau(double *starting_matrix, int *starting_basis, int numVars);
	virtual ~Tableau();

	int current_objective_function_value(double *matrix, int numVars);

private:
	int numVars;//this is to know the number of columns in the matrix (number of variables + 1)
	double *matrix;// a pointer to the starting cell
	int *current_basis;// a pointer to array of ints
	int *candidate_cols;// a pointer to array of ints

	int* get_candidate_cols(int *current_basis, int numVars);
};

#endif /* TABLEAU_H_ */
