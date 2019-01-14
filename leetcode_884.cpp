
/*
 * =========================================================================
 *
 *       FileName:  leetcode_884.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-28 14:21:09
 *  Last Modified:  2018-11-28 14:21:51
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
#include <sstream>

vector<string> uncommonFromSentences ( string A, string B )
{

  vector<string> ret;
  unordered_multiset<string> us;
  stringstream ss;
  string s;
  string tmp = A + " " + B;

  ss.str ( tmp );

  while ( ss >> s )
    us.insert ( s );

  for ( auto& e : us )
  {
    if ( us.count ( e ) == 1 )
      ret.push_back ( e );
  }

  return ret;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

