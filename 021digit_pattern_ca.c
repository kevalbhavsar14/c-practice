/*
Date   : 31-12-2020
Aim    : Pattern
Source : ansi c e3.5
*/
#include <stdio.h>

void main()
{
	int n, temp, a = 10, b, i, j, count=1;
	printf("Enter number: ");
	scanf("%d",&n);
	
	while(n / a != 0)
	{
		count++;
		a *= 10;
	}
	for(i = 0; i < count; i++)
	{
		b = a;
		for(j = 0; j < count-i; j++)
		{
			temp = n % b / (b/10);
			printf("%d ",temp);
			b /= 10;
		}
		a /= 10;
		printf("\n");
	}
}


//void main() {
//	int n, rev, temp;
//	printf("Enter number : ");
//	scanf("%d", &n);
//	
//	while (n != 0) {
//		rev *= 10;
//		rev += n % 10;
//		n /= 10;
//	}
//
//	while (rev != 0) {
//		temp = rev;
//		while (temp != 0) {
//			printf("%d ", temp % 10);
//			temp /= 10;
//		}
//		printf("\n");
//		rev /= 10;
//	}
//	
//}
