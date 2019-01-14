
/*
 * =========================================================================
 *
 *       FileName:  leetcode_257.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-20 15:48:14
 *  Last Modified:  2018-11-20 15:48:59
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

vector<string> binaryTreePaths ( TreeNode* root )
{
  vector<string> ret;
  vector<string> tmp;

  if ( !root )
    return ret;

  if ( !root->left && !root->right )
  {
    ret.push_back ( to_string ( root->val ) );
    return ret;
  }

  tmp = binaryTreePaths ( root->left );
  ret = tmp;
  tmp = binaryTreePaths ( root->right );
  ret.insert ( ret.end(), tmp.begin(), tmp.end() );

  for ( auto& e : ret )
    e = to_string ( root->val ) + "->" + e;

  return ret;
}


int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;

  return 0;
}

