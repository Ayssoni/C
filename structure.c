//#include<stdio.h>
/*struct student{
char name[20];
char father_name[20];
int roll_no;

};
struct s{

};

int main(){
    struct student student1 = {"Ayush","Ramnath",12345};
    struct student student2 = {"Ash","Ram",99};
//  printf("%s  %s   %d",student1.name,student1.father_name,student1.roll_no);
   student2 = student1;
   printf("%s  %s   %d",student1.name,student1.father_name,student1.roll_no);
   return 0;
}*/
/*struct car{
    int prize;
    int number;
    char name[30];
};
int main(){
    struct car s0 = {1200000,2020,"BMW"};//assigning the structure to some variable
    s0.prize = 20000000;    //to update the struct
    s0.number = 2021;
    strcpy(s0.name,"Porsche");
    printf("%d  %d   %s",s0.prize,s0.number,s0.name);
    return 0;
}*/

        
// C program to illustrate the use of structures 
/*#include <stdio.h> 

// declaring structure with name str1 
struct str1 { 
	int i; 
	char c; 
	float f; 
	char s[30]; 
}; 

// declaring structure with name str2 
struct str2 { 
	int ii; 
	char cc; 
	float ff; 
} var; // variable declaration with structure template 

// Driver code 
int main() 
{ 
	// variable declaration after structure template 
	// initialization with initializer list and designated 
	// initializer list 
	struct str1 var1 = { 1, 'A', 1.00, "GeeksforGeeks" }, 
				var2; 
	struct str2 var3 = { .ff = 5.00, .ii = 5, .cc = 'a' }; 

	// copying structure using assignment operator 
	var2 = var1; 

	printf("Struct 1:\n\ti = %d, c = %c, f = %f, s = %s\n", 
		var1.i, var1.c, var1.f, var1.s); 
	printf("Struct 2:\n\ti = %d, c = %c, f = %f, s = %s\n", 
		var2.i, var2.c, var2.f, var2.s); 
	printf("Struct 3\n\ti = %d, c = %c, f = %f\n", var3.ii, 
		var3.cc, var3.ff); 

	return 0; 
}*/


/*#include<stdio.h>
struct triangle{
	int height;
	int base;
};
int main(){
struct triangle t1 = {12, 13};
struct triangle *str = &t1;
printf("%d %d", str->height,str->base);
}*/

/*#include <stdio.h> 
  
struct base { 
    struct child { 
        int i; 
    } child; 
}; 
  
int main() 
{ 
    struct base s_name = { 12 }; 
      
      // accessing nested structure member using dot operator 
    printf("Nested Structure Variable: %d", s_name.child.i); 
    return 0; 
}*/
/*#include<stdio.h>
#include<string.h>
typedef struct employee{
	char name[50];
	char branch[50];        //use of type def in structure to increase the readability of the code
    int id;
}str;
int main(){
	str em= {"Raman","Employee",1006 };
    printf("the name of the Employee is : %s\n",em.name);
	printf("the branch of the Employee is : %s\n",em.branch);
	printf("the id of the Employee is : %d\n`",em.id);
	return 0;

	}*/
	 
	/* #include<stdio.h>
	 typedef int *ptr;
	 int main(){
		ptr var;              //  type def with pointer
		*var = 12;
		printf("the value is :  %d", *var);
		return 0;
	 }*/

/*#include<stdio.h>
#define in 3
int main(){
for(int i=0;i<in;i++){
	printf("The define number is: %d\n",i);
}
return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// A structure of type student
struct student {
    int stud_id;
    int name_len;
 
    // This is used to store size of flexible
    // character array stud_name[]
    int struct_size;
 
    // Flexible Array Member(FAM)
    // variable length array must be last
    // member of structure
    char stud_name[];
};
 
// Memory allocation and initialisation of structure
struct student* createStudent(struct student* s, int id,
                              char a[])
{
    // Allocating memory according to user provided
    // array of characters
    s = malloc(sizeof(*s) + sizeof(char) * strlen(a));
 
    s->stud_id = id;
    s->name_len = strlen(a);
    strcpy(s->stud_name, a);
 
    // Assigning size according to size of stud_name
    // which is a copy of user provided array a[].
    s->struct_size
        = (sizeof(*s)
           + sizeof(char) * strlen(s->stud_name));
 
    return s;
}
 
// Print student details
void printStudent(struct student* s)
{
    printf("Student_id : %d\n"
           "Stud_Name : %s\n"
           "Name_Length: %d\n"
           "Allocated_Struct_size: %d\n\n",
           s->stud_id, s->stud_name, s->name_len,
           s->struct_size);
 
    // Value of Allocated_Struct_size is in bytes here
}
 
// Driver Code
int main()
{
    struct student* s1 = createStudent(s1, 523, "Cherry");
    struct student* s2
        = createStudent(s2, 535, "Sanjayulsha");
 
    printStudent(s1);
    printStudent(s2);
 
    // Size in struct student
    printf("Size of Struct student: %lu\n",
           sizeof(struct student));
 
    // Size in struct pointer
    printf("Size of Struct pointer: %lu", sizeof(s1));
 
    return 0;
}