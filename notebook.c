#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "addresses.h"
void welcome();
char* getUser();
char* getPass();
int validate(char*, char*);

int main(){
	welcome();
	char* username = getUser();
	char* password = getPass();
	if(validate(username, password)){
		printf("\nWelcome Back %s!\n\n", username);
		printf("%s", getAddresses());
	}
	else{
		printf("\nInvalid Login Credentials\n");
		printf("Good luck trying to remember!\n");
	}
	return 0;
}

void welcome(){
	printf("Welcome to the personal address book!\n");
}

char* getUser(){
	char* username = (char *) malloc( 20 );
	printf("Please enter your username: ");
	scanf("%s", username);
	return username;
}

char* getPass(){
	char* password = (char *) malloc( 20 );
	printf("Please enter your password: ");
	scanf("%s", password);
	return password;
}

int validate(char* username, char* password){
	if(!strcmp(username, "Jimbo") && !strcmp(password, "Password1234")){
		return 1;
	}
	return 0;
}
