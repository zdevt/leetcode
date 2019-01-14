
/*
 * =========================================================================
 *
 *       FileName:  leetcode_821.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-15 17:01:46
 *  Last Modified:  2018-11-15 17:02:06
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

vector<int> shortestToChar ( string S, char C )
{
  vector<int> ret;
  vector<int> temp;

  int len = S.size();

  for ( int i = 0; i < len; ++i )
  {
    if ( C == S[i] )
      temp.push_back ( i );
  }

  for ( int i = 0; i < len; ++i )
  {
    int m = len + 1;

    for ( auto& e : temp )
      m = min ( m, abs ( e - i ) );

    ret.push_back ( m );
  }

  return ret;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

