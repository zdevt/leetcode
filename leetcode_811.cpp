
/*
 * =========================================================================
 *
 *       FileName:  leetcode_811.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-17 09:02:56
 *  Last Modified:  2018-11-19 13:22:49
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
#include <sstream>

using namespace std;

#include <unordered_map>


vector<string> subdomainVisits ( vector<string>& cpdomains )
{
  int len = cpdomains.size();

  if ( 0 == len )
    return { };

  vector<string> ret;

  unordered_map<string, int> msi;

  auto f = [&] ( string s, int num )
  {
    auto i = msi.find ( s );

    if ( i != msi.end() )
      i->second += num;
    else
      msi.insert ( { s, num} );
  };

  int num;

  string s;

  string d;

  size_t pos = 0;

  for ( auto& e : cpdomains )
  {
    stringstream ss ( e );
    ss >> num >> s;

    do
    {
      pos = s.find ( '.', pos + 1 );
      d = s.substr ( pos + 1 );
      f ( d, num );
    }
    while ( pos != string::npos );
  }

  for ( auto& e : msi )
  {
    stringstream ss;
    ss << e.second << " " << e.first;
    ret.push_back ( ss.str() );
  }

  return ret;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;

  return 0;
}

