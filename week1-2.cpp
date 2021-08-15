#include<stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b && a > c && b > c) {
		printf("%d", a + c);
	}
	else if (a > b && a > c && c > b) {
		printf("%d", a + b);
	}
	else if (b > a && b > c && a > c) {
		printf("%d", b + c);
	}
	else if (b > a && b > c && c > a) {
		printf("%d", b + a);
	}
	else if (c > a && c > b && a > b) {
		printf("%d", c + b);
	}
	else if (c > a && c > b && b > a) {
		printf("%d", c + a);
	}
	return 0;
}