
/*
 * =========================================================================
 *
 *       FileName:  leetcode_387.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019-01-07 16:56:16
 *  Last Modified:  2019-01-07 16:56:30
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

int firstUniqChar ( string s )
{
  int len = s.size();

  if ( 0 == len )
    return -1;

  for ( int i = 0; i < len; ++i )
  {
    if ( s.find_first_of ( s[i] ) == s.find_last_of ( s[i] ) )
      return i;
  }

  return -1;
}


int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

