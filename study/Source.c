#include <stdio.h>
//��ӡ���϶������϶�ת��
main() {
	float fahr, celsius;
	float lower, upper, step;
	printf("This is a table for temperatuire!\n");

	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0)*(fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
		;
	}
}