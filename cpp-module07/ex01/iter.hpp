#ifndef ITER_H
#define ITER_H

template <typename T> void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T> T min(T &a, T &b)
{
    return a > b ? b : a;
}
template <typename T> T max(T &a, T &b)
{
    return a < b ? b : a;
}


template <typename T> void iter(T *array, unsigned int n,void (*f)(T &))
{
    for (unsigned int i = 0; i < n; i++)
        f(array[i]);
}


#endif // !UTILS_H