#include <stdio.h> 
int main() 
{ 
	 int n, count = 0, rev = 0, rem; 
 printf("Enter number: "); 
 scanf("%d", &n); 
 while(n != 0) 
 { 
	 rem = n % 10; 
	 rev = rev * 10 + rem; 
	 n = n / 10; 
	 count++; 
 } 
 printf("Digits = %d\n", count); 
 printf("Reverse = %d", rev); 
 return 0; 
} 
