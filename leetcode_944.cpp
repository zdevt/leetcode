
/*
 * =========================================================================
 *
 *       FileName:  leetcode_944.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-23 15:36:42
 *  Last Modified:  2018-11-23 15:37:02
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

int minDeletionSize ( vector<string>& A )
{
  int ret = 0;
  int len = A.size();

  if ( 0 == len )
    return ret;

  int slen = A[0].size();

  for ( int i = 0; i < slen; ++i )
  {
    for ( int j = 0; j < len - 1; ++j )
    {
      if ( A[j][i] > A[j + 1][i] )
      {
        ret += 1;
        break;
      }
    }
  }

  return ret;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

