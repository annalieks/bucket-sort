#ifndef BUCKET_SORT_BUCKET_SORT_H
#define BUCKET_SORT_BUCKET_SORT_H
#include <list>

class Bucket_sort
{
private:
    static const int SIZE = 100;
    std::list<float> arr_of_lists[SIZE] {};
    int collisions;
public:
    Bucket_sort(): collisions(0) {}
    void add_element(float val);
    void print_elements();
    int get_collisions();
};

#endif //BUCKET_SORT_BUCKET_SORT_H
