
/*
 * =========================================================================
 *
 *       FileName:  leetcode_766.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-22 10:11:00
 *  Last Modified:  2018-11-22 10:11:14
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

bool isToeplitzMatrix ( vector<vector<int>>& matrix )
{

  int M = matrix.size();

  if ( M == 0 )
    return false;

  int N = matrix[0].size();

  cout << "m=" << M << " n=" << N << endl;

  for ( int i = 0; i < N; ++i )
  {
    int tmp = matrix[0][i];

    for ( int k = 0; k < M && i + k < N; ++k )
      if ( tmp != matrix[k][i + k] )
        return false;
  }

  for ( int i = 0; i < M; ++i )
  {
    int tmp = matrix[i][0];

    for ( int k = 0; k < N && i + k < M; ++k )
      if ( tmp != matrix[k + i][k] )
        return false;
  }

  return true;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

