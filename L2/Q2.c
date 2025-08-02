//Equipe Rodrigo Rodrigues e Valder Santos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE_LINE 10000

typedef struct Node
{
  int key;
  struct Node *p;
  struct Node *l;
  struct Node *r;
} Node;

typedef struct Tree
{
  Node *root;
} Tree;

Node *create_node(int key)
{
  Node *n = malloc(sizeof(Node));
  n->key = key;
  n->p = NULL;
  n->l = NULL;
  n->r = NULL;

  return n;
}

void destroy_node(Node *n)
{
  if (n == NULL)
  {
    return;
  }

  destroy_node(n->l);
  destroy_node(n->r);
  free(n);
}

Tree *create_tree()
{
  Tree *t = malloc(sizeof(Tree));
  t->root = NULL;

  return t;
}

void destroy_tree(Tree *t)
{
  if (t == NULL)
  {
    return;
  }
  destroy_node(t->root);
  free(t);
}

void add_node(Node *p, Node *n)
{
  if (n->key < p->key)
  {
    if (p->l == NULL)
    {
      n->p = p;
      p->l = n;
    }
    else
    {
      add_node(p->l, n);
    }
  }
  else if (n->key > p->key)
  {
    if (p->r == NULL)
    {
      n->p = p;
      p->r = n;
    }
    else
    {
      add_node(p->r, n);
    }
  }
  else
  {
    destroy_node(n);
  }
}

void add(Tree *t, Node *n)
{
  if (t == NULL && n == NULL)
  {
    return;
  }
  if (t->root == NULL)
  {
    t->root = n;
  }
  else
  {
    add_node(t->root, n);
  }
}

Node *get_min_node(Tree *t)
{
  if (t == NULL && t->root == NULL)
  {
    return NULL;
  }
  Node *p = NULL;
  Node *n = t->root;
  while (n != NULL)
  {
    p = n;
    n = n->l;
  }

  return p;
}

int sum_tree(Node *n)
{
  if (n == NULL)
  {
    return 0;
  }

  return sum_tree(n->l) + sum_tree(n->r) + n->key;
}

void write_tree_pre_order(Node *n, bool *is_first, FILE *save_file)
{
  if (n == NULL)
    return;

  int diff = sum_tree(n->r) - sum_tree(n->l);

  if (*is_first)
  {
    fprintf(save_file, "%d (%d)", n->key, diff);
    *is_first = false;
  }
  else
  {
    fprintf(save_file, " %d (%d)", n->key, diff);
  }

  write_tree_pre_order(n->l, is_first, save_file);
  write_tree_pre_order(n->r, is_first, save_file);
}

char *custom_strsep(char **cursor, char delim)
{
  if (cursor == NULL || *cursor == NULL)
  {
    printf("Bug, ponteiro NULL ou apontando para NULL");
    return NULL;
  }

  char *begin = *cursor;
  while (**cursor != '\0')
  {
    if (**cursor == delim)
    {
      **cursor = '\0';
      (*cursor)++;
      return begin;
    }
    (*cursor)++;
  }

  return NULL;
}

bool has_char(const char *str, const char target)
{
  while (*str != '\0')
  {
    if (*str == target)
    {
      return true;
    }
    str++;
  }

  return false;
}

int main()
{
  FILE *read_file = fopen("L2Q2.in", "r");
  FILE *save_file = fopen("L2Q2.out", "w");
  if (read_file == NULL)
  {
    printf("Erro ao ler o arquivo de leitura\n");
    return 1;
  }
  if (save_file == NULL)
  {
    printf("Erro ao ler o arquivo de salvamento\n");
    return 1;
  }

  char line[MAX_SIZE_LINE];

  while (fgets(line, MAX_SIZE_LINE, read_file) != NULL)
  {
    char *c = line;
    char *token = NULL;
    bool is_last_line = false;

    if (has_char(line, '\n'))
    {
      line[strlen(line) - 1] = ' ';
    }
    else
    {
      long size = strlen(line);
      line[size] = ' ';
      line[size + 1] = '\0';
      is_last_line = true;
    }

    Tree *t = create_tree();

    while ((token = custom_strsep(&c, ' ')) != NULL)
    {
      int value = strtol(token, NULL, 10);

      add(t, create_node(value));
    }

    bool is_first = true;
    write_tree_pre_order(t->root, &is_first, save_file);

    if (!is_last_line)
    {
      fprintf(save_file, "\n");
    }

    destroy_tree(t);
  }
  fclose(read_file);
  fclose(save_file);
  return 0;
}