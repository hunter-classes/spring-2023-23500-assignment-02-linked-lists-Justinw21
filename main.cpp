#include <iostream>
#include "List.h"

int main()
{
    List *l = new List();
    std::cout << l->toString() << " " << l->length() << "\n";

    //Both inserts, toString, and length
    l->insert("a");
    std::cout << l->toString() << " " << l->length() << "\n";
    l->insert("c");
    l->insert(1,"b");
    l->insert("d");
    std::cout << l->toString() << " " << l->length() << "\n";

    //Contains
    std::cout << l->contains("a") << "\n"; // 1
    std::cout << l->contains("b") << "\n"; // 1
    std::cout << l->contains("c") << "\n"; // 1
    std::cout << l->contains("d") << "\n"; // 1
    std::cout << l->contains("e") << "\n"; // 0
    
    //Remove
    l->remove(3);
    std::cout << l->toString() << " " << l->length() << "\n";
}