
/*
 * =========================================================================
 *
 *       FileName:  leetcode_961.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019-01-04 16:31:32
 *  Last Modified:  2019-01-04 16:32:02
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

int repeatedNTimes ( vector<int>& A )
{
  map<int, int> m;

  for ( auto& e : A )
  {
    if ( m.find ( e ) != m.end() )
      return e;

    m.insert ( {e, 1} );
  }

  return 0;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

