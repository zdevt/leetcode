
/*
 * =========================================================================
 *
 *       FileName:  leetcode_575.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-20 14:34:21
 *  Last Modified:  2018-11-20 14:34:46
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

int distributeCandies ( vector<int>& candies )
{
  int ret = 0;

  int len = candies.size();

  unordered_set<int> tmp;

  for ( auto& e : candies )
    tmp.insert ( e );

  ret = ( tmp.size() > len / 2 ) ? len / 2 : tmp.size();

  return ret;
}


int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

