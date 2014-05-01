Enter file co#include<stdio.h>
typedef struct node {
 int data;
 node * next;
}mynode;

int swapNodes(mynode *head,int swapIndex1,int swapIndex2)
{ 
  int pos=0, foundIdx1=0, foundIdx2=0;
  int maxIndex = 0;
  mynode *tmpHead = head;  
  mynode *prev, prevIdx1,prevIdx2,nextIdx1,nextIdx2;

  prev=prevIdx1=prevIdx2=nextIdx1=nextIdx2=NULL;

  /* Validate the Indices */
  /* Assuming index start from 1 */
  if((swapIndex1<=0) || (swapIndex2<=0) )
    return -1;

  if((swapIndex1==swapIndex2))
    return 1;
  
  if(tmpHead== NULL) return -1;

  /* Traverse the nodes and find the prev next ptrs for the two nodes */
  while(tmpHead != NULL)
  {
    pos++
    if(pos == swapIndex1) 
    {
       prevIdx1 = prev;
       nextIdx1 = tmpHead->next;   
       nodeIdx1 = tmpHead;
       foundIdx1 = 1;
    }
    else if(pos == swapIndex2)
    {
       prevIdx2 = prev;
       nextIdx2 = tmpHead->next;
       nodeIdx2 = tmpHead;
       foundIdx2 = 1;

    }
    if(foundIdx1 && foundIdx2) break;
    prev = tmpHead;
    tmpHead = tmpHead->next;       
  }
  /* Swap the two nodes */
  if(foundIdx1 && foundIdx2)
  {
     prevIdx2->next = nodeIdx1;
     nodeIdx1->next = nextIdx2;
     prevIdx1->next = nodeIdx2;
     nodeIdx2->next = nextIdx1;  
     return 1;  

  }
   return -1;
}  

}
 ntents here
