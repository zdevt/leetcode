
/*
 * =========================================================================
 *
 *       FileName:  leetcode_566.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-19 15:48:50
 *  Last Modified:  2018-11-19 15:49:06
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

vector<vector<int>> matrixReshape ( vector<vector<int>>& nums, int r, int c )
{
  vector<vector<int>> ret;
  vector<int> temp;

  int w = nums[0].size();
  int h = nums.size();

  if ( w * h != r * c )
    return nums;

  for ( auto& e : nums )
    for ( auto& ee : e )
      temp.push_back ( ee );

  for ( int i = 0; i < r; ++i )
    ret.push_back ( { } );

  for ( int i = 0; i < r; ++i )
    for ( int j = 0; j < c; ++j )
      ret[i].push_back ( temp[i * c + j] );

  return ret;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

