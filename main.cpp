#include <iostream>
#include "Dictionary.cpp"
#include "Item.cpp"
#include "string"
#include "Tree.cpp"
#include "Menu.cpp"

int main() {


    int check = 1;
    while (check) {
        switch (VAR) {
            case (1): {
                check = dialog();
                break;
            }
            case (2): {
                check = dialog();
                break;
            }
            case (3): {
                std::cout << "Complex numbers are compared modulo" << std::endl;
                std::cout << "Input it like a b (=a + bi)" << std::endl;
                check = dialog();
                break;
            }
            case (4): {
                check = dialog();
                break;
            }
        }
    }

    /*
    Item *t1 = new Item("mango",1,2,3);
    Item *t2 = new Item("apple",1,2,3);
    Item *t3 = new Item("null",1,1,0);
    Item *t4 = new Item("gabella",10,10,10);
    Item *t5 = new Item("mouse",11,11,6);
    Dictionary<Item> d(5);
    d.Add(t1->name, t1);
    d.Add(t2->name, t2);
    d.Add(t3->name, t3);
    d.Add(t4->name, t4);
    d.Add(t5->name, t5);
    d.Print();
    Tree<Item> tree(d.GetListKeys(),d);
    tree.bckpck_weight = 22;
    tree.bckpck_volume = 22;
    bool (*ptrSingleKTaskW)(Item *t, int bckpck_weight, int bckpck_volume,int cur_weight, int cur_volume);
    bool (*ptrSingleKTaskV)(Item *t, int bckpck_weight, int bckpck_volume,int cur_weight, int cur_volume);
    bool (*ptrMultiKTask)(Item *t, int bckpck_weight, int bckpck_volume,int cur_weight, int cur_volume);
    ptrSingleKTaskV = Tree<Item>::SingleKTaskV;
    ptrSingleKTaskW = Tree<Item>::SingleKTaskW;
    ptrMultiKTask = Tree<Item>::MultiKTask;
    tree.GenerateTree(ptrSingleKTaskW);
    tree.PrintAnswer(ptrSingleKTaskW);
    tree.DeleteTree();
    tree.GenerateTree(ptrSingleKTaskV);
    tree.PrintAnswer(ptrSingleKTaskV);
    tree.DeleteTree();
    tree.GenerateTree(ptrSingleKTaskW);
    tree.PrintAnswer(ptrMultiKTask);
    tree.PrintAnswer(nullptr);
    tree.DeleteTree();
     */
    return 0;
}
