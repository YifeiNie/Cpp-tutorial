#include <iostream>
using namespace std;

class Accessable
{
    public:
        virtual void Print_name_A() = 0;
};

class Printable
{
    public:
        virtual void Print_name_B() = 0;

};

class Entity : Accessable, Printable
{
    private:
        string m_Name_A;
        string m_Name_B;
    public:
        // 构造函数
        Entity(const string& Name_A, const string& Name_B)
        : m_Name_A(Name_A),
        m_Name_B(Name_B)
        {
            cout << "Entity is created" << endl;
        }

        // 重写函数1（实现接口）
        void Print_name_A() override
        {
            cout << m_Name_A << endl;
        }
        // 重写函数2
        void Print_name_B() override
        {
            cout << m_Name_B << endl;
        }
    
};

int main()
{
    Entity* entity = new Entity("Entity sample A", "Entity sample B");
    entity->Print_name_B();
    entity->Print_name_A();
    
    delete entity;
    return 0;
}