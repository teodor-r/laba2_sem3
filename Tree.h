//
// Created by kuzin on 17.12.2021.
//

#ifndef HASH_TABLE_TREE_H
#define HASH_TABLE_TREE_H

using namespace std;

#include <string>
#include <stdlib.h>
#include <list>
#include "Dictionary.h"

template <class TElement>
class Node{
public:
    pair<std::string, TElement*> element;
    list<string> not_parents;
    Node<TElement> *parent;
    list<Node<TElement>*> childs;
    int curr_value;
    int curr_weight;
    int curr_volume;
    int destiny_of_val;
    bool isTerminal;

    Node(list<std::string> all_elements);
    Node(string& key, TElement* el,list<std::string> not_par,int curr_value, int curr_weigh,int curr_volume,Node<TElement> *p);
    ~Node();
};


template<typename TElement>
class Tree{
public:
    Node<TElement> *root;
    Dictionary<TElement> dict;
    Node<TElement> *mxv_terminal;
    Node<TElement> *mxvdestiny_terminal;
    int bckpck_weight;
    int bckpck_volume;
    int size;
    Tree();
    Tree(list<std::string> all_elements,const Dictionary<TElement> &dict);
    ~Tree();
    void NextNode(Node<TElement> *node,bool (*metrika)(TElement*,int,int,int,int));
    static bool SingleKTaskW(TElement *t2, int bckpck_weight, int bckpck_volume, int cur_weight, int cur_volume);// ограничение на вес
    static bool SingleKTaskV(TElement *t2, int bckpck_weight, int bckpck_volume, int cur_weight, int cur_volume);// ограничение на объём
    static bool MultiKTask(TElement *t2, int bckpck_weight, int bckpck_volume, int cur_weight, int cur_volume);
    void GenerateTree(bool (*metrika)(TElement*,int,int,int,int));
    void DeleteTree();
    void PrintAnswer(bool (*metrika)(TElement*,int,int,int,int));
    void DeleteNode(Node<TElement> *node);


};


#endif //HASH_TABLE_TREE_H
