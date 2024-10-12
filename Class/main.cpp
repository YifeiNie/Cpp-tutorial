#include <iostream>
#include <testhpp.hpp> //记得加后缀".hpp"
using namespace std;

// static的成员变量属于类本身，而非属于类的实例
// 因此如果尝试在某个类的实例中修改static的成员变量，则会导致全局的变化，即该类的其他实例的static成员也会同时被修改

class Test{
    // static成员变量无法在类内部进行定义（赋值），而必须在类外部使用::进行定义，如int test::a = 1;
    // 但是在c++17以后，可以使用inline关键字完成上面不允许的操作，如：
public:
    inline static int a = 1;
    static int b;
    int c = 3;
    
    static void Print(){
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        // 静态方法不能访问非静态变量，因为静态方法没有类实例，因此和非静态变量不在一个“域”，故下面的语句是错误的:
        // cout << "c = " << c << endl;
    }
};

int Test::b = 2;

int main(){
    Test test;
    cout << print_content << endl;
    cout << test.a << endl; 
    // 如test.a这样访问类静态成员变量也是不推荐的，还是因为static的成员变量属于类本身，而非属于类的实例，所以建议使用:
    cout << Test::a << endl; 
    Test::Print();
    return 0;

}
