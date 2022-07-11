//
// Created by ASUS on 2022-07-09.
//

#ifndef EPOLL_STUDY_WEB_SERVER_EPOLL_H
#define EPOLL_STUDY_WEB_SERVER_EPOLL_H
typedef struct EpollInfo{
    int epollFd;
} EpollInfo;

typedef struct EpollServer{
    EpollInfo * (*create)(void);
} EpollServer;

extern EpollServer epollServer;
extern EpollInfo * e_create();
#endif //EPOLL_STUDY_WEB_SERVER_EPOLL_H
