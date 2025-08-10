#include <iostream>
#include <string>
using namespace std;

class parent {
private:
    int confi;
    string naming;


public:
    int access;

    parent(string nameParam, int b) {
        naming = nameParam;
        confi = b;
        if (confi>35) 
        {
            cout << naming << " You are the parent class of khanduri family and your age is";
            cout << confi << endl;
        }else{
            cout << naming << " You are the children class of khanduri family and your age is ";
            cout << confi << endl;
        }
    }

    int accessible(string first, int b) {
        cout << first << " you are in public of the parent class and this is your age ";
        cout << b << endl;
        return 0;
    }

    virtual void legal(){
        if (confi>=20){
            cout << naming << " you should study and enjoy life" << endl;
        }else{
            cout << confi << " this is not for you buddy" << endl;
        }
    }
};

class child : public parent{
    private:
    string childname;
    int childage;
    public:
    int child1;
    child(string nameParam, int b) : parent(nameParam, b) {
        childname = nameParam;
        childage = b;
        cout << childname << " you are in the constructor of the child class and this is your age ";
        cout << childage << endl;
        accessible(childname,childage);
    }
    void legal(){
        if (childage>=20){
            cout << childname << " you can drink and enjoy life" << endl;
        }else{
            cout << childname << " this is not for you buddy" << endl;
        }
    }
};

class student : public child{
    private:
    string studentname;
    int studentage;
    public:
    int student1;
    student(string nameParam, int b ) : child(nameParam, b) {
        studentname = nameParam;
        studentage = b;
        cout << studentname << " you are in the constructor of the student class and this is your age ";
        cout << studentage << endl;
        // accessible(studentname,studentage);
    }
    void legal(){
        if (studentage>=20){
            cout << studentname << " you should study and enjoy life" << endl;
        }else{
            cout << studentname << " this is not for you buddy" << endl;
        }
    }
};
int main(int argc, char const *argv[]) {
    // parent p("Mukesh",50);
    // parent m("tripti", 45);
    child a("Piyush", 25);
    // child b("paras", 19);
    // // a.confidential(...); // ❌ Not allowed since it's private
    //a.accessible("Piyush", 25); // ✅ Allowed
    // a.legal();
    // b.legal();
    // p.legal();
    // m.legal();
    student c("adi" , 21);
    c.legal();
    // child* children[2];
    // children[0]= &a;
    // children[0]-> legal();
    return 0;

}
