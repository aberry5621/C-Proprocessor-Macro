// C-Proprocessor-Macro

# define prog 1

#include <iostream>
using namespace std;

#if(prog == 1)

int main() {
    
    // Hello World
    cout << "Hello, World!\n";
    
    return 0;
}

#elif(prog == 2)

int main() {
    
    // Goodbye World
    cout << "Goodbye, World!\n";
    
    return 0;
}
#endif
