//
// Created by ASUS on 2022-07-09.
//
#include "../tool/tool.h"

#ifndef EPOLL_STUDY_WEB_SERVER_EPOLL_H
#define EPOLL_STUDY_WEB_SERVER_EPOLL_H
typedef struct EpollInfo{
    int epollFd;
} EpollInfo;

typedef struct EpollServer{
    EpollInfo * (*create)(void);
    void (* epollLoop)(EpollInfo);
} EpollServer;

extern EpollInfo * e_create();
extern void epollLoop(EpollInfo *);
#endif //EPOLL_STUDY_WEB_SERVER_EPOLL_H
