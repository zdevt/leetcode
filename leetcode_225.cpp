
/*
 * =========================================================================
 *
 *       FileName:  leetcode_225.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-26 10:03:12
 *  Last Modified:  2018-11-26 10:03:35
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
#include <deque>

class MyStack
{
  public:
    /** Initialize your data structure here. */
    MyStack()
    {

    }

    /** Push element x onto stack. */
    void push ( int x )
    {
      m_q.push_back ( x );
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop()
    {
      int ret = m_q.back();

      m_q.pop_back();
      return ret;
    }

    /** Get the top element. */
    int top()
    {
      return m_q.back();
    }

    /** Returns whether the stack is empty. */
    bool empty()
    {
      return m_q.empty();
    }

    deque<int> m_q;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

