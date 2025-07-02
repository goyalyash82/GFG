/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
         Node* temp=head;
           int length=0;
           while(temp!=NULL){
               length++;
               temp=temp->next;
           }
        //   int nodeNumber=length-k;
        if(k>length) return -1;
           Node* temp2=head;
           int i=1;
           while(i<=(length-k)){
                temp2=temp2->next;
                i++;
           }
        return temp2->data;
    }
};