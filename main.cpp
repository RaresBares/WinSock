#include <windows.h>
#include <stdio.h>



int main() {
    long rc;


    printf("Winsock gestartet!\n");
    SOCKET s = socket(AF_INET, SOCK_STREAM, 0);
    SOCKADDR_IN addr;
    memset(&addr, 0, sizeof(SOCKADDR_IN));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(12345);
    addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    connect(s, (SOCKADDR *) &addr, sizeof(SOCKADDR));

    return 0;
}

