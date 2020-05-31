#ifndef CONTAINER_H
#define CONTAINER_H


template <typename T>
class Container
{
public:
    Container();
    virtual ~Container();
    void add(T object);
    int length();
    T& operator[](int);
    bool isEmpty();
    void clear();
protected:

private:
    int array_size = 0;
    T *ptr;
};

#endif // CONTAINER_H
