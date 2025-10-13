#include<stdio.h>
int main(){
	int student_marks[10];
	printf("Enter Student Marks\n");
	float total;
	int i;
	for (i=0;i<10;i++){
		scanf("%d",&student_marks[i]);
		total+=student_marks[i];
	}
	printf("Average Marks are %.2f", total/10);
}
