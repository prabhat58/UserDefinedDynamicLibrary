#include<stdio.h>

struct link *createnode();
void enterdata(struct link *);
void display(struct link *);
void inserti(struct link *,struct link *,int);
struct link * deletes(struct link *);
struct link * deletel(struct link *);
int deletei(struct link *,int);
void singly_linked_list();
void bubble_sort();
void selection_sort();
void insertion_sort();
void quick_sort();
void sort(int [],int,int);
int partition(int [],int,int);

struct link
{
 int item;
 struct link *node;
};

struct stack
{
  int top;
  int item[7];
};
void stack();
void push(struct stack *);
void pop(struct stack *);
void displaystack(int,struct stack *);

struct queue
{
 int q[7];
 int front,rear,max;
};
void queue();
void insert(struct queue *);
void delete(struct queue *);
void displayq(struct queue *);

struct cque
{
 int a[7];
 int f,r,max;
};
void circular_queue();
void insertcq(struct cque *);
void deletecq(struct cque *);
void displaycq(struct cque *);

struct deque
{
 int a[7];
 int f,r,max;
};
void dequeue();
void insertdq(struct deque *,int);
void deletedq(struct deque *,int);
void displaydq(struct deque *);

struct tree
{
  struct tree *left;
  int data;
  struct tree *right;
};
void level_tree();
struct tree *createnodet();
void maketree(struct tree *,struct tree *,int,int);
int print_inorder(struct tree *);
int print_preorder(struct tree *);
int print_postorder(struct tree *);
struct tree * find_father(int,int,struct tree *);

void bst();
struct tree * maketreebst(struct tree *,int);
struct tree *del(struct tree *, int);

struct treea
{
  struct tree *left;
  int data;int height;
  struct tree *right;
};
void avl();
int balancefactor(struct treea *);
struct treea *createnodeavl();
int max(struct treea *,struct treea *);
void height(struct treea *);
struct treea * rotate_right(struct treea *);
struct treea * rotate_left(struct treea *);
struct treea * maketreeavl(struct treea *,int);
int print_inordera(struct treea *);
