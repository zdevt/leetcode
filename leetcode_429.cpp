
/*
 * =========================================================================
 *
 *       FileName:  leetcode_429.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-20 14:24:59
 *  Last Modified:  2018-11-20 14:25:39
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
    int val = NULL;
    vector<Node*> children;

    Node() {}

    Node ( int _val, vector<Node*> _children )
    {
      val = _val;
      children = _children;
    }
};

class Solution
{
  public:
    vector<vector<int>> levelOrder ( Node* root )
    {
      vector<vector<int>> ret;

      if ( !root )
        return ret;

      vector<Node*> tmp;
      tmp.push_back ( root );

      ret.push_back ( {} );

      int c = 0;
      int e = 1;
      int i = 0;

      for ( ;; )
      {
        ret[i].push_back ( tmp[c]->val );

        for ( auto& e : tmp[c]->children )
          if ( e )
            tmp.push_back ( e );

        ++c;

        if ( c == e )
        {
          if ( e == tmp.size() )
            break;
          else
          {
            ++i;
            ret.push_back ( {} );
            e = tmp.size();
          }
        }
      }

      return ret;
    }
};

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

