

/*int main(){
    char str[18] = "hello";           //calling the hello in main and print
    printf("%s\n",str);}*/    


int func(){                           // calling with the help of function
    char str[18] = "hello";
    printf("%s\n",str);
}
int main(){
	char str[10] = "Ayush";
    func();
    func();
    return 0;
}

    /*char str[20] = {'a','y','u','s','h','\0'};    // it is not necessary that u have to put the null pointer 
    printf("%s\n", str);
    int length;
    length = strlen(str);
    printf("the length of the string is %d",length);
    return 0;*/
   
    /*the name ischar str[20];
 printf("enter the string:");
    scanf("%s",str);
    printf("the string is %s ",str);
    return 0;*/

/*char str[max];
fgets(str,max,stdin);
printf("the sring is :\n");   // using the fgets to take the string and puts to print the read string
puts(str);
return 0;*/


/*char str[50];
scanf("%[^\n]s",str);   // using the scanset in scanf and printing the read string 
printf("%s",str);
return 0;*/

// #include<stdio.h> 
// #include<string.h> 
// #include<stdlib.h> 
 
// /*Swaps strings by swapping data*/
// void swap2(char *str1, char *str2) 
// { 
// char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char)); 
// strcpy(temp, str1); 
// strcpy(str1, str2); 
// strcpy(str2, temp); 
// free(temp); 
// } 
 
// int main() 
// { 
// char str1[10] = "geeks"; 
// char str2[10] = "forgeeks"; 
// swap2(str1, str2);              //This method cannot be applied if strings are stored using character arrays. 
// printf("str1 is %s, str2 is %s", str1, str2); 
// getchar(); 
// return 0; 
// } 



// #include<stdio.h> 
// #include<string.h> 
// #include<stdlib.h> 
 
// /* Swaps strings by swapping data*/
// void swap2(char *str1, char *str2) 
// { 
// char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char)); 
// strcpy(temp, str1); 
// strcpy(str1, str2); 
// strcpy(str2, temp); 
// free(temp); 
// } 
 
// int main()                        //This method cannot be applied for strings stored in read-only block of memory
// { 
// char str1[10] = "geeks"; 
// char str2[10] = "forgeeks";  
// swap2(str1, str2); 
// printf("str1 is %s, str2 is %s", str1, str2); 
// getchar(); 
// return 0; 
// }

// C program to demonstrate the use of different functions
// of string.h library
/*#include <stdio.h>
#include <string.h>

// defining the common size of the string arrays
#define size 50

int main()
{
	char destString[size] = "Geeksfor";
	char sourceString[size] = "Geeks";
	char tempDestString[size];

	printf("Length of Destination String: %d\n",
		strlen(destString));

	// copying sourceString to tempDestString using strcpy()
	strcpy(tempDestString, sourceString);
	printf("tempDestString after strcpy(): %s\n",
		tempDestString);

	// concatenating source to destination using strcat()
	strcat(destString, sourceString);
	printf("destString after Concatenation: %s\n",
		destString);

	// comparison using strcmp()
	printf("Comparing destString with sourceString: %d\n",
		strcmp(destString, sourceString));

	printf("Comparing first 5 characters: %d\n",
		strncmp(destString, sourceString, 5));

	// searching substring using strstr()
	printf("Searching sourceString in destString: %s\n",
		strstr(destString, sourceString));

	return 0;
}*/













