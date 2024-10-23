#include <iostream>

using namespace std;

class Entity
{
    public :
        virtual string GetName()  // 使用virtual关键字使得其可以被重写
        {
            return "Entitiy";
        }
};

// 使用':'进行继承，继承后的对象可以访问父类对象所有非private成员
class Player : public Entity
{
    private: 
        string m_Name;
    public:
        Player(const string& name) 
            : m_Name(name)  // 使用初始化列表对成员进行初始化而不是在构造函数中，这相较于后者更加推荐因为其对const成员也有效
        {
            // do something
        }
        string GetName() override{ //使用override来标记重写的函数
            return m_Name;
        }
};

int main(){
    // 常见的实例化`Entity e`使用栈这种静态内存，由于其数据结构的特性，其内存分配由编译器和操作系统完成的
    // 下面这种实例化使用new关键字，使用堆这种动态内存，需要手动通过malloc，new，delete等关键字进行内存的分配，否则会出现内存泄漏
    Entity* e = new Entity();
    // 使用'.'访问普通对象成员，使用->访问指针对象成员
    cout << e->GetName() << endl;

    Player* p = new Player("Player_A");
    cout << p->GetName() << endl;

    delete e, p;

}