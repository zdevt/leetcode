
/*
 * =========================================================================
 *
 *       FileName:  leetcode_942.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-23 16:10:18
 *  Last Modified:  2018-11-23 16:10:38
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

vector<int> diStringMatch ( string S )
{
  int N = S.size();
  vector<int> ret ( 0, N + 1 );
  S.push_back ( 'D' );

  int i = 0;
  int d = N;

  for ( int k = 0; k < N + 1; ++k )
  {
    if ( 'I' == S[k] )
      ret.push_back ( i++ );
    else
      ret.push_back ( d-- );
  }

  return ret;
}


int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

