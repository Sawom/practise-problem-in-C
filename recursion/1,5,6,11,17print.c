#include<stdio.h>
int Fibonacci(int);
int main(){
   int n, i = 0, c;
printf("Enter a number : \n");
   scanf("%d",&n);

   printf("Fibonacci series\n");
printf(" number should be : \n");
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
      i++;
   }

   return 0;
}

int Fibonacci(int n){
   if ( n == 0 )   ///last elements always will be zerro and we return 1st value (here 1)
      return 1;   /// then we find the second elements, and return 2nd value (here 5)
   else if ( n == 1 )
      return 5;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}


