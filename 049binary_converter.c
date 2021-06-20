/*
Date   : 3-1-2021
Aim    : convert to binary
Source : ansi c e6.11
*/
#include <stdio.h>
#include <math.h>
void main()
{
	long long int n, binary=0;
	
	printf("Enter decimal number: ");
	scanf("%lld", &n);
	
	while (n)
	{
		binary *= 10;
		binary = binary + n % 2;
		n /= 2;
	}
	printf("Binary = %lli",binary);
}

// void main() {
// 	unsigned n, i, flag=0;
// 	printf("Enter decimal number: ");
// 	scanf("%u", &n);
// 	unsigned m = 8*sizeof(n);
// 	unsigned mask = pow(2, m-2);
// 	printf("%x\n", mask);
// 	for (i = 0; i < m; i++) {
// 		printf("%u", n & mask);
// 		n << 1;
// 	}
// }
