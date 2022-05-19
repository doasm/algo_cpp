#ifndef SORT_ALGO_H
#define SORT_ALGO_H

namespace doasm
{
    enum class sort_algo_type
    {
        insert
    };

    class SortAlgo
    {
    private:
        sort_algo_type type;
        void insertSort(int *, int);

    public:
        SortAlgo(sort_algo_type algo_type) : type(algo_type) {}
        ~SortAlgo() {}
        inline sort_algo_type change_sort_algo(sort_algo_type algo_type);
        inline void sort(int *, int);
    };
}

#endif