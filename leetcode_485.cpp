
/*
 * =========================================================================
 *
 *       FileName:  leetcode_485.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-28 13:17:38
 *  Last Modified:  2018-11-28 13:17:50
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

int findMaxConsecutiveOnes ( vector<int>& nums )
{
  int tmp = 0;
  int i = 0;

  for ( auto& e : nums )
  {
    if ( e )
      ++i;

    tmp = max ( tmp, i );

    if ( !e )
      i = 0;
  }

  return tmp;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

