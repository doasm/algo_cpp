#include <iostream>

#include "sort_algo.h"

namespace doasm
{
    sort_algo_type SortAlgo::change_sort_algo(sort_algo_type algo_type)
    {
        this->type = algo_type;
        return algo_type;
    }

    void SortAlgo::sort(int *array, int size)
    {
        switch (this->type)
        {
        case sort_algo_type::insert:
            this->insertSort(array, size);
            break;
        default:
            break;
        }
    }

    void SortAlgo::insertSort(int *array, int size)
    {
        std::cout << "insert sort" << std::endl;
        for (int i = 1; i < size; i++)
        {
            int key = array[i];
            int j = i - 1;
            while (j >= 0 && array[j] > key)
            {
                array[j + 1] = array[j];
                j--;
            }
            array[j + 1] = key;
        }
    }
}
