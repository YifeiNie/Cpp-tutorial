#include <iostream>

using namespace std;

class Entity{
public :
    string GetName(){
        return "Entitiy";
    }
};

class Player : public Entity{
private: 
    string m_Name;
public:
    Player(const string& name){
        m_Name = name; 
    }
    string GetName(){
        return m_Name;
    }
};



int main(){
    // 常见的实例化`Entity e`使用栈这种静态内存，由于其数据结构的特性，其内存分配由编译器和操作系统完成的
    // 下面这种实例化使用new关键字，使用堆这种动态内存，需要手动通过malloc，new，delete等关键字进行操作
    Entity* e = new Entity();
    // 使用'.'访问普通对象成员，使用->访问指针对象成员
    cout << e->GetName() << endl;

    Player* p = new Player("Player_A");
    cout << p->GetName() << endl;

    delete e, p;

}