
/*
 * =========================================================================
 *
 *       FileName:  leetcode_283.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-24 09:51:57
 *  Last Modified:  2018-11-24 09:52:13
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

void moveZeroes ( vector<int>& nums )
{
  int len = nums.size();

  for ( int i = len - 1; i >= 0; --i )
  {
    if ( 0 == nums[i] )
    {
      for ( int j = i; j < len - 1; ++j )
      {
        if ( nums[j + 1] != 0 )
        {
          nums[j] = nums[j + 1];
          nums[j + 1] = 0;
        }
        else
          break;
      }
    }
  }
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

