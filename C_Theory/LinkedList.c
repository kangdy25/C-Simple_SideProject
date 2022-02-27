#include <stdio.h>

int g_h_total = 0;

void add_h(int *h_num) {
	h_num[g_h_total++] = g_h_total + 1;	
}

void print_all(int * h_num) {
	int i = 0;
	while(*(h_num + i)) {
		printf("%d : %d\n", i, *(h_num + i ));
		i++;
	}
}

int main() {

	int h_num[200] = {0,};
	add_h(h_num);
	add_h(h_num);
	add_h(h_num);

	print_all(h_num);
	
	return 1;
}
