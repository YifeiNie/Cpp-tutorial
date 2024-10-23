#include <iostream>
#include <string>

using namespace std;

// 使用模板，他的范围仅限于下一个作用域内，在这个例子中，仅在Array类里生效
// 模板的定义是有顺序的，在后面实例化使用模板的类或调用使用模板的函数时要注意顺序
template<typename T, int N> 
class Array 
{
    private :
        T m_Array[N];
    public :
        int Get_size() const 
        {
            cout << "size is:" << N << endl;
            return N;
        }

};

template <typename T>
void Print(T value)
{
    cout << value << endl;
}

int main()
{
    // 需要注意的是，尖括号和前面的类名或者函数名是一体的
    Array<float, 5> array_A;
    Array<float, 5>* array_B = new Array<float, 5>;
    array_B->Get_size();
    Print<int>(5);
    Print<double>(2.32);
    delete array_B;
}

