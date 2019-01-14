
/*
 * =========================================================================
 *
 *       FileName:  leetcode_806.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-16 14:17:16
 *  Last Modified:  2018-11-16 14:17:43
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

vector<int> numberOfLines ( vector<int>& widths, string S )
{

  if ( S.size() == 0 )
    return { 0, 0 };

  int sum = 0;

  int k = 1;

  int len = S.size();

  for ( int i = 0; i < len; ++i )
  {
    if ( widths[S[i] - 'a']  <= ( 100 - sum ) )
      sum += widths[S[i] - 'a'];
    else
    {
      sum = 0;
      sum += widths[S[i] - 'a'];
      ++k;
    }
  }

  return { k, sum};
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

