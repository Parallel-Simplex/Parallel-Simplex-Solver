/*
 * SimplexSolver.h
 *
 *  Created on: Nov 12, 2012
 *      Author: Meadowlark
 */

#ifndef SIMPLEXSOLVER_H_
#define SIMPLEXSOLVER_H_

class SimplexSolver {
public:
	SimplexSolver(Tableau problem);
	virtual ~SimplexSolver();

private:

	int* getPossibleIncoming();
	int* getCurrentBasis();
	int selectIncoming();
	int selectOutgoing();
	void pivot();
	bool checkCompletion();

};

#endif /* SIMPLEXSOLVER_H_ */
