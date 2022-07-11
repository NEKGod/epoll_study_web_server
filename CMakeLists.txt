cmake_minimum_required(VERSION 3.0)
project(epoll_study_web_server C)

set(CMAKE_C_STANDARD 99)

add_executable(epoll_study_web_server main.c epoll/epoll.h epoll/epoll.c socket/socket.h socket/socket.c)
