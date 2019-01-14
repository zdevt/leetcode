
/*
 * =========================================================================
 *
 *       FileName:  leetcode_706.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2018-11-23 17:09:23
 *  Last Modified:  2018-11-23 17:12:36
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

class MyHashMap
{
  public:
    /** Initialize your data structure here. */
    MyHashMap()
    {
      m_num = 0xffff;
      m_vv.resize ( m_num );
    }

    /** value will always be non-negative. */
    void put ( int key, int value )
    {
      int i = key / m_num;
      int j = key % m_num;

      if ( m_vv[i].size() == 0 )
      {
        m_vv[i].resize ( m_num, -1 );
        m_vv[i][j] = value;
      }
      else
        m_vv[i][j] = value;
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get ( int key )
    {
      int i = key / m_num;
      int j = key % m_num;

      if ( m_vv[i].size() == 0 )
        return -1;

      return m_vv[i][j];
    }

    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove ( int key )
    {
      int i = key / m_num;
      int j = key % m_num;

      if ( m_vv[i].size() != 0 )
        m_vv[i][j] = -1;
    }

  private:
    vector< vector<int> > m_vv;
    int m_num;
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = new MyHashMap();
 * obj.put(key,value);
 * int param_2 = obj.get(key);
 * obj.remove(key);
 */

int main ( int argc, char* argv[] )
{
  ( void ) argc;
  ( void ) argv;


  return 0;
}

