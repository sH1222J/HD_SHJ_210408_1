/*
혼자 해보기 문제
(While 문만 사용하여 문제풀이를하세요.)
 
1. 4단 8단을 출력하세요 


#include<iostream>
using namespace std;
void main() {
int loop = 4;
while (loop < 10) {
		int innerloop = 1;
		printf("=== %d 단 ===\n\n", loop);
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