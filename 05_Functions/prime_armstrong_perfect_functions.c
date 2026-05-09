#include <stdio.h> 
int checkPrime(int n) 
{ 
	 int i; 
 if(n <= 1) 
	 return 0; 
 for(i = 2; i <= n/2; i++) 
 { 
	 if(n % i == 0) 
	 return 0; 
 } 
	 return 1; 
} 

int checkArmstrong(int n) 
{ 
	 int original, remainder; 
	 int result = 0; 
 original = n; 
 while(n != 0) 
 { 
	 remainder = n % 10; 
	 result = result + (remainder * remainder * remainder); 
	 n = n / 10; 
 } 
	 if(result == original) 
		 return 1; 
	 else 
		 return 0; 
} 
int checkPerfect(int n) 

{ 
	 int i, sum = 0; 
 for(i = 1; i < n; i++) 
 { 
	 if(n % i == 0) 
	 { 
	 sum = sum + i; 
	 } 
 } 
	 if(sum == n) 
		 return 1; 
	 else 
		 return 0; 
} 
int main() 
{ 
	 int number; 
 printf("Enter a number: "); 
 scanf("%d", &number); 
 if(checkPrime(number)) 
	 printf("The number is Prime.\n"); 
 else 
	 printf("The number is not Prime.\n"); 
 if(checkArmstrong(number)) 
	 printf("The number is Armstrong.\n"); 
 else 
	 printf("The number is not Armstrong.\n"); 
 if(checkPerfect(number)) 
	 printf("The number is Perfect.\n"); 
 else 
	 printf("The number is not Perfect.\n"); 
 return 0; 
} 


