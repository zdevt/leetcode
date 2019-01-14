
/*
 * =========================================================================
 *
 *       FileName:  leetcode_872.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-22 11:24:34
 *  Last Modified:  2018-11-22 11:24:59
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
    bool leafSimilar ( TreeNode* root1, TreeNode* root2 )
    {
      function<string ( TreeNode* ) > f = [&] ( TreeNode * root )
      {
        string tmp;

        if ( !root )
          return tmp;

        if ( !root->left && !root->right )
          return to_string ( root->val );

        tmp = f ( root->left ) + f ( root->right );

        return tmp;
      };

      return f ( root1 ) == f ( root2 );
    }
};


int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

