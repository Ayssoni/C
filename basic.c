
//    int magic;
//    int guess;
//    magic = rand();
//    printf("enetr the guess number:");
//    scanf("%d",&guess);
//    if(guess==magic){

//     printf("**true**");
//    }
   
//    else{
//        printf("wrong");
//        if(guess>magic){
//          printf("\nthe guess is too high\n");
//        }
//        else{
//          printf("\nntoo low\n");
//        }

// }
// /exp1==true ; exp2 will execute but if the exp1 !=true(false) the it eill execute exp3
// int x=10;
// x<12?printf("a boy"):printf("adult");
     //the number is divisible or not
   //   int a,b;
   //   printf("enter the number:");
   //   scanf("%d",&a);
   // //   printf("enter the 2 number:");
   // //   scanf("%d",&b);
   // //   if (b==0) printf("the number is not divisible ");
   // //   else printf("no. is divisible");
   //      //factorial of a number
   //      int a,b=1,c;
   //      printf("Number:");
   //      scanf("%d",&a);
   //       for(c=1;c<=a;c++){
   //         b=c*b;

   //       }
         
   //     printf("%d",b);
//    char ch ;
//    printf("1. check spelling\n");
// printf("2. correct spelling errors\n");
// printf("3. display spelling errprs");
// printf("strike any other kt=ey to skip");
// printf("enter your choice:");
// ch = getchar();
// switch(ch){
//    case'1':
//    check_spelling();
//    break;
//    case '2':
//    correct_errors();
//    break;
//    case'3':
//    display_errors();
//    break;
//    default:
//    printf("no option:");
// int day =2;
// switch(day){
//    case 1:
//    printf("monday");
//    break;
//    case 2:
//    printf("tuesday");
//    break; 
   // for(int x= 100;x!=65;x -= 5){
   //    int z = x*x;
   //    printf("%d",x,z);
   //       }
   
   // while(a<20){
   //    printf("ayush\n");
   //    a++;}
//  printf("eh");
// int x[100];
// int t;
// for(t=0;t<100;t++)x[t]=t;
// for(t=0;t<100;t++)printf("%d\n",x[t]);

// return 0;
// int a[12];

// a[2]=12;
// a[1]=12;
// a[11]=a[2]+a[1];
// printf("the addition of the numbers are %d",a[11]);
// return 0;
// char a[12];
// a[11] = 12;
// printf("%d",a[11]);






// #include <stdio.h>  
//  int main()  
// {  
//     int n;  
//     printf("Enter the number of rows");  
//     scanf("%d",&n);  
//     for(int i=0;i<n;i++)  
//     {  
//         for(int j=0;j<n;j++)  
//         {  
//             printf("*");  
//         }  
//         printf("\n");  
//     }  
      
//     return 0;  
// } 
// #include<stdio.h>
// int main(){
// int amount=12000, rate_of_interest=12,month;
// printf("How many months:");
// scanf("%d",month);

// for(int i=1;i<=month;i++){
//    amount = amount+(amount*rate_of_interest);
//    month--;
// }
// printf("%d",amount);

// }

//calculate using for loop

/*int main(){
   int num1 , num2 , result,count;
   printf("enter the 1st num:");
   scanf("%d",&num1);
   printf("enter the 2nd num:");   // assignment operator is needed
   scanf("%d",&num2);
   printf("enter the count number:");
   scanf("%d",&count);
   if(count== 1){
      printf("%d",result = num1+num2);
   }
   if(count==2){
      printf("%d",result = num1-num2);
   }
    if(count==3){
      printf("%d",result = num1*num2);
   } 
   else{
      printf("The result is : %d",result = num1/num2);
   }
}

*/

#include<stdio.h>
// int main(){
//    int a =  12;
//    (a==12)?printf("not sure"):printf("sure");
// }
/*int main(){
  int a, j = 1;
  printf("enter the number:");
  scanf("%d",&a);
  for(int i = 1;i<=a;i++){
      j=j*i;
    }
  printf("%d",j);
  return 0;
}*/

int main(){
   int arr[3][3]= {{1,2,3},{3,4,3},{5,3,6}};
   for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
      
          printf("%d ",arr[i][j]);
      
       }
      printf("\n");
        
 }

   }













































