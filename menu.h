#ifndef MENU_H
#define MENU_H

#include <string>

class Menu {
    public:
        bool menuEnd = false;
        
        void menu();
        
    private:
        void runChoice();
};

#endif
