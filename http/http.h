#include "../socket/socket.h"
#include "../epoll/epoll.h"

#ifndef EPOLL_STUDY_WEB_SERVER_HTTP_H
#define EPOLL_STUDY_WEB_SERVER_HTTP_H
typedef struct HttpServer{
    void (*start)(void);
    void (*stop)(void);
} HttpServer;
extern void httpStart(void);
HttpServer httpServer = {
    .start=httpStart
};
#endif //EPOLL_STUDY_WEB_SERVER_HTTP_H
