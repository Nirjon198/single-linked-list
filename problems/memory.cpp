using namespace std;
#include <iostream>
class StaticMemory{
    private:
    int count=0;
    public:
    void set_Count(){
        count++;
    }
    void get_Count(){
        cout<<count<<" ";
    }
};
int main(){
    StaticMemory s1;
    
    s1.set_Count();
    s1.get_Count();

}

