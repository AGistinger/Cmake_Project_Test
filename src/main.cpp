//Polymorphism Challenge
#include "PolyMenu.h"
#include "PolyPrint.h"
#include "PolyUtil.h"
#include <iostream>
#include <vector>

int main() {
    
    //Display Menu
    char selection {};
    
    do
    {
        menu();
        selection = selection_option();
        execute_choice(selection);
    }
    while (selection != 'Q');
    
    return 0;
}
