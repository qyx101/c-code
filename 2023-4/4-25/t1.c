#include <iostream>
using namespace std;

typedef int DataType;
struct Stack
{
    void Init(size_t capacity)
    {
        _dys = (DataType*)malloc(sizeof(DataType) * capacity);
        if (nullptr == _dys)
        {
            perror("malloc申请空间失败");
            return;
        }

        _capacity = capacity;
        _size = 0;
    }

    DataType* _dys;
    size_t _capacity;
    size_t _size;
};

int main()
{
    Stack st;
}