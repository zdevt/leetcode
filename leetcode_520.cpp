
/*
 * =========================================================================
 *
 *       FileName:  leetcode_520.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-28 15:06:45
 *  Last Modified:  2018-11-28 15:06:59
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

bool detectCapitalUse ( string word )
{
  string up = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string low = "abcdefghijklmnopqrstuvwxyz";

  if ( word.find_first_of ( low ) == string::npos
       || word.find_first_of ( up ) == string::npos )
    return true;

  if ( up.find ( word.front() ) != string::npos )
  {
    word.erase ( 0, 1 );

    if ( word.find_first_of ( up ) == string:: npos )
      return true;
  }

  return false;
}


int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

