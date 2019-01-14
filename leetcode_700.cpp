
/*
 * =========================================================================
 *
 *       FileName:  leetcode_700.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-17 13:36:22
 *  Last Modified:  2018-11-17 13:36:55
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
    TreeNode* searchBST ( TreeNode* root, int val )
    {
      if ( !root || val == root->val )
        return root;

      TreeNode* p = root;

      while ( p )
      {
        if ( val > p->val )
          p = p->right;
        else if ( val < p-> val )
          p = p->left;
        else
          return p;
      }

      return NULL;
    }
};

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

