
/*
 * =========================================================================
 *
 *       FileName:  leetcode_973.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019-01-14 10:30:36
 *  Last Modified:  2019-01-14 10:31:00
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

vector<vector<int>> kClosest ( vector<vector<int>>& points, int K )
{
  vector<vector<int>> ret;

  multimap<int, vector<int> > mmap;

  int d = 0;

  for ( auto& v : points )
  {
    d = 0;
    d = v[0] * v[0] + v[1] * v[1];
    mmap.insert ( {d, v} );
  }

  int i = 0;

  for ( auto& e : mmap )
  {
    ret.push_back ( e.second );

    if ( ++i == K )
      break;
  }

  return ret;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

