/*
calculate library fine
author:Caren Kiptoo
reg:D33-2447-2023
version 1
date:
*/
#include<stdio.h> //preprocessor directive ,printf,scanf

//main function
int main() {
	//variable declaration
	int bookID,duedate, returndate,daysoverdue;
	int fineRate=0,fineAmount=0;
	
	
	//Get user input
	printf("enter book ID:");
	scanf("%d",&bookID);
	printf("enter due date (as a day number):");
	scanf("%d",&duedate);
	printf("enter return date(as a day number):");
	scanf("%d",&returndate);
	
	
	//calculate overdue days
	daysoverdue = returndate - duedate
	
	//determine fine rate
	;if (daysoverdue > 0) {
		if(daysoverdue<=7)
			fineRate = 150;
	else if (daysoverdue <= 14)
		fineRate = 250;
	else
		fineRate = 300;
	
	//calculate fine amount
	fineAmount = daysoverdue * fineRate;
	}
	else{
		daysoverdue = 0; // No overdue if returned on or before due date
	}
	//Display results
	printf("\nLibrary Fine Details\n");
	printf("Book ID: %d\n",bookID);
	printf("Due Date; %d\n",duedate);
	printf("Return Date: %d\n",returndate);
	printf("Days Overdue: %d\n",daysoverdue);
	printf("Fine Rate:Ksh. %d\n",fineRate);
	printf("Fine Amount: Ksh. %d\n",fineAmount);
	return 0;
}

	
		
		