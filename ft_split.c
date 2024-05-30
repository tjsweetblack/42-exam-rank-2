#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int num_Sub_Str(char const *s, char c)
{
	int i;
	int token;

	i = 0;
	token = 0;
	while(s[i] == c)
		i++;
	while(s[i])
	{
		if (s[i] == c)
			i++;
		if(!(s[i] == c))
		{
			token += 1;
			while(!(s[i] == c))
				i++;
		}
		i++;
	}
	return(token);
}


char **ft_split(char const *s, char c)
{
	int i;
	int j;
	int l;
	int m;
	int sizearr = (num_Sub_Str(s, c) + 1);
	char **array;
	
	array = (char **) malloc (sizeof(char *) * sizearr);
	if (!array)
	{
		return(NULL);
	}
	i = 0;
	j = 0;
	while(s[i] == c)
		i++;
	while(s[i])
	{	
		if (s[i] == c)
			i++;
		if(!(s[i] == c))
		{
			l = i;
			while(!(s[i] == c))
				i++;
			array[j] = (char *) malloc (sizeof(char) * ((i - l) + 1));
			if(!(array[j]))
				return(NULL);
			m = 0;
			while(l != i)
			{
				array[j][m] = s[l];
				m++;
				l++;
			}
			j++;
		}
		i++;
	}
	array[j] = NULL;
	return(array);
}
