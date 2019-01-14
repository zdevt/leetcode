
/*
 * =========================================================================
 *
 *       FileName:  leetcode_844.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-12-18 11:15:31
 *  Last Modified:  2018-12-18 11:15:41
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

bool backspaceCompare ( string S, string T )
{
  string s;
  string t;
  auto f = [] ( string str )
  {
    string tmp;

    for ( auto& c : str )
    {
      if ( c != '#' )
        tmp.push_back ( c );
      else
      {
        if ( !tmp.empty() )
          tmp.pop_back();
      }
    }

    return tmp;
  };
  s = f ( S );
  t = f ( T );
  return s == t;
}
int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

