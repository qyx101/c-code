//#include <iostream>
//using namespace std;
//
////class Date
////{
////public:
////    Date(int year, int month, int day)
////        : _year(year)
////        , _month(month)
////        , _day(day)
////    {
////  
////    }
////
////private:
////    int _year;
////    int _month;
////    int _day;
////};
////
////int main()
////{
////    Date d1(2,2,2);
////}
//
////class A
////{
////public:
////    A(int a)
////        :_a(a)
////    {}
////private:
////    int _a;
////};
////
////class B
////{
////public:
////    B(int a, int ref)
////     /*   :_aobj(a)
////        , _ref(ref)
////        , _n(10)*/
////    {
////        
////    }
////private:
////    A _aobj;      // 没有默认构造函数
////    int& _ref;    // 引用
////    const int _n; // const 
////};
////
////int main()
////{
////    B b1(1,1);
////}
//
//
//
//class A
//{
//public:
//	/*A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a = 0)" << endl;
//	}*/
//	A(int a)
//		:_a(a)
//	{
//		cout << "A(int a = 0)" << endl;
//	}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	// 初始化列表：对象的成员定义的位置
//	B(int a, int& ref)
//		:_ref(ref)
//		, _n(1)
//		, _x(2)
//		, _aobj(10)
//	{
//		//_n = 0;
//		//_ref = ref;
//	}
//
//private:
//	// 声明
//	A _aobj;	  // 没有默认构造函数
//
//	// 特征：必须在定义的时候初始化
//	int& _ref;	  // 引用
//	const int _n; // const
//
//	int _x = 1;  // 这里1是缺省值，缺省值是给初始化列表的
//};
//
//
// //这里会发现下面的程序会崩溃掉？这里就需要我们以后讲的深拷贝去解决。
//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity = 10)
//	{
//		_array = (DataType*)malloc(capacity * sizeof(DataType));
//		if (nullptr == _array)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//
//		_size = 0;
//		_capacity = capacity;
//	}
//
//	void Push(const DataType& data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//
//	~Stack()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//private:
//	DataType* _array;
//	size_t _size;
//	size_t _capacity;
//};
//
//class MyQueue
//{
//public:
//	MyQueue()
//	{}
//
//	MyQueue(int capacity)
//		:_pushst(capacity)
//		,_popst(capacity)
//	{}
//
//private:
//	Stack _pushst;
//	Stack _popst;
//};
//
//int main()
//{
//	// 对象整体定义
//	int n = 10;
//	//B bb1(10, n);
//	//B bb2(11, 2);
//
//	/*MyQueue q1;
//	MyQueue q2(100);*/
//	//B b1(1,n);
//	return 0;
//}