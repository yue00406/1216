#include <stdio.h>
int main() {
	int lines;//���
	int num = 0;
	while (1)//�j��
	{
		printf("�п�J�@�ӦC��(�p�󵥩�10����)�άO��J-1�����{���C");
		scanf("%d", &lines);//�X��
		if (lines < 0) {
			printf("��J���~�A�п�J�j��0���ơC");
			return 0;
		}
		if (lines > 10)
			printf("��J���~�A�п�J�p�󵥩�10���ơC");
		num = ((lines + 1) * lines) / 2;
		for (int i = 1;i <= num; i++) {
			printf("%d\t", i);
			if (i == 1 || i == 3 || i == 6 || i == 10 || i == 15 || i == 21 || i == 28 || i == 36 || i == 45)
				printf("\n");
		}
	}
	return 0;
}