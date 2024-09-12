#include<stdio.h>
int main(){
  /*int a=12 ;
  int *p1 ,*p2;
  p1 = &a;
  p2 = p1;
  printf("%p",p1);
  return 0;*/
  /*int *a,count,*p;
  a = &count;
  p = a;
  p++;
  printf("%p",p);
  return 0;*/
/*int a=1,*p;
p = &a;
p++;
printf("%d",p);*/
// #include<stdio.h>
// #include<stdlib.h>
// #define size 50
// void push(int);;
// int pop(void);
// int *tos,*p1,stack[size];
// int main(){
// int value;
// tos = stack;
// p1 = stack;
// do{
//   printf("enter value:");
//   scanf("%d",&value);
//   if(value!= 0)push(value);
//   else printf("value on the top is%d\n",pop());

// }
// while(value!= -1);return 0;

// }
// void push(int i){
//   p1++;
//   if(p1==(tos + size)){
//     printf("stack overflow.\n");
//     exit(1);
//   }
//   *p1 = i;

// }

// int pop(){
//   if(p1==tos){
//     printf("stack underflow.\n");
//     exit(1);
//   }
//   p1--;
//   return *(p1+1);
// }
// #include<stdio.h>
// int main(){
//   int a=12;
//   while(a<10000000000){        //ctrl+c
//     printf("%d\n",a);
//     a++;
//   }
// }
int a=10,*ptr;
int ptr = &a;
printf("%d",ptr);
}



























