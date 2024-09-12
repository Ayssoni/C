
// int arr[6]={1,0,3,0,4,5};
//  int main()
// {
    
// }

// int temp,temp1;
// int oddeven(){
//     for(int i=1;i<6;i++){
//         arr[i+1]= temp;
//         if(arr[i]<arr[i+1]){
//          arr[i]=temp;
//          arr[i+1]=arr[i];
//          arr[i+1]=temp;

//         }
//         printf("%d",i,arr[i]);


//     }
// }
// A C program to find a peak element
// #include <stdio.h>
 
// // Find the peak element in the array
// int findPeak(int arr[], int n)
// {
//     // first or last element is peak element
//     if (n == 1)
//         return 0;
//     if (arr[0] >= arr[1])
//         return 0;
//     if (arr[n - 1] >= arr[n - 2])
//         return n - 1;
 
//     // check for every other element
//     for (int i = 1; i < n - 1; i++) {
 
//         // check if the neighbors are smaller
//         if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
//             return i;
//     }
// }
 
// // Driver Code
// int main()
// {
//     int arr[] = { 1, 3, 20, 4, 1, 0 };
//     printf("%d\n",sizeof(arr));
//     printf("%d\n",sizeof(arr[0]));
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     printf("%d",findPeak(arr, n));
//     return 0;
// // }
// #include<stdio.h>
// int main(){
//  int arr[6]={1,2,3,4,5,6};
//  printf("odd numbers\n");
 
//     for(int i = 0;i<6;i++){
//        if((arr[i]%2)!=0) {
//         printf("%d\n",arr[i]);
       
//     }
//     }
 
//  printf("Even number\n");
//     for(int i = 0 ;i<6;i++){
//      if((arr[i]%2)==0){
//      printf("%d\n",arr[i]);
     
//      }
//     }
 
// }
// #include<stdio.h>

// int main()
// {
//     char str[20] = "Have a good day!";
    
//     // puts is used to print the string char array
//     puts(str);
    
//     return 0;
// }
// #include<stdio.h>

// int main()
// {
    
//     char str[15] = "learning";
 
//     printf("%s", str);
    
//     return 0;
// }
      // reverse of an array
// #include<stdio.h>  
// int main()  
// {  
//     int n, arr[n], i;  
//     printf("Enter the size of the array: ");  
//     scanf("%d", &n);  
//     printf("Enter the elements: ");  
//     for(i = 0; i < n; i++)  
//     {  
//         scanf("%d", &arr[i]);  
//     }  
//     int rev[n], j = 0;  
//     for(i = n-1; i >= 0; i--)  
//     {  
//         rev[j] = arr[i];  
//         j++;  
//     }  
//     printf("The Reversed array: ");  
//     for(i = 0; i < n; i++)  
//     {  
//         printf("%d ", rev[i]);  
//     }  
// }  


// #include <stdio.h> 
  
// void reverseArrayExtraArray(int arr[], int size) { 
//     int reversedArr[size]; 
//     for (int i = 0; i < size; i++) { 
//         reversedArr[i] = arr[size - i - 1]; 
//     } 
  
    
//     printf("Reversed Array: "); 
//     for (int i = 0; i < size; i++) { 
//         printf("%d ", reversedArr[i]); 
//     } 
// } 
  
// int main() { 
//     int originalArr[] = {1, 2, 3, 4, 5}; 
//     int size = sizeof(originalArr) / sizeof(originalArr[0]); 
      
//     reverseArrayExtraArray(originalArr, size); 
  
//     return 0; 
// } 

// int main()  
// {  
//     int i, n, temp;  
//     printf("Enter the size of the array: ");  
//     scanf("%d", &n);  
//     int arr[n];  
//     printf("Enter the elements: ");  
//     for(i = 0; i < n; i++)  
//     {  
//         scanf("%d", &arr[i]);  
//     }  
//     int end = n - 1;  
//     for(i = 0; i < n/2; i++)  
//     {  
//         temp = arr[i];  
//         arr[i] = arr[end];  
//         arr[end] = temp;  
//         end--;  
//     }  
//     printf("The reversed array: ");  
//     for(i = 0; i < n; i++)  
//     {  
//         printf("%d ", arr[i]);  
//     }  
// }  
// #include<stdio.h>
// int main(){
//    int arr[5] = {1,2,3,4,5};
//    int i ,temp,n =5;
//    int end = n-1;
//     for(i = 0; i < 5/2; i++)  
//     {  
//         temp = arr[i];  
//         arr[i] = arr[end];  
//         arr[end] = temp;  
//         end--;  
//     }  
//     printf("The reversed array: ");  
//     for(i = 0; i < n; i++)  
//     {  
//         printf("%d ", arr[i]);  
//     }
// }
// void sort(int arr[12]){
// int n=0,temp;
// if(arr[n]>arr[n+1]){
//       temp=arr[n];
//       arr[n]=arr[n+1];
//       arr[n+1]=arr[n];
//       n++;
// }
// }
// int main(){

// }

#include <stdio.h>    
     
int main()    
{      
    int arr[] = {50, 20, 80, 70, 10};     
    int temp = 0;    
           
    int length = sizeof(arr)/sizeof(arr[0]); 
    printf("%d\n",sizeof(arr)) ;
    printf("%d\n",sizeof(arr[0])) ;  
    printf("%d\n",length) ;
         
    printf("Elements of original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
         
    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
        
    printf("\n");    
            
    printf("Elements of array sorted in ascending order: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);    
    }    
    return 0;    
}     