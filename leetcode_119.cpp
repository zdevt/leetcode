
/*
 * =========================================================================
 *
 *       FileName:  leetcode_119.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-24 10:01:36
 *  Last Modified:  2018-11-24 10:01:53
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

vector<int> getRow ( int rowIndex )
{
  vector<int> ret;

  if ( rowIndex == 0 )
    return { 1 };
  else if ( rowIndex == 1 )
    return { 1, 1 };

  vector<int> tmp;

  tmp = getRow ( rowIndex - 1 );

  ret.push_back ( 1 );

  int len = tmp.size();

  for ( int i = 0; i < len - 1; ++i )
    ret.push_back ( tmp[i] + tmp[i + 1] );

  ret.push_back ( 1 );

  return ret;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

