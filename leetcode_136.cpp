
/*
 * =========================================================================
 *
 *       FileName:  leetcode_136.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-21 09:03:17
 *  Last Modified:  2018-11-21 09:03:38
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

int singleNumber ( vector<int>& nums )
{
  int len = nums.size();

  for ( int i = 1; i < len; ++i )
    nums[0] ^= nums[i];

  return nums[0];
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

