#include <stdio.h>
#include <stdlib.h>
//Function that receives a string as a parameter and returns the length of that string
int my_strlen(char *s);

//Converts all small characters in a string to upper case characters and returns the number of changed characters
int str2upper(char *s);

//Converts all capital characters to lower case characters in string. Function returns the number of changed characters
int str2lower_(char *s);

//removes all occurrences of numbers, Function returns new length of the string
int str_strip_numbers(char *s);

//Function that will copy the content of string s to string d
void mystrcpy(char *s,char *d);

int mystrcmp (char *s, char *d); 
//Function that will compare two strings together. Function returns place (n) of first different character
//-n if s is ordered before in alphabet that d
//0 if strings are equal
//+n if d is ordered before sint mystrcmp (char *s, char *d);

//Creates a duplicate of a string s and returns a pointer to newly created string
char * strdupl(char *s);

