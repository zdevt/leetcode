
/*
 * =========================================================================
 *
 *       FileName:  leetcode_405.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-12-18 14:51:26
 *  Last Modified:  2018-12-18 14:51:39
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

string toHex ( int num )
{
  string s;
  string a = "0123456789abcdef";

  for ( int i = 0; i < 8; ++i )
  {
    s.push_back ( a[num & 0xf] );
    num >>= 4;

    if ( num == 0 )
      break;
  }

  reverse ( s.begin(), s.end() );
  //cout<<s;

  return s;
}
int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

