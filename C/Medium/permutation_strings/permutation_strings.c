//In progress...

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
    
    char temp[11];
    
    for(int i = 0; i < n-1; i++){
        if(strcmp(s[i], s[i+1]) == 0) continue;
        if(strcmp(s[i], s[i+1]) > 0) continue;
        if(strcmp(s[i], s[i+1]) < 0){
            char temp[11];  
            strcpy(temp, s[i+1]);
            strcpy(s[i+1], s[i]);
            strcpy(s[i], temp);
            return 1;
        }    
    }

    return 0;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}