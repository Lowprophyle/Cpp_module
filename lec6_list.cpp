#define _CRT_SECURE_NO_WARNINGS
// Line above stops visual C++ complaining about strcpy being unsafe

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>

/* Define a structure which will contain
the details for a person */
struct Person
{
	char* pFirstName;
	char* pLastName;
	int iAge;
	Person* pNext;
};

// Pointer to first entry
Person* g_pFirst = NULL;

/*
Count of number of Person items in the array
Initially zero
No longer actually needed tho
*/
int g_iPersonCount = 0;

/* Display the stored Person details
from the array */
void DisplayStored()
{
	Person* pPerson = g_pFirst;
	while ( pPerson )
	{
		printf( "%s %s : Age %d\n",
			pPerson->pFirstName,
			pPerson->pLastName,
			pPerson->iAge );
		pPerson = pPerson->pNext;
	}
}

/* Store a new Person in the array */
void StorePerson( char* strFirstName,
	char* strLastName,int iAge )
{
	printf( "DEBUG:\n" );
	printf( "List of people before storing new one:\n" );
	DisplayStored();
	printf( "END DEBUG\n\n" );

	// Add to start of list to avoid special cases

	// Create new entry
	Person* pNew = (Person*)malloc( sizeof( Person ) );

	// Set the data members
	pNew->pFirstName = (char*)malloc( strlen( strFirstName ) + 1 );
	strcpy( pNew->pFirstName,strFirstName );
	pNew->pLastName = (char*)malloc( strlen( strLastName ) + 1 );
	strcpy( pNew->pLastName,strLastName );
	pNew->iAge = iAge;

	// Link it into list
	pNew->pNext = g_pFirst;
	g_pFirst = pNew;

	g_iPersonCount++; /* Increment the count - no longer needed though */
}

/* Free any memory we allocated.
Nothing to do at the moment */
void FreeMemory()
{
	Person* pPerson = g_pFirst;
	while ( g_pFirst )
	{
		pPerson = g_pFirst;
		g_pFirst = g_pFirst->pNext;
		free( pPerson->pFirstName );
		free( pPerson->pLastName );
		free( pPerson );
	}
}

/* Ask the user for input */
void GetInput()
{
	/* The strings to receive the input must be big enough for the biggest input the user will supply. */
	char strFirstName[1024];
	char strLastName[1024];
	int iAge = 0;
	char cConfirm;

	printf( "Please supply the customer details:\n" );

	printf( "First/personal Name (or 'exit'): " );
	/* Ask for a string to be put into the array strFirstName */
	scanf( "%1023s",strFirstName );
	if ( strcmp( strFirstName,"exit" ) == 0 )
	{
		/* If the string passed in is the same as the string "exit" then end, freeing the memory first */
		FreeMemory();
		exit( 0 ); /* End program */
	}
	printf( "First/personal name: %s\n",strFirstName );

	printf( "\nLast/family Name: " );
	scanf( "%1023s",strLastName );
	strLastName[1023] = 0; /* Ensure terminated */
	printf( "Last/family name: %s\n",strLastName );

	printf( "\nAge: " );
	scanf( "%d",&iAge );
	printf( "Age: %d\n",iAge );

	printf( "You entered:\n" );
	printf( "First/personal name : %s\n",strFirstName );
	printf( "Last/family name    : %s\n",strLastName );
	printf( "Age                 : %d\n",iAge );
	printf( "Is this correct (Y/N):\n" );
	while ( 1 ) /* Loop forever - or until a break is met! */
	{
		scanf( "%c",&cConfirm );
		if ( tolower( cConfirm ) == 'y' )
		{ /* We got a 'y' so store the person and end the loop */
			StorePerson( strFirstName,strLastName,iAge );
			break;
		}
		else if ( tolower( cConfirm ) == 'n' )
		{ /* We got a 'n' so end the loop without storing the person */
			break; /* from while loop */
		}
	}
}


int main( int argc,char* argv[] )
{
	while ( 1 ) /* Loop forever */
	{		   /* note that there is an 'exit(0)'
			   above this which ends the program
			   when requested */
		GetInput();

		printf( "\n\n\nList of people so far:\n" );
		DisplayStored();
		printf( "\n" );
	}

	/* Should never get here due to the infinite loop */
	return 0;
}
