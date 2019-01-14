
/*
 * =========================================================================
 *
 *       FileName:  leetcode_937.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-29 10:59:48
 *  Last Modified:  2018-11-29 11:00:11
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


vector<string> reorderLogFiles ( vector<string>& logs )
{
  vector<string> a;
  vector<string> n;

  auto IsAlpha = [] ( string s )
  {
    size_t pos;
    pos = s.find ( ' ' );

    if ( isalpha ( s[pos + 1] ) )
      return true;

    return false;
  };

  for ( auto& s : logs )
    if ( IsAlpha ( s ) )
      a.push_back ( s );
    else
      n.push_back ( s );

  stable_sort ( a.begin(), a.end(), [] ( string s1, string s2 )
  {
    s1.erase ( 0, s1.find ( ' ' ) );
    s2.erase ( 0, s2.find ( ' ' ) );
    return s1 < s2;
  } );

  a.insert ( a.end(), n.begin(), n.end() );

  #if 0

  for ( auto& s : a )
    cout << s << " | ";

  cout << endl;
  #endif

  return a;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

