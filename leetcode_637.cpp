
/*
 * =========================================================================
 *
 *       FileName:  leetcode_637.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-21 09:19:45
 *  Last Modified:  2018-11-21 09:20:21
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

struct TreeNode
{
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode ( int x ) : val ( x ), left ( NULL ), right ( NULL ) {}
};

class Solution
{
  public:
    vector<double> averageOfLevels ( TreeNode* root )
    {
      vector<double> ret;

      if ( !root )
        return ret;

      vector<TreeNode*> tmp;

      tmp.push_back ( root );

      int c = 0;
      int e = 1;

      double t = 0.0;
      int it = 0;

      for ( ;; )
      {
        t += tmp[c]->val;
        ++it;

        if ( tmp[c]->left )
          tmp.push_back ( tmp[c]->left );

        if ( tmp[c]->right )
          tmp.push_back ( tmp[c]->right );

        ++c;

        if ( c == e )
        {
          t /= it;
          it = 0;
          ret.push_back ( t );
          t = 0;

          if ( e == tmp.size() )
            break;
          else
            e = tmp.size();
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

