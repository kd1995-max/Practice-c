#include<stdio.h>                                                               
#include<stdlib.h>                                                              
                                                                                
struct node {                                                                   
        int val;                                                                
        struct node *next;                                                      
};                                                                              
                                                                                
static inline struct node* new_node(int val) {                                                
        struct node *new_node = (struct node*)malloc(sizeof(struct node *));    
        new_node->next = NULL;                                                  
        new_node->val = val;                                                    
                                                                                
        return new_node;                                                        
}                                                                               
                                                                                
static inline struct node* make_linked_list_loop() {                                          
        struct node *one = new_node(1);                                         
        struct node *two = new_node(2);                                         
        struct node *three = new_node(3);                                       
        struct node *four = new_node(4);                                        
        struct node *five = new_node(5);                                        
        struct node *six = new_node(6);                                         
        struct node *seven = new_node(7);                                       
                                                                                
        one->next = two;                                                        
        two->next = three;                                                      
        three->next = four;                                                     
        four->next = five;                                                      
        five->next = six;                                                       
        six->next = seven;                                                      
        seven->next = three;                                                    
                                                                                
        return one;                                                             
                                                                                
}   

static inline struct node* make_linked_list() {                                          
        struct node *one = new_node(1);                                         
        struct node *two = new_node(2);                                         
        struct node *three = new_node(3);                                       
        struct node *four = new_node(4);                                        
        struct node *five = new_node(5);                                        
        struct node *six = new_node(6);                                         
        struct node *seven = new_node(7);                                       
                                                                                
        one->next = two;                                                        
        two->next = three;                                                      
        three->next = four;                                                     
        four->next = five;                                                      
        five->next = six;                                                       
        six->next = seven;                                                      
                                                                                
        return one;                                                             
                                                                                
}   

