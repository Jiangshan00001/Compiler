#include "ast.hpp"

#include <iostream>

int main(int argc, char *argv[]) {
    
    const Expression *ast = parseAST();
    ast->print();

    std::cout << std::endl;
    
    return 0;
}
