
/*
 * =========================================================================
 *
 *       FileName:  leetcode_455.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-12-18 10:24:35
 *  Last Modified:  2018-12-18 10:24:54
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

int findContentChildren ( vector<int>& g, vector<int>& s )
{
  int ret = 0;

  sort ( g.begin(), g.end() );
  sort ( s.begin(), s.end() );

  int glen = g.size();
  int k = 0;

  for ( int i = 0; i < s.size(); ++i )
  {
    if ( s[i] >= g[k] )
    {
      ret += 1;
      k += 1;

      if ( k >= glen )
        break;
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

