#include "stdio.h"
#include "stdlib.h"
#include <netinet/in.h>

main() {
	int sock;
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock == -1) {
		perror("Sock error:");
		exit(1);
	}
	printf("\n sock: %d", sock);

}
