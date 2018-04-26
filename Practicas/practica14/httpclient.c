//servers y sockets
//socket: read and receive data

/*#include <stdio.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <errno.h>

int main(int argc, char **argv){
    char *serverName = argv[1];
    struct hostent *serverIp;
    struct sockaddr_in server;
    char *msg = "GET index.html HTTP/1.0\r\n Host: 10.43.53.108 \r\n";
    char buffer[1000];
    int my_socket;
    
    serverIp = gethostbyname(serverName); //necesitamos transformar serverIp al type que recibe la funcion connect
    memcpy(&server.sin_addr, serverIp -> h_addr_list[0], serverIp -> h_length);
    server.sin_port = htons(443);
    server.sin_family = AF_INET;
    my_socket = socket (AF_INET, SOCK_STREAM, 0);

    if(connect(my_socket, (struct sockaddr *) &server, sizeof(server)) == 0){
        printf("CONNECTED \n");
        write(my_socket, msg, strlen(msg)*sizeof(char)); // lo que el servidor espera
        read(my_socket, buffer, sizeof(buffer));
        printf("Data %s \n", buffer);
    }else{
        printf("Error connecting %d \n", errno);
    }
    printf("The ip address is: %s\n", serverIp -> h_name);
}*/

#include <stdio.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <errno.h>


int main(int argc, char **argv){

char *serverName = argv[1];

struct hostent *serverIp;

struct sockaddr_in server;

char *msg = "GET HTTP/1.0\r\n Host: 10.43.53.108 \r\n";

char buffer[1000];

int my_socket;

serverIp = gethostbyname(serverName);

memcpy(&server.sin_addr, serverIp->h_addr_list[0], serverIp->h_length);

server.sin_port = htons(80);

server.sin_family = AF_INET;

my_socket=socket(AF_INET,SOCK_STREAM,0);



if(connect(my_socket,(struct sockaddr *)&server,sizeof(server)) == 0) {

printf("CONNECTED \n");

write(my_socket,msg,strlen(msg) * sizeof(char));

read(my_socket,buffer,sizeof(buffer));

printf("Data %s \n",buffer);

} else {

printf("Error connecting %d\n", errno);

}

printf("The ip address is: %s\n",serverIp->h_name);



}