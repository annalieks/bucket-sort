#include "Bucket_sort.h"
#include <iostream>

// adds an element into the list
void Bucket_sort::add_element(float val)
{
    int index = (int)val; //number of list where elements'll be inserted

    auto list_iter = arr_of_lists[index].begin();
    while(list_iter != arr_of_lists[index].end() && val > *list_iter)
        list_iter++;
    arr_of_lists[index].insert(list_iter, val);

    if(arr_of_lists[index].size() > collisions)
        collisions = arr_of_lists[index].size();
}

// prints elements from all lists
void Bucket_sort::print_elements()
{
    for (int i = 0; i < SIZE; ++i)
        for (auto p = arr_of_lists[i].begin(); p != arr_of_lists[i].end(); ++p)
            std::cout << *p << " ";
}

// returns the number of collisions
int Bucket_sort::get_collisions()
{
    return collisions;
}