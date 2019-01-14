
/*
 * =========================================================================
 *
 *       FileName:  leetcode_389.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-26 11:03:38
 *  Last Modified:  2018-11-26 11:04:06
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


using namespace std;

char findTheDifference ( string s, string t )
{
  size_t pos;

  for ( auto& e : s )
  {
    pos = t.find ( e );
    t.erase ( pos, 1 );
  }

  return t.front();
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

