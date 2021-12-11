//#include <stdio.h>
//#include <stdlib.h>
//
//struct Data {
//	int num;
//	char name[25];
//};
//void main() {
//	struct Data* data;
//	int count = 0,i;
//	data = (struct Data*)malloc(sizeof(struct Data) * 10);
//	printf("번호:");
//	scanf("%d", &data->num);
//	while (data->num != 0) {
//		printf("이름:");
//		scanf("%s", (data++)->name);
//		printf("번호:");
//		scanf("%d", &data->num);
//		count++;
//	}
//	printf("\n");
//	for (i = count; i > 0; i--) {
//		printf("%d.%s\n", (data - i)->num, (data - i)->name);
//	}
//}

//struct data {
//	int num;
//	char name[25];
//};
//void main() {
//	struct data datas = { 1,"가길동" };
//	struct data* pdatas;
//	pdatas = &datas;
//	printf("pdatas->num:%d\n", pdatas->num);
//	printf("pdatas->name:%s\n", pdatas->name);
//	}

