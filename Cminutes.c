#include <stdio.h>
#include <string.h>

int main(void){
	int meetings;
	char temp[9];
	char *temp_pointer = temp;
	char filename[260];
	
	printf("Enter input file name: ");
	scanf("  %s", filename);
	printf("Meetings this month: ");
	scanf("  %d", &meetings);
	const char meeting = meetings;
	
	for(int i = 0; i < meeting; i++){
		char old_business[1000];
		char new_business[1000];
		char date[9];
		char *date_pointer = date;
		char next_date[9];
		
		if(i == 0){
			printf("Date?\n");
			scanf("  %s", date);
			getchar();
		}
		else{
			snprintf(date_pointer, strlen(temp), temp_pointer);
		}
		
		printf("Next meeting time?\n");
		scanf("  %s", next_date);
		getchar();
		
		printf("Old business?\n");
		fgets(old_business, 259, stdin);
		
		printf("New business?\n");
		fgets(new_business, 259, stdin);
		
		if(i == 0){
		FILE *output = fopen(filename, "w");
		fprintf(output, 
"Date: %s				Time: 12:55 pm				Location: F07			\n" 
"Present/Absent: https://docs.google.com/spreadsheets/d/1QDEewz6dpcN51Kh3kJbqhmZC4sO1n3H-l9gKBnJTNvI/edit?usp=sharing" 
"\n" 
"	I. Meeting called to order at 12:55 pm by Aditya Iyer\n" 
"	II. Old Business\n" 
"		A. %s\n" 
"\n" 
"	III. New Business\n" 
"		A. %s\n" 
"\n" 
"	IV. Adjournment of meeting @ 1:15 pm\n" 
"			1. Motion: Aditya Iyer\n" 
"			2. Second: Kireeti Chilakamarry\n" 
"			3. Outcome: Approved\n" 
"\n" 
"\n" 
"\n" 
"  Andrew Li				%s		____________________	__________\n" 
"CLOG President / Secretary            Date		                    CLOG  Advisor		      Date	\n" 
"\n" 
"\n" 
"____________________	__________\n" 
"Activities Director		Date                         \n" 
" \n" 
"Next Meeting Date: %s\n\n" 
"Date: %s", date, old_business, new_business, date, next_date, next_date);
	}
	else{
		FILE *output = fopen(filename, "a");
		fprintf(output, 
"				Time: 12:55 pm				Location: F07			\n" 
"Present/Absent: https://docs.google.com/spreadsheets/d/1QDEewz6dpcN51Kh3kJbqhmZC4sO1n3H-l9gKBnJTNvI/edit?usp=sharing" 
"\n" 
"	I. Meeting called to order at 12:55 pm by Aditya Iyer\n" 
"	II. Old Business\n" 
"		A. %s\n" 
"\n" 
"	III. New Business\n" 
"		A. %s\n" 
"\n" 
"	IV. Adjournment of meeting @ 1:15 pm\n" 
"			1. Motion: Aditya Iyer\n" 
"			2. Second: Kireeti Chilakamarry\n" 
"			3. Outcome: Approved\n" 
"\n" 
"\n" 
"\n" 
"  Andrew Li				%s		____________________	__________\n" 
"CLOG President / Secretary            Date		                    CLOG  Advisor		      Date	\n" 
"\n" 
"\n" 
"____________________	__________\n" 
"Activities Director		Date                         \n" 
" \n" 
"Next Meeting Date: %s\n\n" 
"Date: %s", old_business, new_business, date, next_date, next_date);
	}
}
}
