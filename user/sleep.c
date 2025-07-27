#include <kernel/types.h>
#include <kernel/stat.h>
#include <user/user.h>

int i_pow(int, int);
int i_atoi(char*);

int main(int argc, char* argv[]) {
	int pid = fork();

	if (pid == 0) {
		sleep(i_atoi(argv[1]) * 10);
		exit(0);
	}

	exit(0);
}

int i_pow(int a, int b) {
	if (b == 0) {
		return 1;
	}

	return a * i_pow(a, b - 1);
}

int i_atoi(char* a) {
	int len, result = 0;

	for (len=0; a[len]!='\0'; ++len) {
		;
	}

	for (int i=0; len != 0; ++i) {
		result += (i_pow(10, len--) * (a[i] - 48));
	}

	return result;
}
