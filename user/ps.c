#include <kernel/types.h>
#include <user/user.h>

int main(void) {
	if (fork() == 0) {
		procdump();
		exit(0);
	} else {
		wait(0);
	}

	exit(0);
}
