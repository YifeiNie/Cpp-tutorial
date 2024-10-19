#include <iostream>

using namespace std;

class Entity{
public :
    float X = 0;
    float Y = 0;
     // Constructor
     // 类似java，使用this指针可以使得参数与成员重名

    Entity(float X, float Y){
        this->X = X;
        this->Y = Y;
        cout << "Create Entity" << endl;
    }
    // Destructior
    ~Entity(){
        cout << "Destroy Entity" << endl;
    }

    void Print(){
        cout << X << "," << Y << endl;
    }

};

void Function(){
    Entity e(1, 2);
    e.Print();
}

int main(){
    // 创建一个函数，里面的变量都是局部变量，放在栈中，因此下面这个函数执行完之后会自动调用~Entity()
    Function();
    return 0;

}