#include <malloc.h>
#include <sys/epoll.h>
#include "epoll.h"

#define MAXSIZE 1024

EpollInfo * e_create() {
    EpollInfo *epollInfo = (EpollInfo *) malloc(sizeof(EpollInfo));
    epollInfo->epollFd = epoll_create(MAXSIZE);
    return epollInfo;
}

void epollLoop(EpollInfo * epollInfo) {

}

void epollAppendEvent(EpollInfo * epollInfo, int listen_socket) {
    struct epoll_event ev;
    ev.events = EPOLLIN;
    ev.data.fd = listen_socket;
    if (epoll_ctl(epollInfo->epollFd, EPOLL_CTL_ADD, listen_socket, &ev) == -1) {
        perrorExit("sss");
    }
}