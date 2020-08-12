#include<stdio.h>
#include<conio.h>
int main()
{
   int a[100],n,i,sum=0;
   printf("Enter the size of array: ");
   scanf("%d",&n);
   printf("Enter Array Elements: \n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("The array elements are:  \n");      /* 1. Printing elements  */
   for(i=0;i<n;i++)
   {
      printf("%d\n",a[i]);
   }
   printf("Total number of elements are %d\n",n);    /* 2. Total Number of Elements  */
   for(i=0;i<n;i++)                                    /* 3. Performing any process with the Elements  */
   {
      sum = sum + a[i];
   }
    printf("The addition of all numbers in an array is %d\n",sum);
   return 0;
}
 

