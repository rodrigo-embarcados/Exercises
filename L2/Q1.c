//Equipe Rodrigo Rodrigues e Valder Santos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE_LINE 10000
#define MAX_NODES_PER_LINE 5000

typedef struct Node
{
    int key;
    struct Node *p;
    struct Node *l;
    struct Node *r;
    int height;
} Node;

typedef struct Tree
{
    Node *root;
} Tree;

Node *create_node(int key, Node *parent)
{
    Node *n = malloc(sizeof(Node));
    n->key = key;
    n->p = parent;
    n->l = NULL;
    n->r = NULL;
    n->height = 0;
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
    else
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
    }
    else
    {
        add_node(t->root, n);
    }
}

void atualizarAlturas(Node *n, int alturaPai)
{
    if (n == NULL)
        return;
    n->height = alturaPai;
    atualizarAlturas(n->l, alturaPai + 1);
    atualizarAlturas(n->r, alturaPai + 1);
}

void encontrarNoMaximo(Node *n, Node **noMaximo)
{
    if (n == NULL)
        return;

    if (*noMaximo == NULL)
    {
        *noMaximo = n;
    }
    else
    {
        if (n->key > (*noMaximo)->key)
        {
            *noMaximo = n;
        }
        else if (n->key == (*noMaximo)->key && n->height > (*noMaximo)->height)
        {
            *noMaximo = n;
        }
    }

    encontrarNoMaximo(n->l, noMaximo);
    encontrarNoMaximo(n->r, noMaximo);
}

Node *encontrarPredecessor(Node *no)
{
    if (no == NULL)
        return NULL;

    if (no->l != NULL)
    {
        Node *cursor = no->l;
        while (cursor->r != NULL)
        {
            cursor = cursor->r;
        }
        return cursor;
    }

    Node *pai = no->p;
    Node *filho = no;
    while (pai != NULL && filho == pai->l)
    {
        filho = pai;
        pai = pai->p;
    }
    return pai;
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
            return true;
        str++;
    }
    return false;
}

int main()
{
    FILE *read_file = fopen("L2Q1.in", "r");
    FILE *save_file = fopen("L2Q1.out", "w");
    if (read_file == NULL)
    {
        printf("Erro ao ler o arquivo de leitura\n");
        return 1;
    }
    if (save_file == NULL)
    {
        printf("Erro ao abrir arquivo de escrita\n");
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
        Node *inserted_nodes[MAX_NODES_PER_LINE];
        int n = 0;

        while ((token = custom_strsep(&c, ' ')) != NULL)
        {
            if (strlen(token) == 0)
                continue;
            int value = strtol(token, NULL, 10);
            Node *novo = create_node(value, NULL);
            add(t, novo);
            inserted_nodes[n++] = novo;
            if (n >= MAX_NODES_PER_LINE)
                break;
        }

        atualizarAlturas(t->root, 0);

        for (int i = 0; i < n; i++)
        {
            fprintf(save_file, "%d", inserted_nodes[i]->height);
            if (i < n - 1)
                fprintf(save_file, " ");
        }

        Node *max_node = NULL;
        encontrarNoMaximo(t->root, &max_node);

        fprintf(save_file, " max");
        if (max_node != NULL)
        {
            fprintf(save_file, " %d alt %d pred", max_node->key, max_node->height);

            Node *pred = encontrarPredecessor(max_node);
            if (pred != NULL)
            {
                fprintf(save_file, " %d", pred->key);
            }
            else
            {
                fprintf(save_file, " NaN");
            }
        }
        else
        {
            fprintf(save_file, " NaN alt NaN pred NaN");
        }

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