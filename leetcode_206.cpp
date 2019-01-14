
/*
 * =========================================================================
 *
 *       FileName:  leetcode_206.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-21 08:28:11
 *  Last Modified:  2018-11-21 08:41:20
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

ListNode* reverseList ( ListNode* head )
{
  if ( !head )
    return head;

  ListNode* p = head;
  ListNode* pn = p->next;
  ListNode* pnn = NULL;

  p->next = NULL;

  while ( pn )
  {
    pnn = pn->next;
    pn->next = p;
    p = pn;
    pn = pnn;
  }

  return p;
}


int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;

  return 0;
}

