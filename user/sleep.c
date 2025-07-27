#include <kernel/types.h>
#include <kernel/stat.h>
#include <user/user.h>

// TODO: Fix number with no zeros
// TODO: Write prototypes

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

	for (int i=0; len != 1; ++i) {
		char num = a[i] - 48;
		result += (i_pow(10, len--) * num);
	}

	return result;
}

int main(int argc, char* argv[]) {
	int pid = fork();

	if (pid == 0) {
		sleep(i_atoi(argv[1]) * 10);
		exit(0);
	} else {
		wait(0);
	}

	exit(0);
}
