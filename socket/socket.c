#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include "socket.h"

void socketServerListen(SocketConfig * config){
    int listen_socket = socket(config->domain, config->type, config->protocol);
    struct sockaddr_in listen_addr = {
            .sin_family=AF_INET,
            .sin_port=htons(config->listen_port),
            .sin_addr.s_addr=inet_addr(config->listen_ip)
    };
    bind(listen_socket, (sockaddr_in)&listen_addr, sizeof(listen_addr))
}