#include <iostream>

using namespace std;

// 枚举类型也是一个类型（类比整型，浮点型），只是枚举型的变量的值只能是定义时的若干，比如下面例子的ERROR, WARNING, INFO
// 其中默认第一个（例子中是ERROR）为0，后面递增，，也可以自己定义
// 枚举类型必须是整形，比如int，usigned char等
enum Level : int {
    ERROR, WARNING, INFO
};

// 枚举类型里面的具体值不重要，而是通过枚举来有组织的定义一些变量用于判断或者什么别的操作

int main(){
    // 创建一个函数，里面的变量都是局部变量，放在栈中，因此下面这个函数执行完之后会自动调用~Entity()
    Level x = ERROR;
    cout << x << endl;

}