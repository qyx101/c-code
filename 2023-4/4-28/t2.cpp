#include <iostream>
using namespace std;
typedef int DataType;
class Stack
{
public:
	/*Stack(DataType* a, int n)
	{
		cout << "Stack(DataType* a, int n)" << endl;
		_array = (DataType*)malloc(sizeof(DataType) * n);
		if (NULL == _array)
		{
			perror("malloc申请空间失败!!!");
			return;
		}
		memcpy(_array, a, sizeof(DataType) * n);

		_capacity = n;
		_size = n;
	}*/

	/*Stack(int capacity = 4)
	{
		cout << "Stack(int capacity = 4)" << endl;
		_array = (DataType*)malloc(sizeof(DataType) * capacity);
		if (NULL == _array)
		{
			perror("malloc申请空间失败!!!");
			return;
		}

		_capacity = capacity;
		_size = 0;
	}*/

	void Init()
	{
		_array = (DataType*)malloc(sizeof(DataType) * 4);
		if (NULL == _array)
		{
			perror("malloc申请空间失败!!!");
			return;
		}

		_capacity = 4;
		_size = 0;
	}

	void Push(DataType data)
	{
		CheckCapacity();
		_array[_size] = data;
		_size++;
	}

	void Pop()
	{
		if (Empty())
			return;
		_size--;
	}

	DataType Top() { return _array[_size - 1]; }
	int Empty() { return 0 == _size; }
	int Size() { return _size; }

	void Destroy()
	{
		if (_array)
		{
			free(_array);
			_array = NULL;
			_capacity = 0;
			_size = 0;
		}
	}

	/*~Stack()
	{
		cout << "~Stack()" << endl;
		if (_array)
		{
			free(_array);
			_array = NULL;
			_capacity = 0;
			_size = 0;
		}
	}*/

private:
	void CheckCapacity()
	{
		if (_size == _capacity)
		{
			int newcapacity = _capacity * 2;
			DataType* temp = (DataType*)realloc(_array, newcapacity * sizeof(DataType));
			if (temp == NULL)
			{
				perror("realloc申请空间失败!!!");
				return;
			}
			_array = temp;
			_capacity = newcapacity;
		}
	}
private:
	DataType* _array;
	int _capacity;
	int _size;
};

int main()
{
	Stack s;
	s.Init();
	s.Push(1);
	s.Push(2);
	s.Push(3);
	s.Push(4);
}