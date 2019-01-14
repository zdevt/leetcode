
/*
 * =========================================================================
 *
 *       FileName:  leetcode_204.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-13 09:03:12
 *  Last Modified:  2018-11-13 09:04:17
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
#include <numeric>

#include <math.h>

int countPrimes ( int n )
{
  if ( n <= 2 )
    return 0;

  char temp[n];
  memset ( temp, 1, n );

  temp[0] = 0;
  temp[1] = 0;

  int q = ( int ) sqrt ( n );

  for ( int i = 2; i <= q; ++i )
  {
    if ( temp[i] )
    {
      for ( int j = i * i; j < n; j += i )
        temp[j] = 0;
    }
  }

  return std::accumulate ( temp, temp + n, 0 );
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

