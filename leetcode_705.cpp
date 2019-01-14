
/*
 * =========================================================================
 *
 *       FileName:  leetcode_705.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-28 11:41:39
 *  Last Modified:  2018-11-28 11:42:04
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
#include <bitset>

class MyHashSet
{
  public:
    /** Initialize your data structure here. */
    MyHashSet()
    {

    }

    void add ( int key )
    {
      m_b[key] = 1;

    }

    void remove ( int key )
    {
      m_b[key] = 0;

    }

    /** Returns true if this set contains the specified element */
    bool contains ( int key )
    {
      return ( 1 == m_b[key] );
    }

    bitset<1000001> m_b;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * bool param_3 = obj.contains(key);
 */

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

