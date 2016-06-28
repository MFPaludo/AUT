#include <stdio.h>
#include <math.h>

int main()
{
	printf("COMP500/ENSE501 Result Calculator:\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	printf("\n\n");
	
	double reporting_journal = 0;
	printf("Enter the score (out of 100) for the Reporting Journal: ");
	scanf("%lf", &reporting_journal);
	
	double test_1 = 0;
	printf("Enter the score (out of 100) for the Practical Test 1: ");
	scanf("%lf", &test_1);
	
	double test_2 = 0;
	printf("Enter the score (out of 100) for the Practical Test 2: ");
	scanf("%lf", &test_2);
	
	double test_3 = 0; 
	printf("Enter the score (out of 100) for the Practical Test 3: ");
	scanf("%lf", &test_3);
	
	double final_exam = 0;
	printf("Enter the score (out of 100) for the Final Practical Exam: ");
	scanf("%lf", &final_exam);

	printf("\n\n");
	printf("Calculating...");
	printf("\n\n");
	
	double journal_contribution = 0.15 * reporting_journal;
	printf("Reporting Journal (worth 15%%) contributes: %f\n", journal_contribution);
	
	double test_1_contribution = 0.1 * test_1;
	printf("Practical Test 1 (worth 10%%) contributes: %f\n", test_1_contribution);

	double test_2_contribution = 0.1 * test_2;
	printf("Practical Test 2 (worth 10%%) contributes: %f\n", test_2_contribution);
	
	double test_3_contribution = 0.15 * test_3;
	printf("Practical Test 3 (worth 15%%) contributes: %f\n", test_3_contribution);
	
	double final_exam_contribution = 0.5 * final_exam;
	printf("Final Practical Exam (worth 50%%) contributes: %f\n", final_exam_contribution);

	printf("\n\n");

	double overall_grade = journal_contribution + test_1_contribution + test_2_contribution + test_3_contribution + final_exam_contribution;

	printf("Overal result total: %f", overall_grade);
	printf("\n\n");

	printf("Remember, to pass the paper, a student must achieve:\n");
	printf("- At least 80% attendance and participation in the\n");
	printf("individual's scheduled lab tutorial stream, AND\n");
	printf("- A minimum mark of 40%% for the Final Practical Exam, AND\n");
	printf("- A minimum C- (50%%) overall grade.");
	printf("\n\n");

	return 0;
}