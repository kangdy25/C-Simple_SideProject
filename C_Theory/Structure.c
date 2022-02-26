#include <stdio.h>
#include <string.h>

typedef struct student {
	int s_id;
	char name[20];
}std;

void std_func(std *st);

int main() {
	std st1;

	std_func(&st1);
	printf("s_id2 : %d\n", st1.s_id);
	printf("name2 : %s\n", st1.name);
	printf("struct size %ld\n", sizeof(st1));

	return 1;
}

void std_func(std *st) {
	st->s_id = 10;
	strcpy(st->name, "DongYoon Kang");

	printf("s_id : %d\n", st->s_id);
	printf("name : %s\n", st->name);
}

