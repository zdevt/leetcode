
/*
 * =========================================================================
 *
 *       FileName:  leetcode_496.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-20 14:03:56
 *  Last Modified:  2018-11-20 14:04:11
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

vector<int> nextGreaterElement ( vector<int>& findNums, vector<int>& nums )
{

  vector<int> ret;

  for ( auto& e : findNums )
  {
    auto i = nums.begin();

    for ( ; ; ++i )
      if ( *i == e )
        break;

    for ( ; i != nums.end(); ++i )
    {
      if ( *i > e )
      {
        ret.push_back ( *i );
        break;
      }
    }

    if ( i == nums.end() )
      ret.push_back ( -1 );
  }

  return ret;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

