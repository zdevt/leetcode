
/*
 * =========================================================================
 *
 *       FileName:  leetcode_18.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-13 13:48:24
 *  Last Modified:  2018-11-13 13:49:33
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

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;

  vector< vector<int> > ret;

  auto Check = [&] ( vector<int>& a )
  {
    for ( auto& e : ret ) {
      int len = e.size();

      for ( int i = 0; i < len; ++i )
      {
        if ( e[i] != a[i] )
          break;

        if ( i == len - 1 )
          return true;
      }
    }

    return false;
  };


  return 0;
}

