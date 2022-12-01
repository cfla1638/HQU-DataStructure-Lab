#ifndef H_AVLTREE
#define H_AVLTREE
#include "basictype.h"

typedef struct
{
    typedef book_entry_t elem_type;
    elem_type elem;
    imp_avl_tree left = nullptr;
    imp_avl_tree right = nullptr;
    int height = -1;
}avl_node, * imp_avl_tree;

class avl_tree
{
public:
    typedef avl_node::elem_type elem_type;
    avl_tree();
    avl_tree(const avl_tree &) = delete;
    avl_tree & operator=(const avl_tree &) = delete;

    void insert(elem_type);
    bool remove(elem_type);
    void show_all();
private:
    int Max(int, int);
    int height(imp_avl_tree tree);
    imp_avl_tree imp_insert(imp_avl_tree, elem_type);
    imp_avl_tree single_rotate_left(imp_avl_tree);
    imp_avl_tree single_rotate_right(imp_avl_tree);
    imp_avl_tree double_rotate_left(imp_avl_tree);
    imp_avl_tree double_rotate_right(imp_avl_tree);

    imp_avl_tree tree;
};

#endif