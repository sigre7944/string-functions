#include "string.h"

//Function that receives a string as a parameter and returns the length of that string
int my_strlen(char *s)
{
	int count = 0;
	while (s[count] != '\0')
	{
		count ++;
	}
	return count;	
}

//Converts all small characters in a string to upper case characters and returns the number of changed characters
int str2upper(char *s)
{
	int i=0, count = 0;
	while (*(s+i) != '\0')
	{
		if ((*(s+i) >= 'a') && (*(s+i) <= 'z'))
		{
			*(s+i) = *(s+i) -'a'+'A';
			count++;
		}
	i++;
	}
	return count;
}

//Converts all capital characters to lower case characters in string. Function returns the number of changed characters
int str2lower_(char *s)
{
	int i = 0, count = 0;
	while (*(s+i) != '\0')
	{
		if ((*(s+i) >= 'A') && (*(s+i) <= 'Z'))
		{
			*(s+i) = *(s+i) -'A'+'a';
			count++;
		}
		i ++;
	}
	
	return count;
}

//removes all occurrences of numbers, Function returns new length of the string
int str_strip_numbers(char *s)
{
	int i = 0, count = 0;
	while (*(s+i) != '\0')
	{
		if ((*(s+i) < 48) || (*(s+i) > 57))
		{
			count++;
		}
	i++;
	}
	
	return count;

}

//Function that will copy the content of string s to string d
void mystrcpy(char *s,char *d)
{
	int i = 0;
	while (*(s+i) != '\0')
	{
		*(d+i) = *(s+i);
		i++;
	}
	d[i] = '\0';
}

//Function that will compare two strings together. Function returns place (n) of first different character
//-n if s is ordered before in alphabet that d
//0 if strings are equal
//+n if d is ordered before s
int mystrcmp (char *s, char *d)
{
	int count = 0;
	int result;
	while(s[count] != '\0' && s[count] == d[count])
	{
		count ++;
	}
	if (s[count] < d[count])
	{
		result = -count;
		
	}
	else if (s[count] > d[count])
	{
		result = count;
	}
	
	else
	{
		result = 0;
	}
	
	
	return result;
}

//Creates a duplicate of a string s and returns a pointer to newly created string
char * strdupl(char *s)
{
	char *d;
	d = (char *) malloc(sizeof(*s));
	int i = 0;
	while (*(s+i) != '\0')
	{
		*(d+i) = *(s+i);
		i++;
	}
	*(d+i)='\0';
	
	return d;
}
