#include <stdio.h>
#include <string.h>
int main()
{
	char name[30][7] = { "강덕호", "고기태","곽호철","이도현","박동균","최동민","한명수","김승호","김은미","김태성","김준형","김  민","박태수","박병채","민현우","서인수","신인규","성재훈","심동현","윤승한","김재박","임기현","이수복","이원호","석주명","이범석","전호진","정광민","조영민","홍정모" };
	char grade[30][7], null[7], _name[30][7], swap;
	int mid_exam[30] = { 60,11,36,42,31,72,19,50,44,23,40,66,41,40,39,68,70,52,65,31,28,30,45,59,53,34,64,41,63,59 };
	int final_exam[30] = { 32,35,19,15,32,50,13,32,20,19,26,59,41,21,45,63,82,69,84,25,28,31,90,59,50,36,40,33,45,69 };
	int i, j, repeat, temp, rank[30], total[30], score[30];
	printf("=================================\n");
	printf("  이름      중간    기말 \n");
	printf("=================================\n");
	for (i = 0; i < 30; i++)
		printf(" %3s    %4d    %4d\n", name[i], mid_exam[i], final_exam[i]);

	for (i = 0; i < 30; i++)
	{
		total[i] = mid_exam[i] + final_exam[i];
		strcpy(_name[i], name[i]);
		score[i] = total[i];
	}

	for (i = 0; i < 30; i++)
	{
		if (total[i] == total[i - 1])
			rank[i] = rank[i - 1];
		else
			rank[i] = i + 1;
	}

	for (i = 0; i < 30; i++)
	{
		if (rank[i] <= 0.1 * 30)
			strcpy(grade[i], "A+");
		else if (rank[i] <= 0.2 * 30)
			strcpy(grade[i], "A");
		else if (rank[i] <= 0.4 * 30)
			strcpy(grade[i], "B+");
		else if (rank[i] <= 0.6 * 30)
			strcpy(grade[i], "B");
		else if (rank[i] <= 0.7 * 30)
			strcpy(grade[i], "C+");
		else if (rank[i] <= 0.8 * 30)
			strcpy(grade[i], "C");
		else if (rank[i] <= 0.85 * 30)
			strcpy(grade[i], "D+");
		else if (rank[i] <= 0.9 * 30)
			strcpy(grade[i], "D");
		else
			strcpy(grade[i], "F");
	}

	for (repeat = 1; repeat < 30; repeat++)
	{
		swap = 'N';
		for (i = 0; i < 30 - repeat; i++)
		{
			if (total[i] < total[i + 1])
			{
				temp = total[i];
				total[i] = total[i + 1];
				total[i + 1] = temp;

				strcpy(null, name[i]);
				strcpy(name[i], name[i + 1]);
				strcpy(name[i + 1], null);

				swap = 'Y';
			}
		}
		if (swap == 'N')
			break;
	}

	for (i = 0; i < 30; i++)
		if (total[i] == total[i + 1])
			if (strcmp(name[i], name[i + 1]) > 0)
			{
				strcpy(null, name[i]);
				strcpy(name[i], name[i + 1]);
				strcpy(name[i + 1], null);
			}

	printf("======================================\n");
	printf("  이름      시험     최종    석차\n");
	printf("======================================\n");
	for (i = 0; i < 30; i++)
		for (j = 0; j < 30; j++)
			if (strcmp(_name[i], name[j]) == 0)
				printf(" %3s      %-3d      %-4s    %-2d\n", _name[i], score[i], grade[j], rank[j]);

	printf("=====================================\n");
	printf("  이름      시험     최종    석차\n");
	printf("=====================================\n");
	for (i = 0; i < 30; i++)
		printf(" %3s      %-3d      %-4s    %-2d\n", name[i], total[i], grade[i], rank[i]);
}