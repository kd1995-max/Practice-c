#include<stdio.h>
#include<stdlib.h>
#include "../include_header.h"

int main() {
	struct node *head=make_linked_list_loop();
	struct node *slow=head;
	struct node *fast=head->next;

	while(slow != fast)
	{
		printf("%d\n",slow->val);
		slow = slow->next;
		fast = fast->next->next;
	}

	if(slow == fast)
	{
		printf("\nLoop identified\n");
	}

	return 0;
}
