#include <kernel/types.h>
#include <kernel/stat.h>
#include <user/user.h>

int i_pow(int, int);

int main(int argc, char* argv[]) {
	int pid = fork();

	if (pid == 0) {
		sleep(atoi(argv[1]) * 10);
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