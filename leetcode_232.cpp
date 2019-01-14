
/*
 * =========================================================================
 *
 *       FileName:  leetcode_232.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-21 16:21:23
 *  Last Modified:  2018-11-21 16:21:52
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

#include <stack>
using namespace std;

class MyQueue
{
  public:
    /** Initialize your data structure here. */
    MyQueue()
    {

    }

    /** Push element x to the back of queue. */
    void push ( int x )
    {
      m_stack.push ( x );
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop()
    {
      while ( !m_stack.empty() )
      {
        m_stack_b.push ( m_stack.top() );
        m_stack.pop();
      }

      int ret = m_stack_b.top();
      m_stack_b.pop();

      while ( !m_stack_b.empty() )
      {
        m_stack.push ( m_stack_b.top() );
        m_stack_b.pop();
      }

      return ret;
    }

    /** Get the front element. */
    int peek()
    {
      while ( !m_stack.empty() )
      {
        m_stack_b.push ( m_stack.top() );
        m_stack.pop();
      }

      int ret = m_stack_b.top();

      while ( !m_stack_b.empty() )
      {
        m_stack.push ( m_stack_b.top() );
        m_stack_b.pop();
      }

      return ret;
    }

    /** Returns whether the queue is empty. */
    bool empty()
    {
      return m_stack.empty();
    }

    stack<int> m_stack;
    stack<int> m_stack_b;
};

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

