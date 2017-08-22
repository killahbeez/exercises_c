#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline_1(char line[], int max);
int strindex_1(char source[], char searchfor[]);
char pattern[]="ould"; /* pattern to search for */

/* find all lines matching pattern */
int main()
{
	char line[MAXLINE];
	int found = 0;
	int pos;
	while (getline_1(line, MAXLINE) > 0)
		if ((pos = strindex_1(line, pattern)) >= 0) {
			printf("%s :: Found at position: %d\n", line, pos);
			found++;
		}
	printf("Found: %d\n",found);
	return found;
}

/* getline: get line into s, return length */
int getline_1(char s[], int lim)
{
	int c, i;
	i = 0;
	while (--lim > 0 && (c=getchar()) != EOF && c != '\n') 
		s[i++] = c;
	/*if (c == '\n') 
		s[i++] = c;*/
	s[i] = '\0';
	return i;
}

/* strindex: return index of t in s, -1 if none */
int strindex_1(char s[], char t[])
{
	int i, j, k;
	for (i = 0; s[i] != '\0'; i++) {
		for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++);

		if (k > 0 && t[k] == '\0')
			return i;
		
	}
	return -1;
}