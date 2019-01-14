
/*
 * =========================================================================
 *
 *       FileName:  leetcode_557.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-13 17:10:17
 *  Last Modified:  2018-11-14 09:24:38
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

string reverseWords ( string s )
{
  string ret;
  string space = " ";

  if ( s.size() == 0 )
    return s;

  size_t fd = s.find ( space );
  size_t old = 0;
  string temp;

  if ( string::npos == fd )
  {
    reverse ( s.begin(), s.end() );
    return s;
  }

  s += space;

  while ( fd != string::npos )
  {
    temp = s.substr ( old, fd - old );
    old = fd + 1;
    fd = s.find ( space, fd + 1 );
    reverse ( temp.begin(), temp.end() );
    ret += temp;
    ret += space;
  }

  ret.back() = '\0';

  return ret;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;

  cout << reverseWords ( "test check out git" ) << endl;

  return 0;
}

