
/*
 * =========================================================================
 *
 *       FileName:  leetcode_401.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-12-18 11:35:27
 *  Last Modified:  2018-12-18 11:35:44
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

vector<string> readBinaryWatch ( int num )
{
  vector<string> vs;

  for ( int i = 0; i < 12; ++i )
  {
    bitset<4> h ( i );

    for ( int j = 0; j < 60; ++j )
    {
      bitset<6> m ( j );

      if ( h.count() + m.count() == num )
      {
        if ( j >= 10 )
          vs.push_back ( to_string ( i ) + ":" + to_string ( j ) );
        else
          vs.push_back ( to_string ( i ) + ":0" + to_string ( j ) );
      }
    }
  }

  return vs;
}
int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

