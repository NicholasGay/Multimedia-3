#include "Headers.h"

void main(){

  sock = connectsock("127.0.0.1", "3001", "tcp");

  //Test(sock);       //Testing program
  //int packet = 1;
  send(sock,command,1500,0);

  while(1){
      recv(sock, msg,1500,0);
      printf("%s\n",msg);
  }



  
  
}
