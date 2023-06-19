#include <stddef.h>
#include "ex10_ll_cycle.h"

int ll_has_cycle(node *head) {
    if (head == NULL || head->next == NULL) {
        return 0;
    } 
    node* slow_node = head;
    node* fast_node = head;
    while (1) {
        if (fast_node->next == NULL || fast_node->next->next == NULL) {
            return 0;
        }
        fast_node = fast_node->next->next;
        slow_node = slow_node->next;
        if (slow_node == fast_node) {
            return 1;
        }
    }

    /* TODO: Implement ll_has_cycle */
}
