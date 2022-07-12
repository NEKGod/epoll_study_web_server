//
// Created by Administrator on 2022/7/10.
//
#include "../tool/tool.h"

#ifndef EPOLL_STUDY_WEB_SERVER_SOCKET_H
#define EPOLL_STUDY_WEB_SERVER_SOCKET_H
#define MAX_CONNECTIONS 1024
typedef struct SocketConfig{
    int domain;
    int type;
    int protocol;
    char * listen_ip;
    int listen_port;
} SocketConfig;
typedef struct SocketServer{
    int (*socketServerListen)(SocketConfig * config);
} SocketServer;


extern int socketServerListen(SocketConfig * config);
#endif //EPOLL_STUDY_WEB_SERVER_SOCKET_H
