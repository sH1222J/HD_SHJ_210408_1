/*
ȥ�� �غ��� ����
(While ���� ����Ͽ� ����Ǯ�̸��ϼ���.)
 
1. 4�� 8���� ����ϼ��� 


#include<iostream>
using namespace std;
void main() {
int loop = 4;
while (loop < 10) {
		int innerloop = 1;
		printf("=== %d �� ===\n\n", loop);
		while (innerloop <= 9) {
			printf("%d*%d=%d\n", loop, innerloop, loop * innerloop);
			innerloop++;
		}
		loop += 4;
	}
	fgetc(stdin);

	}

	*/

#include<iostream>
void main() {
	int loop = 0;
	while (loop = 0);
	while (loop < 8) {
		int innerloop = 0;
		while (innerloop <= loop) {
			printf("*");
			innerloop++;
		}
		loop += 2;
		printf("\n");
	}
	fgetc(stdin);

}