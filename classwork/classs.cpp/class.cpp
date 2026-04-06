#include<iostream>
using namespace std;
class emp
{
    public:
    virtual void sal(){
        cout<<"Salary of employee is 5000";
    }
    class manager:public emp;{
        public:
        void sal(){
            cout<<"Salary of manager is 10000";
        }
    };
}
int main()
{
    emp e;
    e.sal();
    cout<<endl;
    emp::manager m;
    m.sal();
}