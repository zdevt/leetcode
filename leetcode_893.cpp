
/*
 * =========================================================================
 *
 *       FileName:  leetcode_893.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-22 15:26:29
 *  Last Modified:  2018-11-22 15:29:13
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
#include <unordered_set>

int numSpecialEquivGroups ( vector<string>& A )
{
  int len = A[0].size();
  auto f = [&] ( string a )
  {
    string odd;
    string even;

    for ( int i = 0; i < len; ++i )
    {
      if ( i % 2 )
        odd.push_back ( a[i] );
      else
        even.push_back ( a[i] );
    }

    sort ( odd.begin(), odd.end() );
    sort ( even.begin(), even.end() );
    return odd + even;
  };

  unordered_set<string> us;

  for ( auto& e : A )
    us.insert ( f ( e ) );

  return us.size();
}



int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

