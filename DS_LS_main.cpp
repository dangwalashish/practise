#include <iostream>

using namespace std;

typedef struct node
{
    int data;
    node *next;
    node():data(-1),next(NULL){};
};

class Single_List
{
public:
    bool insert();
};
