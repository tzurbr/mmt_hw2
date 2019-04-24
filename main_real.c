
#include "user.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"



int main_real() {
	char Line[MAX_LINE_SIZE];
	char* delimiters = " \t\n";
	char* action;
	char* Name1;
	char* Name2;
	while (fgets(Line, MAX_LINE_SIZE, stdin)) {
		//printf("> %s", Line);
		action = strtok(Line, delimiters);
		Name1 = strtok(NULL, delimiters);
		Name2 = strtok(NULL, delimiters);
		/*if (Name1 == NULL || pszYear == NULL)
		{
			fprintf(stderr, "Error: Not enough parameters\n");
		}*/
		//year = atoi(pszYear);
		/*if (year == 0)
		{
			fprintf(stderr, "Error: Invalid year\n");
		}*/
	}
	return 0;
}