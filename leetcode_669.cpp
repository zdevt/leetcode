
/*
 * =========================================================================
 *
 *       FileName:  leetcode_669.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-19 15:17:40
 *  Last Modified:  2018-11-19 15:18:13
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
    TreeNode* trimBST ( TreeNode* root, int L, int R )
    {
      if ( !root )
        return NULL;

      while ( root  && ( root->val > R || root->val < L ) )
      {
        if ( root->val > R )
          root = root->left;

        if ( !root )
          return NULL;

        if ( root->val < L )
          root = root->right;

        if ( !root )
          return NULL;
      }

      if ( ( root->val >= L ) && ( root->val <= R ) )
      {
        root->left = trimBST ( root->left, L, R );
        root->right = trimBST ( root->right, L, R );
      }

      return root;
    }
};

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

