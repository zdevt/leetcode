
/*
 * =========================================================================
 *
 *       FileName:  leetcode_812.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-22 09:03:57
 *  Last Modified:  2018-11-22 09:04:38
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

#include <math.h>
using namespace std;
/*
 s=0.5*(aXbY+bXcY+cXaY-aXcY-cXbY-bXaY)
 */
double largestTriangleArea ( vector<vector<int>>& points )
{
  double ret = 0.0;

  for ( auto& a : points )
    for ( auto& b : points )
      for ( auto& c : points )
        ret = max ( ret, 0.5 * fabs ( a[0] * b[1] + b[0] * c[1] + c[0] * a[1] - a[0] * c[1] - c[0] * b[1] - b[0] * a[1] ) );

  return ret;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

