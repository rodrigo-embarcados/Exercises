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
    int level;
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
    n->level = 0;
    return n;
}

Node *get_min_node(Node *n)
{
    Node *p = NULL;
    while (n != NULL)
    {
        p = n;
        n = n->l;
    }
    return p;
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
            n->level = p->level + 1;
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
            n->level = p->level + 1;
            p->r = n;
        }
        else
        {
            add_node(p->r, n);
        }
    }
    else
    {
        free(n);
    }
}

void add(Tree *t, Node *n)
{
    if (t == NULL || n == NULL)
    {
        return;
    }
    if (t->root == NULL)
    {
        t->root = n;
        n->level = 0;
    }
    else
    {
        add_node(t->root, n);
    }
}

Node *search_node(Node *n, int key)
{
    if (n == NULL || n->key == key)
    {
        return n;
    }
    if (key < n->key)
    {
        return search_node(n->l, key);
    }
    else
    {
        return search_node(n->r, key);
    }
}

void update_levels(Node *node)
{
    if (node == NULL)
        return;
    node->level = (node->p) ? node->p->level + 1 : 0;
    update_levels(node->l);
    update_levels(node->r);
}

void remove_node(Tree *tree, Node *node_to_remove)
{
    if (node_to_remove == NULL)
    {
        return;
    }

    Node *parent = node_to_remove->p;
    Node *replacement = NULL;

    if (node_to_remove->l == NULL)
    {
        replacement = node_to_remove->r;
    }
    else if (node_to_remove->r == NULL)
    {
        replacement = node_to_remove->l;
    }
    else
    {
        Node *successor = get_min_node(node_to_remove->r);

        node_to_remove->key = successor->key;

        remove_node(tree, successor);
        return;
    }

    if (parent == NULL)
    {
        tree->root = replacement;
    }
    else if (parent->l == node_to_remove)
    {
        parent->l = replacement;
    }
    else
    {
        parent->r = replacement;
    }

    if (replacement != NULL)
    {
        replacement->p = parent;
    }

    update_levels(replacement ? replacement : parent);

    free(node_to_remove);
}

void write_tree_in_order(Node *n, FILE *save_file, bool *first)
{
    if (n == NULL)
    {
        return;
    }

    write_tree_in_order(n->l, save_file, first);

    if (*first)
    {
        fprintf(save_file, "%d (%d)", n->key, n->level);
        *first = false;
    }
    else
    {
        fprintf(save_file, " %d (%d)", n->key, n->level);
    }

    write_tree_in_order(n->r, save_file, first);
}

char *custom_strsep(char **cursor, char delim)
{
    if (cursor == NULL || *cursor == NULL)
    {
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
    FILE *read_file = fopen("L2Q3.in", "r");
    FILE *save_file = fopen("L2Q3.out", "w");
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
    bool first_line = true;

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
        bool is_add = true;

        while ((token = custom_strsep(&c, ' ')) != NULL)
        {
            if (*token == 'a')
            {
                is_add = true;
            }
            else if (*token == 'r')
            {
                is_add = false;
            }
            else
            {
                int value = atoi(token);

                if (is_add)
                {
                    add(t, create_node(value));
                }
                else
                {
                    Node *n = search_node(t->root, value);
                    if (n != NULL)
                    {
                        remove_node(t, n);
                    }
                    else
                    {
                        add(t, create_node(value));
                    }
                }
            }
        }

        if (!first_line)
        {
            fprintf(save_file, "\n");
        }
        first_line = false;

        bool first = true;
        write_tree_in_order(t->root, save_file, &first);
        destroy_tree(t);
    }

    fclose(read_file);
    fclose(save_file);
    return 0;
}