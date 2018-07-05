#include<iostream>
#include "cap27_1link.h"

using namespace std;

namespace vecInt{

vectorOfInt::vectorOfInt(int num, int size)
: head( NULL)
, tail( NULL )
{
  for (int i = 0; i < size; i++) {
    createnode(num);
  }
}

void vectorOfInt::createnode(int value)
{
  node *temp=new node;
  temp->data=value;
  temp->next=NULL;
  if(head==NULL)
  {
    head=temp;
    tail=temp;
    temp=NULL;
  }
  else
  {
    tail->next=temp;
    tail=temp;
  }
}

void vectorOfInt::display()
{
  node *temp=new node;
  temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<"\t";
    temp=temp->next;
  }
}

void vectorOfInt::display_i(int index)
{
  node *temp=new node;
  temp=head;
  int i = 0;
  while(temp!=NULL)
  {
    if (i == index) {
      cout<<temp->data;
    }
    temp=temp->next;
    i++;
  }
}

void vectorOfInt::insert_start(int value)
{
  node *temp=new node;
  temp->data=value;
  temp->next=head;
  head=temp;
}

void vectorOfInt::insert_position(int pos, int value)
{
  node *pre=new node;
  node *cur=new node;
  node *temp=new node;
  cur=head;
  for(int i=1;i<pos;i++)
  {
    pre=cur;
    cur=cur->next;
  }
  temp->data=value;
  pre->next=temp;
  temp->next=cur;
}

void vectorOfInt::delete_first()
{
  node *temp=new node;
  temp=head;
  head=head->next;
  delete temp;
}

void vectorOfInt::delete_last()
{
  node *current=new node;
  node *previous=new node;
  current=head;
  while(current->next!=NULL)
  {
    previous=current;
    current=current->next;
  }
  tail=previous;
  previous->next=NULL;
  delete current;
}

void vectorOfInt::delete_position(int pos)
{
  node *current=new node;
  node *previous=new node;
  current=head;
  for(int i=1;i<pos;i++)
  {
    previous=current;
    current=current->next;
  }
  previous->next=current->next;
}
}
