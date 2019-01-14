
/*
 * =========================================================================
 *
 *       FileName:  leetcode_559.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-13 16:27:35
 *  Last Modified:  2018-11-13 16:28:26
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

class Node
{
  public:
    int val;
    vector<Node*> children;

    Node() {}

    Node ( int _val, vector<Node*> _children )
    {
      val = _val;
      children = _children;
    }
};


int maxDepth ( Node* root )
{
  if ( !root )
    return 0;

  int ret = 0;

  for ( auto& e : root->children )
    ret = max ( ret, maxDepth ( e ) );

  return ret + 1;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

