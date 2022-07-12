#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include "socket.h"

int socketServerListen(SocketConfig *config) {
    int listen_socket = socket(config->domain, config->type, config->protocol);
    if (listen_socket < 0) {
        perrorExit("listen socket create error");
    }
    struct sockaddr_in listen_addr = {
            .sin_family=AF_INET,
            .sin_port=htons(config->listen_port),
            .sin_addr.s_addr=inet_addr(config->listen_ip)
    };
    int report = 1;
    if (setsockopt(listen_socket, SOL_SOCKET, SO_REUSEPORT, &report, sizeof(report)) != 0) {
        perrorExit("listen socket setsockopt error");
    }
    if (bind(listen_socket, (struct sockaddr *) &listen_addr, sizeof(listen_addr)) == -1) {
        perrorExit("listen socket bind error");
    }
    if (listen(listen_socket, MAX_CONNECTIONS) == -1) {
        perrorExit("listen socket listen error");
    }
    printf("listen successfully ip=%s,port=%d\r\n", config->listen_ip, config->listen_port);
    return listen_socket;
}