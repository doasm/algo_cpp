#include <iostream>
#include <random>

#include "algorithms/sort_algo.h"

void print_number(int (&array)[10], size_t size);
void generate_number(int (&array)[10], size_t size);

int main(int argc, char const *argv[])
{
    int array[10] = {7, 3, 1, 5, 2, 4, 8, 6, 9, 0};
    print_number(array, 10);
    doasm::SortAlgo sort(doasm::sort_algo_type::insert);
    sort.sort(array, 10);
    print_number(array, 10);
    return 0;
}

void print_number(int (&array)[10], size_t size) {
    for (size_t i = 0; i < size; i++)
    {
        std::cout << array[i];
        if (i != size - 1)
        {
            std::cout << " ";
        }
    }
    std::cout << std:: endl;
}

void generate_number(int (&array)[10], size_t size)
{
    std::default_random_engine e;
}
