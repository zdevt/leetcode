
/*
 * =========================================================================
 *
 *       FileName:  leetcode_876.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-20 14:48:49
 *  Last Modified:  2018-11-20 14:49:20
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

struct ListNode
{
  int val;
  ListNode* next;
  ListNode ( int x ) : val ( x ), next ( NULL ) {}
};

ListNode* middleNode ( ListNode* head )
{
  ListNode* p = NULL;
  int len = 0;
  int mid = 0;

  for ( auto i = head; i != NULL; i = i->next, ++len );

  if ( len % 2 )
    mid = ( len + 1 ) / 2;
  else
    mid = ( len / 2 ) + 1;

  int i = 1;

  for ( p = head; i < mid; p = p->next, ++i );

  return p;
}

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

