
/*
 * =========================================================================
 *
 *       FileName:  leetcode_748.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-29 09:49:04
 *  Last Modified:  2018-11-29 09:49:25
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

string shortestCompletingWord ( string licensePlate, vector<string>& words )
{
  string lic;
  vector<string> vs;
  vs.reserve ( 1000 );

  for ( auto& c : licensePlate )
    if ( isalpha ( c ) )
      lic.push_back ( tolower ( c ) );

  auto f = [&] ( string s )
  {
    size_t pos;

    for ( auto& c : lic )
    {
      pos = s.find ( c );

      if ( pos == string::npos )
        return false;
      else
        s[pos] = '0';
    }

    return true;
  };

  for ( auto& s : words )
    if ( f ( s ) )
      vs.push_back ( s );

  stable_sort ( vs.begin(), vs.end(), [] ( string s1, string s2 )
  {
    return s1.size() < s2.size();
  } );

  return vs.front();
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

