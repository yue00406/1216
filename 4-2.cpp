#include <stdio.h>
int main() {
	int lines;//行數
	int num = 0;
	while (1)//迴圈
	{
		printf("請輸入一個列數(小於等於10的數)或是輸入-1結束程式。");
		scanf("%d", &lines);//幾行
		if (lines < 0) {
			printf("輸入錯誤，請輸入大於0的數。");
			return 0;
		}
		if (lines > 10)
			printf("輸入錯誤，請輸入小於等於10的數。");
		num = ((lines + 1) * lines) / 2;
		for (int i = 1;i <= num; i++) {
			printf("%d\t", i);
			if (i == 1 || i == 3 || i == 6 || i == 10 || i == 15 || i == 21 || i == 28 || i == 36 || i == 45)
				printf("\n");
		}
	}
	return 0;
}