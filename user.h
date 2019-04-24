
#ifndef _USER_H_
#define _USER_H_
#define _CTR_SECURE_NO_WARNINGS 
#include <string.h>
#include "defs.h"
#define MAX_LINE_SIZE 256


typedef struct _FRIEND* PFRIEND;
typedef struct _USER* PUSER;

PUSER createUser(char*);



#endif