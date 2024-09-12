
//access the union members
/*union student{
    int id;
    char name[13];
    int fee;
};
int main(){
   union student  s;
   s.id = 12;
   printf("the id of the student is : %d",s.id);
   return 0;
}*/

//access the union member in nested unions 
/*union student{
    int id;
    union name{
        int fees;
    }fee;
};
int main(){
   union student  s;
   s.fee.fees = 12;
   printf("the id of the student is : %d",s.fee.fees);
   return 0;
}*/
// C program to demonstrate use of Bit-fields
/*#include <stdio.h>

// Space optimized representation of the date
struct date {
	// d has value between 0 and 31, so 5 bits
	// are sufficient
	int d : 5;

	// m has value between 0 and 15, so 4 bits
	// are sufficient
	int m : 4;

	int y;
};

int main()
{
	printf("Size of date is %d bytes\n",
		sizeof(struct date));
	struct date dt = { 31, 12, 2014 };
	printf("Date is %d/%d/%d", dt.d, dt.m, dt.y);
	return 0;
}*/
/*#include<stdio.h>
struct str {
    int a : 5; 
    int b : 4;
};
int main(){
    struct str s;
    printf("%d",sizeof(s));
    return 0;
}*/


















