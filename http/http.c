#include <stdio.h>
#include <sys/socket.h>
#include "../epoll/epoll.h"
#include "../socket/socket.h"

EpollServer epollServer = {
        .create=e_create
};

SocketServer socketServer = {
        .socketServerListen=socketServerListen
};

void httpStart(){
    EpollInfo * epollInfo = epollServer.create();
    printf("%d\r\n", epollInfo->epollFd);
    SocketConfig socketConfig = {
            .domain=AF_INET,
            .type=SOCK_STREAM,
            .listen_ip="0.0.0.0",
            .listen_port=9501,
    };
    int serverFd = socketServer.socketServerListen(&socketConfig);
}