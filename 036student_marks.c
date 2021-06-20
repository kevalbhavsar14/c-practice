/*
Date   : 2-1-2021
Aim    : studenr marks
Source : ansi c e5.4
*/
#include <stdio.h>

void main()
{
	int marks, i;
	int m80=0, m60=0, m40=0, l40=0, r61_80=0, r41_60=0;
	
	printf("Enter marks of 10 students(0 - 100):\n");
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &marks);
		if(marks > 80)
		m80++;
		if(marks > 60 && marks <= 80)
		r61_80++;
		if(marks > 40 && marks <= 60)
		r41_60++;
		if(marks <= 40)
		l40++;
	}
	printf("\nstudents who have obtained more than 80 : %d", m80);
	printf("\nstudents who have obtained more than 60 : %d", m80 + r61_80);
	printf("\nstudents who have obtained more than 40 : %d", m80 + r61_80 + r41_60);
	printf("\nstudents who have obtained 40 or less   : %d", l40);
	printf("\nstudents in the range of 81 to 100      : %d", m80);
	printf("\nstudents in the range of 61 to 80       : %d", r61_80);
	printf("\nstudents in the range of 41 to 60       : %d", r41_60);
	printf("\nstudents in the range of 00 to 40       : %d", l40);
}

