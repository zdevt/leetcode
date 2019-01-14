
/*
 * =========================================================================
 *
 *       FileName:  leetcode_169.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-22 14:03:54
 *  Last Modified:  2018-11-22 14:04:07
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

int majorityElement ( vector<int>& nums )
{
  int len = nums.size();
  int cnt = 1;
  int p = 0;

  for ( int i = 1; i < len; ++i )
  {
    if ( nums[p] == nums[i] )
      ++cnt;
    else
      --cnt;

    if ( 0 == cnt )
    {
      p = i;
      cnt = 1;
    }
  }

  return nums[p];
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

