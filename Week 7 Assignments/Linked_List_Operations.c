#include <stdio.h>

#include <stdlib.h>

struct node {
  int id;
  int priority;
  struct node * next;
};

/*
   create_node : Create a new struct node e, with given id and priority as val.
   Return a pointer to e.
*/
struct node * create_node(int id, int val) {
  struct node * new_node;
  new_node = (struct node * ) malloc(sizeof(struct node));
  new_node -> id = id;
  new_node -> priority = val;
  new_node -> next = NULL;
  return new_node;
}

/*
   append : Append the given node e, to the start of the list list.
   Return the head of the list, which is now e.
*/
struct node * append(struct node * list, struct node * e) {
  if (list == NULL)
    list = e;
  else {
    e -> next = list;
  }
  return e;
}

/*
   search : Search for a node e in list, with given id.
   Return Return a pointer to e, if found. Return NULL otherwise.
*/
struct node * search(struct node * list, int id) {
  while (list != NULL) {
    if (list -> id == id)
      return list;
    list = list -> next;
  }
  return NULL;
}

/*
   change_priority : Change priority of element with given id (if found) to val.
*/
void change_priority(struct node * list, int id, int val) {
  struct node * e = search(list, id);
  if (e != NULL)
    e -> priority = val;
}

/*
   find_priority : Searches for an element with given id.
   Returns its priority if found, -1 otherwise.
*/
int find_priority(struct node * list, int id) {
  struct node * e = search(list, id);
  if (e != NULL)
    return e -> priority;
  return -1;
}

int main() {
  char op;
  int id, val;
  struct node * list = NULL;

  int flag = 1;
  do {
    scanf("%c ", & op);
    switch (op) {
    case 'A':
      scanf("%d %d", & id, & val);
      list = append(list, create_node(id, val));
      break;
    case 'S':
      scanf("%d", & id);
      printf("%d %d\n", id, find_priority(list, id));
      break;
    case 'C':
      scanf("%d %d", & id, & val);
      change_priority(list, id, val);
      break;
    case 'E':
      flag = 0;
    }
  } while (flag == 1);
  return 0;
}
