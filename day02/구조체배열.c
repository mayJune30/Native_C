//#include <stdio.h>

//struct movie {
//	char name[30];
//	char actor[30];
//
//};
//
//void main() {
//	struct movie movies[3];
//	for (int i = 0; i < 3; i++) {
//		printf("%d��° ��ȭ ����:", i + 1);
//		scanf("%s", movies[i].name);
//		printf("%d��° ��ȭ ���:", i + 1);
//		scanf("%s", movies[i].actor);
//	}
//	printf("----------movie info----------\n");
//	for (int i = 0; i < 3; i++) {
//		printf("%d�� ��ȭ����: %s\n",i+1, movies[i].name);
//		printf("%d�� ��ȭ���: %s\n",i+1, movies[i].actor);
//	}
//}

//struct teacher {
//	char name[11];
//	char address[30];
//	char tel[11];
//	char lesson[20];
//	long birth;
//};
//
//void main() {
//	int i;
//	struct teacher teachers[3];
//	for (i = 0; i < 3; i++) {
//		printf("%d. name: ", i + 1);
//		scanf("%s", teachers[i].name);
//		printf("%d. address: ", i + 1);
//		scanf("%s", teachers[i].address);
//		printf("%d. tel: ", i + 1);
//		scanf("%s", teachers[i].tel);
//		printf("%d. lesson: ", i + 1);
//		scanf("%s", teachers[i].lesson);
//		printf("%d. birth: ", i + 1);
//		scanf("%ld", &teachers[i].birth);
//	}
//	for (i = 0; i < 3; i++) {
//		printf("----%d�� ������ ����----\n",i+1);
//		printf("�̸� : %s\n", teachers[i].name);
//		printf("�ּ� : %s\n", teachers[i].address);
//		printf("����ó : %s\n", teachers[i].tel);
//		printf("���� : %s\n", teachers[i].lesson);
//		printf("������� : %ld\n", teachers[i].birth);
//	}
//}