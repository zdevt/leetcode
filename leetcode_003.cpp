
/*
 * =========================================================================
 *
 *       FileName:  003.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-07-06 11:36:57
 *  Last Modified:  2018-07-06 11:49:41
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


int FindMaxSubStr ( std::string s )
{
  if ( 0 == s.size() )
    return 0;

  std::map<char, int> d;
  int res = 0;
  int temp = 0;
  int pos = 0;

  for ( uint32_t i = 0; i < s.size(); ++i )
  {
    auto iter = d.find ( s[i] );

    if ( iter != d.end() && iter->second >= pos )
      pos = iter->second + 1;

    temp = i - pos + 1;

    if ( iter != d.end() )
      iter->second = i;
    else
      d.insert ( {s[i], i} );
    res = res > temp ? res : temp;
  }

  return res;
}


int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;

  printf ( "fmss..%d \n", FindMaxSubStr ( "sssccakk" ) );
  printf ( "fmss..%d \n", FindMaxSubStr ( "pwwkew" ) );

  return 0;
}

