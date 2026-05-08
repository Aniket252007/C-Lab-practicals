#include <stdio.h> 
#include <math.h> 
int main() 
{ 
	 float u, a, t, v, s, b, c, p, H, T; 
 printf("Enter u a t b c p: "); 
 scanf("%f %f %f %f %f %f", &u, &a, &t, &b, &c, &p); 
 v = u + a * t; 
 s = u * t + (a * t * t) / 2; 
 T = 2 * a + sqrt(b) + 9 * c; 
 H = sqrt(b * b + p * p); 
 printf("v = %.2f\n", v); 
 printf("s = %.2f\n", s); 
 printf("T = %.2f\n", T); 
 printf("H = %.2f\n", H); 
 return 0; 
} 
