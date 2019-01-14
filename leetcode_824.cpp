
/*
 * =========================================================================
 *
 *       FileName:  leetcode_824.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-26 11:32:10
 *  Last Modified:  2018-11-26 11:32:36
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
#include <sstream>

string toGoatLatin ( string S )
{
  string ret;

  if ( S.size() == 0 )
    return ret;

  stringstream ss ( S );
  string s;

  vector<string> tmp;

  while ( ss >> s )
    tmp.push_back ( s );

  string vowle = "aeiouAEIOU";
  auto f = [&] ( string& s )
  {
    char c = s[0];

    if ( string::npos == vowle.find ( c ) )
    {
      s.erase ( 0, 1 );
      s.push_back ( c );
    }

    s += "ma";
  };

  int i = 1;

  for ( auto& e : tmp )
  {
    f ( e );

    for ( int k = 0; k < i; ++k )
      e.push_back ( 'a' );

    ++i;
    ret += e + ' ';
  }

  ret.pop_back();

  return ret;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

