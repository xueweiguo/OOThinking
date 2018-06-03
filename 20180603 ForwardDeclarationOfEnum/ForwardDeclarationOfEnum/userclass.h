#ifndef USERCLASS_H
#define USERCLASS_H

class ImportantClass;

class UserClass
{
public:
    UserClass();
    ~UserClass();
    void doSomething();
private:
    ImportantClass* ip;
};

#endif // USERCLASS_H
