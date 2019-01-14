
/*
 * =========================================================================
 *
 *       FileName:  leetcode_762.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-22 11:46:38
 *  Last Modified:  2018-11-22 11:47:10
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
#include <bitset>

int countPrimeSetBits ( int L, int R )
{
  int ret = 0;
  int cnt = 0;

  auto f = [] ( int v )
  {
    if ( v < 2 )
      return false;

    for ( int i = 2; i < v; ++i )
      if ( v % i == 0 )
        return false;

    return true;
  };

  for ( int i = L; i <= R; ++i )
  {
    bitset<32> b = i;
    cnt = b.count();

    if ( f ( cnt ) )
      ++ret;
  }


  return ret;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

