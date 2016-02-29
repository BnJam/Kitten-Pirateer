// **********************************************
// Filename:   PositionMap.cpp
// Author:     Daniel Guenther
// Date:       2016-02-27
// Class:      CSCI 331
// Project:    Kitty Pirateer
// 
// Purpose: 
//    Container which holds positions of objects with respect to the tiles
// ************************************************

#include "../hdr/PositionMap.h"

PositionMap::PositionMap()
{
   // ensure we are aware that no elements have been created in the list
   m_head = NULL;
}

PositionMap::~PositionMap()
{
   // delete all elements in the list
   while(m_head != NULL){
      pos* temp = m_head;
      delete m_head->data;
      delete m_head;
      temp = temp->next;
   }
}

// inserts an element to the map at position x,y
void PositionMap::addElement(int x, y)
{
   m_num++;
   // traverse list to find next empty spot
   node* temp = head;
   while(temp->next != NULL){
      temp = temp->next;
   }
   // insert the data in this position
   temp->next = new pos;
}

// returns the number of elements in map
int PositionMap::size()
{
   return m_num;
}