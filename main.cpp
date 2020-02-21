#include <iostream>
#include "Bucket_sort.h"

int main()
{
    Bucket_sort sort;
    float element;

    std::cout << "Enter your numbers: ";
    while(std::cin >> element && element != 0)
        sort.add_element(element);

    std::cout << "Sorted elements: ";
    sort.print_elements();

    std::cout << "\nNumber of collisions: "
              << sort.get_collisions() << std::endl;
    return 0;
}