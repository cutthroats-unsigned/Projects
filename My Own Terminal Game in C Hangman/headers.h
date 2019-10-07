/*
Created by David Barko
All the structures and prototypes are here
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<ctype.h>

struct ll{
        char data;
	char underscore;
	int spce;
	int ftl;
	struct ll *next;
};

struct bank{
        char word[1000];
        int strike;
        char letter[27];
	char used[27];
};

int orginlist(struct ll *list, int num);
void putinlist(struct ll *list, char word[41]); 
void printll(struct ll *list);
struct ll *init();

void rword(void);
char wordbank(char used[27], char letter[27]);
void drawboard(struct ll *list,int num);



