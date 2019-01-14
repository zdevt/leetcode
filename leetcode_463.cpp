
/*
 * =========================================================================
 *
 *       FileName:  leetcode_463.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-17 16:48:56
 *  Last Modified:  2018-11-17 16:49:30
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

int islandPerimeter ( vector<vector<int>>& grid )
{

  int ret = 0;
  int h = grid.size();
  int w = grid[0].size();

  auto f = [&] ( int i, int j )
  {
    int n = 0;

    if ( i - 1 >= 0 && grid[i - 1][j] )
      n += 1;

    if ( i + 1 < h && grid[i + 1][j] )
      n += 1;

    if ( j - 1 >= 0 && grid[i][j - 1] )
      n += 1;

    if ( j + 1 < w && grid[i][j + 1] )
      n += 1;

    return 4 - n;
  };

  for ( int i = 0; i < h; ++i )
    for ( int j = 0; j < w; ++j )
      if ( grid[i][j] )
        ret += f ( i, j );

  return ret;
}


int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

