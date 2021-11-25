#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> myvector(5);  // 5 default-constructed ints

    int i = 0;

    std::vector<int>::reverse_iterator rit = myvector.rbegin();
    std::vector<int>::reverse_iterator rite = myvector.rend();

    for (; rit != myvector.rend(); ++rit)
        *rit = ++i;
    --rite;
    std::cout << "rend = " << *rite << std::endl;

    std::cout << "myvector contains:";
    
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        std::cout << ' ' << *it;
    
    std::cout << '\n';
    return 0;
}