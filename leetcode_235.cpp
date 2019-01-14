
/*
 * =========================================================================
 *
 *       FileName:  leetcode_235.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-23 14:48:05
 *  Last Modified:  2018-11-23 14:48:42
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
    TreeNode* lowestCommonAncestor ( TreeNode* root, TreeNode* p, TreeNode* q )
    {
      if ( !root || root == q || root == p )
        return root;

      TreeNode* pl = lowestCommonAncestor ( root->left, p, q );
      TreeNode* pr = lowestCommonAncestor ( root->right, p, q );

      if ( pl && pr )
        return root;

      return pl ? pl : pr;
    }
};

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

