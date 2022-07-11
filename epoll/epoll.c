#include <malloc.h>
#include <sys/epoll.h>
#include "epoll.h"

#define MAXSIZE 1024
EpollInfo * e_create(){
    EpollInfo * epollInfo = (EpollInfo *)malloc(sizeof(EpollInfo));
    epollInfo->epollFd = epoll_create(MAXSIZE);
    return epollInfo;
}

void appendEvent(){

}

