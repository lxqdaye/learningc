#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	int j;
	for (i = 1; i < 10; i++) {
		printf("\n");
		for (j = 1; j < i + 1; j++) {
			int m = 0;
			m = i * j;
			printf("%d*%d=%d ", i, j, m);
		}
	}
    system("pause");
	return 0;
   
}