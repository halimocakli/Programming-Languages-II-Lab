/* Klavyeden öğrenci sayısı (en fazla 100) ve ders geçme notunu alarak bu bilgileri tanımlanacak “Calculate” fonksiyonuna
 * gönderen bir “main” fonksiyonu hazırlayınız. “Calculate” fonksiyonu kendisine gelen öğrenci sayısı kadar notu klavyeden
 * okuyarak 100 elemanlı bir diziye kaydetmeli ve geçme notuna göre kaç tane öğrencinin dersten kaldığını bularak
 * fonksiyondan geri döndürürken, sınıf ortalamasını da ekrana yazdırmalıdır. Buna göre aşağıda verilen alanlara “main”
 * ve “hesapla” fonksiyonlarını yazınız.
 * */

#include <stdio.h>
#define SIZE 100

int Calculate(int, int);

int main()
{
	int studentCount;
	int passGrade;
	int passed;

	printf("Insert the number of students: ");
	scanf("%d", &studentCount);

	printf("Insert the pass grade: ");
	scanf("%d", &passGrade);

	passed = Calculate(studentCount, passGrade);

	printf("\nNumber of passed students: %d", passed);
	printf("\nNumber of failed students: %d", studentCount - passed);

	return 0;
}

int Calculate(int studentCountArg, int passGradeArg)
{
	int studentsArr[SIZE];
	int passedStudents = 0;
	int totalGrade = 0;

	for (int i = 0; i < studentCountArg; i++)
	{
		printf("\nInsert %d. Student Grade: ", i + 1);
		scanf("%d", &studentsArr[i]);

		if (studentsArr[i] >= passGradeArg)
			passedStudents++;

		totalGrade += studentsArr[i];
	}

	printf("\nAverage Class Grade: %d", totalGrade / studentCountArg);

	return passedStudents;
}