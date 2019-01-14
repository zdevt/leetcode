
/*
 * =========================================================================
 *
 *       FileName:  leetcode_371.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-17 14:52:48
 *  Last Modified:  2018-11-17 15:14:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zt ()
 *   Organization:
 *
 * =========================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <signal.h>
#include <errno.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#include <iostream>
#include <memory>
#include <algorithm>
#include <vector>
#include <thread>
#include <mutex>
#include <map>
#include <list>
#include <string>
#include <functional>

int getSum ( int a, int b )
{
  if ( 0 == b )
    return a;

  return getSum ( a ^ b, ( a & b ) << 1 );
}

int getsum2 ( int a, int b )
{
  int c = a;

  while ( b != 0 )
  {
    c = a ^ b;
    b = ( a & b ) << 1;
    c = a;
  }

  return c;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

