
/*
 * =========================================================================
 *
 *       FileName:  leetcode_788.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-28 13:55:44
 *  Last Modified:  2018-11-28 13:55:59
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

int rotatedDigits ( int N )
{

  int ret = 0;
  string s;
  size_t pos;

  for ( int i = 1; i <= N; ++i )
  {
    s = to_string ( i );
    pos = s.find_first_not_of ( "0182569" );

    if ( pos == string::npos )
    {
      if ( string::npos != s.find_first_of ( "2569" ) )
        ++ret;
    }
  }


  return ret;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

