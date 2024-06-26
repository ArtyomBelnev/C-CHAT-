#pragma once
#pragma comment(lib, "ws2_32.lib")


//#define _WINSOCK_DEPRECATED_NO_WARNINGS 

using namespace std; 


#include <winsock2.h>
#include <iostream>
#include <string>
#include <vector>

bool ConnectToServer(std::string ServerAddress, std::string Port);

void sendMessage(std::string Message);


