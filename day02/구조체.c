//#include <stdio.h>
//#include <string.h>
//
//void tel_find(char*);
//void main() {
//	char name[100];
//	int a;
//	printf("�˻��� �̸�:");
//	scanf("%s", name);
//	tel_find(name);
//}
//
//void tel_find(char* find_name) {
//	char* name[10] = { "ȫ����","�ֹ���","�ο���" };
//	char* tel[10] = { "2222-1123","1004-1004","9999-1234" };
//	int i;
//	for (i = 0; i < 3; i++) {
//		if (!strcmp(name[i], find_name)) {
//			printf("%s�� ��ȭ��ȣ�� %s�Դϴ�.\n", name[i], tel[i]);
//		}
//		
//	}
//	printf("����ó�� �����ϴ�.");
//}
//
//
//struct teacher {
//	char name[11];
//	char address[30];
//	char tel[11];
//	char lesson[20];
//	long birth;
//};
//void main() {
//	struct teacher tear;
//	printf("sizeof(struct teacher):%d\n", sizeof(struct teacher));
//	printf("sizeof(tear):%d\n", sizeof(tear));
//	printf("%p\n", &tear);
//	printf("long:%d", sizeof(long));
//
//}
//
//struct movie {
//	char name[30];
//	char actor[30];
//};
//
//void main() {
//	struct movie kmovie = { "�Ű��Բ�","������" };
//	printf("��ȭ����:%s\n", kmovie.name);
//	printf("��ȭ���:%s\n", kmovie.actor);
//}
//
//void main() {
//	struct teacher tear;
//	printf("name:");
//	scanf("%s", tear.name);
//	printf("address:");
//	scanf("%s", tear.address);
//	printf("tel:");
//	scanf("%s", tear.tel);
//	printf("lesson:");
//	scanf("%s", tear.lesson);
//	printf("birth:");
//	scanf("%d", &tear.birth);
//	
//	printf("�̸�:%s\n�ּ�:%s\n����ó:%s\n", tear.name, tear.address, tear.tel);
//	printf("������:%s\n�������:%d\n", tear.lesson, tear.birth);
//}