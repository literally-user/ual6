#include <kernel/types.h>
#include <kernel/stat.h>
#include <user/user.h>

int main(void) {
	printf("\e[1;1H\e[2J");
	exit(0);
}
