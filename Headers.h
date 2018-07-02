#include <stdio.h>
#include "connectsock.c"
#include "Test.c"
#include "File.c"

int sock;
char command[1500] = "CONNECT 6.0 http://kufstein2.lmt.ei.tum.de/short1/";
char GET[1500];
char msg[1500];