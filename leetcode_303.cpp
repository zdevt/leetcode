
/*
 * =========================================================================
 *
 *       FileName:  leetcode_303.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-29 11:25:52
 *  Last Modified:  2018-11-29 11:26:03
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

class NumArray
{
  public:
    NumArray ( vector<int> nums )
    {
      m_v = nums;
    }

    int sumRange ( int i, int j )
    {
      int tmp = 0;

      for ( int k = i; k <= j; ++k )
        tmp += m_v[k];

      return tmp;
    }

    vector<int> m_v;
};

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

