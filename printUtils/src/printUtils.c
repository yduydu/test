/**
 * @project: test
 * 
 * @author ydu
 * 
 * @date 19/09/2017
 * 
 * @file printUtils.c
 *
 * 19-09-2017 - creation
 */

#include <stdio.h>
 
#include "printUtils.h"


LOCAL_FCT void printTopLine(int row);

/**
 * print a sudoku board 
 * temp version with only 0 in it
 */
void printBasicBoard(void) {
	unsigned int row = 0;
	unsigned int col = 0;
	
	for( ; row < NB_ROWS; row++) {
		printTopLine(row);
		for(col = 0 ; col < NB_COLS; col++) {
			printf("| ");
			printf("0"); /* todo to change later with actual value */
			printf(" ");
		}
		printf("|\n");
	}
	printTopLine(1);
}

/*------------ LOCAL functions */

/**
 * draw a first line
 */
void printTopLine(int row) {
	if(row == 0)
		printf(" ___ ___ ___ ___ ___ ___ ___ ___ ___ \n"); 
	else
		printf("|___|___|___|___|___|___|___|___|___|\n"); 
}
