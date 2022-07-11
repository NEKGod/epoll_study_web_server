#include <stdio.h>
#include "epoll/epoll.h"

EpollServer epollServer = {
    .create=e_create
};
int main() {
    EpollInfo * epollInfo = epollServer.create();
    printf("%d\r\n", epollInfo->epollFd);
    return 0;
}