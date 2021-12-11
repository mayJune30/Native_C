//#include <stdio.h>
//#include <string.h>
//
//void tel_find(char*);
//void main() {
//	char name[100];
//	int a;
//	printf("검색할 이름:");
//	scanf("%s", name);
//	tel_find(name);
//}
//
//void tel_find(char* find_name) {
//	char* name[10] = { "홍동만","최민주","민영진" };
//	char* tel[10] = { "2222-1123","1004-1004","9999-1234" };
//	int i;
//	for (i = 0; i < 3; i++) {
//		if (!strcmp(name[i], find_name)) {
//			printf("%s의 전화번호는 %s입니다.\n", name[i], tel[i]);
//		}
//		
//	}
//	printf("연락처가 없습니다.");
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
//	struct movie kmovie = { "신과함께","하정우" };
//	printf("영화제목:%s\n", kmovie.name);
//	printf("영화배우:%s\n", kmovie.actor);
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
//	printf("이름:%s\n주소:%s\n연락처:%s\n", tear.name, tear.address, tear.tel);
//	printf("담당과목:%s\n생년월일:%d\n", tear.lesson, tear.birth);
//}