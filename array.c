#include <stdio.h>

int main()
{
	int t1_grades[3] = {75, 70, 63};
	int t2_grades[3] = {92, 80, 70};
	
	int* total = malloc(6 * sizeof(int));
	
	memcpy(total, t1_grades, 3 * sizeof(int)); // copy 3 ints from t1_grades to total[0]...total[2]
	memcpy(total + 3, t2_grades, 3 * sizeof(int)); // copy 3 ints from t2_grades to total[3]...total[5]
	
	for(int i=0; i<6; i++)
        printf("%d\n", total[i]);
	
	return 0;
}
