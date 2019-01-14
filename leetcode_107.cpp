
/*
 * =========================================================================
 *
 *       FileName:  leetcode_107.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-20 09:50:07
 *  Last Modified:  2018-11-20 11:08:01
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

vector<vector<int>> levelOrderBottom ( TreeNode* root )
{
  if ( !root )
    return {};

  vector<vector<int>> ret;

  vector<TreeNode*>  tmp;

  int e = 1;

  int c = 0;

  int i = 0;

  tmp.push_back ( root );

  ret.push_back ( {} );

  for ( ; ; )
  {
    ret[i].push_back ( tmp[c]->val );

    if ( tmp[c]->left )
      tmp.push_back ( tmp[c]->left );

    if ( tmp[c]->right )
      tmp.push_back ( tmp[c]->right );

    ++c;

    if ( c == e )
    {
      if ( e == tmp.size() )
        break;
      else
      {
        e = tmp.size();
        ret.push_back ( {} );
        ++i;
      }
    }
  }

  reverse ( ret.begin(), ret.end() );
  return ret;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

