#include<stdio.h>
int main() {

	//int n;
	int base[5] = { 1,2,3,4,5 };
	int baselen = sizeof(base) / sizeof(int);
	//int newAr[5];

	//printf("���� �Է� : ");
	//scanf_s("%d", &n);

	//printf("base : ");
	//for (int i = 0; i < baselen; i++) {
	//	printf("%d ", base[i]);
	//}
	//puts("");

	//for (int i = 0; i < baselen; i++) {
	//	newAr[i] = base[i] + n;

	//printf("base[%d] : %d = newAr[%d]\n", i, base[i], newAr[i]);
	//}

	// �� Ǯ��

	//int arbase[5];
	//int arbaselen = sizeof(arbase) / sizeof(int);

	//for (int i = 0; i < baselen; i++) {
	//	arbase[i] = base[4 - i];
	//	printf("base[%d] : %d\tarbase[%d] : %d\n", i, base[i], i, arbase[i]);
	//}

	// ���� Ǯ��
	//int revAr[5];
	//int idx = baselen - 1;

	//for (int i = 0; i < baselen; i++)
	//	revAr[idx - i] = base[i];

	//printf("base : ");
	//for (int i = 0; i < baselen; i++)
	//	printf("%d ", base[i]);
	//puts("");
	//printf("revAr : ");
	//for (int i = 0; i < baselen; i++)
	//	printf("%d ", revAr[i]);
	//puts("");

	int ar[5];
	int count = 0, sum = 0, Min = 0, acount = 0;
	int arlen = sizeof(ar) / sizeof(int);
	double avg = 0;
	// 1��
	for (int i = 0; i < arlen; i++) {
		int a = 0;
		printf("%d�� ° ���� �Է� : ", i + 1);
		scanf_s("%d", &a);
		if (a >= 1 && a <= 99)
			ar[i] = a;
		else {
			puts("1 ~ 99������ ���� �Է��ϼ���");
			i--;
		}
	}
	// 2��
	for (int i = 0; i < arlen; i++) {
		if (ar[i] % 2 == 0) {
			printf("%d ", ar[i]);
			count++;
			
			sum += ar[i];
		}
	}
	printf("¦���� �� ���� %d��\t�� �� %d\n", count, sum);

	// 3��
	//for (int i = 0; i < arlen; i++) {
	//	if (ar[i] > Min) {
	//		Min = ar[i];
	//		Min = ar[Min];
	//	}
	//}
	//	printf("ar[%d], %d\n", Min, Min);

	// 4��
	sum = 0;
	for (int i = 0; i < arlen; i++) {
		sum += ar[i];
	}
	avg = (double)sum / arlen;
	printf("avg = %.2f\n", avg);
	for (int i = 0; i < arlen; i++) {
		if (ar[i] > avg) {
			acount++;
		}
	}
	printf("��� ���� ���� ������ ���� : %d��", acount);
}