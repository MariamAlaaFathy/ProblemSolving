#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node* removeNthFromEnd(Node* head, int n) {
    Node *prev = NULL, *curr = head, *start = NULL;
    while(curr!=NULL){
        n--;
        curr = curr->next;
        if(n<=0){
            if(start==NULL){
                start = head;
            }
            else{
                prev = start;
                start = start->next;
            }
        }
    }
    if(prev==NULL){
        return start->next;
    }
    prev->next = start->next;
    return head;
}
