//
// Created by Administrator on 2022/7/10.
//

#ifndef EPOLL_STUDY_WEB_SERVER_SOCKET_H
#define EPOLL_STUDY_WEB_SERVER_SOCKET_H
typedef struct SocketConfig{
    int domain;
    int type;
    int protocol;
    char * listen_ip;
    int listen_port;
} SocketConfig;
typedef struct SocketServer{

} SocketServer;
extern SocketConfig socketConfig;
#endif //EPOLL_STUDY_WEB_SERVER_SOCKET_H
