
/*
 * =========================================================================
 *
 *       FileName:  leetcode_883.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-19 11:55:04
 *  Last Modified:  2018-11-19 11:55:45
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

int projectionArea ( vector<vector<int>>& grid )
{
  int yx = 0;

  for ( auto& e : grid )
    for ( auto& ee : e )
      if ( ee != 0 )
        yx += 1;

  int zx = 0;

  for ( auto& e : grid )
    zx += *max_element ( e.begin(), e.end() );

  int n = grid.size();
  int zy = 0;
  int zymax = 0;

  for ( int i = 0; i < n; ++i )
  {
    zymax = 0;

    for ( auto& e : grid )
      zymax = max ( zymax, e[i] );

    zy += zymax;
  }

  return yx + zx + zy;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

