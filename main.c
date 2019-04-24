

#include "user.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"

typedef struct _FRIEND {
	char* friendName;
	struct _FRIEND* nextFriend;
} FRIEND;

typedef struct _USER {
	char* name;
	int friendsNum;
	PFRIEND friendsList;
} USER;

PUSER createUser(char* input)
{
	PUSER newUser = (PUSER)malloc(sizeof(USER));
	if (newUser == NULL)
	{
		return NULL;
	}
	newUser->name = input;
	newUser->friendsNum = 0;
	newUser->friendsList = NULL;

	return newUser;
}



int main() {
	char Line[MAX_LINE_SIZE];
	char* delimiters = " \t\n";
	char* action = NULL;
	char* Name1 = NULL;
	char* Name2 = NULL;
	while (fgets(Line, MAX_LINE_SIZE, stdin)) {
		printf("> %s", Line);
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
		PUSER user = malloc(sizeof(USER));
		if (user == NULL) return 1;
		user = createUser(action);
		printf(" %s", user->name);
		free(user);
	}


}


/*
int main()
{
	char Name[MAX_LINE_SIZE] = { 0 };
	int i = 256;
	char c = 0;
		while (getchar()!=EOF)
		{
			fscanf_s(stdin, " %c", &c);
			Name[i] = c;
			i++;
		}

	char* name = malloc(sizeof(char)*(i + 1));
	if (name == NULL) return 1;
	fscanf_s(stdin, " %s", name);
	//strcpy_s(name, i+1, Name);
	PUSER user = malloc(sizeof(USER));
	if (user == NULL) return 1;
	user = createUser(name);
	printf(" %s", user->name);

	return 0;
}
*/