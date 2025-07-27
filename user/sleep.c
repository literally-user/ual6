#include <kernel/types.h>
#include <kernel/stat.h>
#include <user/user.h>

int main(int argc, char* argv[]) {
	int pid = fork();

	if (pid == 0) {
		sleep(atoi(argv[1]) * 10);
		exit(0);
	}

	exit(0);
}

