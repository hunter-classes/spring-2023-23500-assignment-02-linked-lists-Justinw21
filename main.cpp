#include <iostream>
#include "List.h"

int main()
{
    List *l = new List();
    std::cout << l->toString() << " " << l->length() << "\n";
    l->insert(0,"a");
    std::cout << l->toString() << " " << l->length() << "\n";
    l->insert(0,"b");
    l->insert(0,"c");
    l->insert(0,"d");
    std::cout << l->toString() << " " << l->length() << "\n";

    std::cout << l->contains("a") << "\n"; // 1
    std::cout << l->contains("e") << "\n"; // 0

    l->destructor();
    std::cout << l->toString() << " " << l->length() << "\n";


    //remove
    //l->remove(1);
    //std::cout << l->toString() << " " << l->length() << "\n";
    //destructor
    


  /*
  try {
    l->insert(10,"x");
  } catch (std::exception e){
    std::cout << "Insert x didn't work\n";
  }
  std::cout << l->toString() << "\n";
  l->insert(2,"inserted at 2");
  std::cout << l->toString() << "\n";
  l->insert(5,"inserted at end");
  std::cout << l->toString() << " " << l->length() << "\n";
  */
    return 0;
}