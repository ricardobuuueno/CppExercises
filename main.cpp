#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <string>
#include "foo.h"
#include "Int.h"

using namespace std;

int main()
{
    Foo<int> obj;
    obj.setValue(5);
    cout << endl << obj.getValue() << endl;

    Int iobj(10);
    cout << (++iobj).getVal() << endl;
    cout << (iobj++).getVal() << endl;
    cout << (iobj).getVal() << endl;

}


/*class Foo {
    int _bar;
public:
    Foo() {}
    Foo(const Foo& obj) {
        _bar = obj._bar;
    }

    void setBar(int newBar) { _bar = newBar; }
};

int main()
{
    Foo f1;
    f1.setBar(10);

    Foo f2 = f1;

    return 0;
}*/


/*class Base {
    int a;
public:
    Base() { cout << "Constructor" << endl; }
    ~Base() { cout << "Destructor" << endl; }
};

int main()
{
    cout << "placement new case:" << endl;
    char *memory = new char[10*sizeof(Base)];

    Base *obj1 = new (&memory[0]) Base();
    Base *obj2 = new (&memory[4]) Base();
    Base *obj3 = new (&memory[8]) Base();

    obj1->~Base();
    obj2->~Base();
    obj3->~Base();

    delete[] memory;
    
    return 0;
}*/

/*class Base {
public:
    virtual void fun() { cout << "Base fun" << endl; }
    virtual ~Base() { cout << "Base destructor" << endl; }
};

class Derived: public Base {
    virtual void fun() { cout << "Derived fun" << endl; }
    ~Derived() { cout << "Derived destructor" << endl; }
};

int main() 
{
    Base *b1 = new Base();
    Base *b2 = new Derived();

    b1->fun();
    b2->fun();

    delete b1;
    delete b2;

    return 0;
}*/


/*class Base {
    int b_var;
public:
    Base() {}
    Base(int var) : b_var(var) {}
};

class Derived: public Base {
    int d_var;
public:
    Derived() {}
    Derived(int a, int b) : Base(a), d_var(b) {}
};

int main()
{
    Derived d(1,2);

    return 0;
}*/


/*int main(int argc, char** argv) 
{
    vector<int> vec;

    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    vec.push_back(1);
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    vec.push_back(1);
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    vec.push_back(1);
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    vec.push_back(1);
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    vec.push_back(1);
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    vec.push_back(1);
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    vec.push_back(1);
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    vec.push_back(1);
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    vec.push_back(1);
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    return 0;
}*/


/*class Base {
    int b_var;
public:
    virtual void fun() { cout << "Base fun" << endl; }
};

class Derived: public Base {
    int d_var;
public:
    void fun() override { cout << "Derived fun" << endl; }
};


int main()
{
    Base *b = new Derived();
    b->fun();
    delete b;

    return 0;
}*/



/*struct Type {
    int value : 4 = 1;
    int second : 4 {2};
};


int main() 
{
    Type t;
    cout << t.value << endl;
    cout << t.second << endl;
}*/


/*tuple<int, char, string> fun(bool flg) 
{
    if (flg) {
        return make_tuple(1, 'x', "Ricardo");
    } else {
        return make_tuple(2, 'y', "Bueno");
    }
}


int main(int argc, char** argv)
{
    int num; 
    char code; 
    string name;

    tie(num, code, name) = fun(true);
    cout << num << " " << code << " " << name << endl;
    tie(num, code, name) = fun(false);
    cout << num << " " << code << " " << name << endl;

    return 0;
}*/


/*class Base {
    int _var;
public:
    Base() : _var{0} {}
    Base(int val) : _var(val) {}

    Base& operator = (const Base& rhs) {
        _var = rhs._var;
        return *this;
    }

    void print() {
        cout << _var << endl;
    }

};

int main(int argc, char** argv)
{
    Base b1(10);
    Base b2, b3, b4;

    b2 = b3 = b4 = b1;

    b1.print();
    b2.print();
    b3.print();
    b4.print();

    return 0;
}*/


/*class Mul {
    int _val;
public:
    Mul() {}
    Mul(int val) : _val{val} {}

    int operator () (int val) {
        return val*_val;
    }
};

int main(int argc, char** argv)
{
    Mul mul12(12);
    cout << mul12(2) << endl;
    cout << mul12(3) << endl;
    return 0;
}*/


/*void print(int val) { cout << val << endl; }

int main()
{
    vector<int> Vec;

    for (int i = 0; i < 5; i++) {
        Vec.push_back(i);
    }

    for (int i : Vec) {
        cout << i << endl;
    }

    for_each(Vec.begin(), Vec.end(), [](int i) {
        cout << i << endl;
    }); 

    for_each(Vec.begin(), Vec.end(), print);

    return 0;

}*/

/*#include <boost/version.hpp>
#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Boost version: " 
          << BOOST_VERSION / 100000
          << "."
          << BOOST_VERSION / 100 % 1000
          << "."
          << BOOST_VERSION % 100 
          << std::endl;
    return 0;
}*/

/*int main ()
{
    string s1 = "hi", s2 = "bye";
    swap(s1,s2);

    int a = 3, b = 7;
    swap(a, b);

    return 0;
}*/


 /*template<typename T>
void print(const T x) {
    static int var = 10;
    cout << ++var << endl;
}

int main()
{
    print(1);
    print('x');
    print(1.5);

    return 0;
}*/


/*class Base {
    int _x;
public:
    Base() {}
    Base(int x) : _x(x) {}
    //Base(const Base& obj) : _x{obj._x} {}
    //Base& operator = (const Base& rhs) { _x = rhs._x; return *this; }

    Base(const Base& obj) = delete;
    Base& operator = (const Base& rhs) = delete;

};


int main()
{
    Base b1(10);
    Base b2(20);

    b1 = b2;

    return 0;
}*/

/*struct myStruct {
    int x;
    int y;
    char c;
    bool b;
};

int main()
{
    myStruct s;
    s.x = 5; 
    s.y = 10;
    s.c = 'a';
    s.b = true;

    int *p = reinterpret_cast<int*>(&s);
    cout << *p << endl;
    p++;
    cout << *p << endl;
    p++;
    char *c = reinterpret_cast<char*>(p);
    cout << *c << endl;
    cout << *(reinterpret_cast<bool*>(++c)) << endl;


    return 0;
}*/


/*class Mango {
public:
    void eatMango() { cout << "eating mango" << endl; }
};

class Banana {
public:
    void eatBanana() { cout << "eating banana" << endl; }
};

int main(int argc, char** argv)
{
    Banana *b = new Banana();
    Mango *m = new Mango();
    Banana *newbanana = reinterpret_cast<Banana*>(m);
    newbanana->eatBanana();
    return 0;
}*/


/*void someFunc(int* x) {
    int k = 10;
    cout << k+*(x);
}

int main()
{
    const int x = 20;
    const int *px = &x;
    someFunc(const_cast<int*>(px));
    return 0;
}*/


/*int main(int argc, char** argv) 
{
    const int a1 = 10;
    const int *b1 = &a1;
    int *d1 = const_cast<int*>(b1);
    *d1 = 15;

    cout << a1 << endl;
    cout << *d1 << endl;

    return 0;
}*/



/*int main() 
{
    char c;
    int *p = (int*)&c;
    *p = 5;

    int* ip = static_cast<int*>(&c);

    return 0;
}*/


/*class Int {
    int x;
public:
    Int(int x=0) : x(x) {
        cout << "convertion constructor" << endl;
    }

    operator string () {
        cout << "convertion operator" << endl;
        return to_string(x);
    }

};

int main(int argc, char** argv)
{
    Int obj(3);

    string str1 = obj;
    obj = 20;

    string str2 = static_cast<string>(obj);
    obj = static_cast<Int>(30);

    return 0;
}*/


/*class Point {
    int x, y;
public:
    Point() : x{0}, y{0} {}
    Point(int x, int y) : x{x}, y{y} {}

    void Print() {
        cout << "x " << x << " y " << y << endl;
    }

    Point operator + (const Point &p2) {
        Point p;
        p.x = x+p2.x;
        p.y = y+p2.y;
        return p;
    }
};

int main()
{
    Point p1(2,3), p2(4,5);
    Point p3 = p1+p2;
    p3.Print();

    return 0;
}*/


/*class Base
{
    int x;
public:
    Base() {}
    Base(int x) : x{x} {}
    Base* operator & () {
        cout << "Bingo" << endl;
        return this;
    }
};


int main(int argc, char** argv) 
{
    Base b;
    Base *bp = &b;
    cout << bp << endl;
    cout << &b << endl;
}*/


/*int main()
{
    unsigned int i = 1;
    char *c = (char*)&i;
    if (*c)
        printf("Little endian\n");
    else
        printf("Big endian\n");

    return 0;
}*/


/*int myatoi(char* str)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; ++i) {
        res = res*10 + (str[i] - '0');
    }

    return sign*res;
}


int main(int argc, char** argv)
{
    char str1[] = "-1234";
    int val = myatoi(str1);
    printf("%d ", val);
    return 0;
}*/


/*class Temp
{
private:
    ~Temp() {}
    friend class Final;
};

class Final : virtual public Temp
{
public:
    void fun() { std::cout<<"In base"; }
};

class Derived : public Final {};

int main() {
    Derived obj;
    obj.fun();
}*/

/*class Base
{
    int x;
public:
    Base() {}
    Base(int x) : x{x} {}
    friend void fun(Base &);
};

void fun(Base &obj)
{
    cout << obj.x << endl;
    obj.x = 20;
    cout << obj.x << endl;
}

int main(int argc, char** argv)
{
    Base b(10);
    fun(b);
    return 0;
}*/


/*int compare(const void *p, const void *q)
{
    int l = *(const int*)p;
    int r = *(const int*)q;
    return l>r;
}

int main()
{
    int Arr[5] = {3,2,4,1,5};

    int ArrSize = sizeof(Arr) / sizeof(Arr[0]);
    int elementSize = sizeof(Arr[0]);

    qsort(Arr, ArrSize, elementSize, compare);

    cout << ArrSize << " " << elementSize << endl;

    for (int i=0; i<ArrSize; i++) {
        printf("%d\n", Arr[i]);
    }

    for (auto i : Arr) {
        printf("%d\n", i);
    }
}*/


/*int const n = 10;

class Base {
public:
    int b_var;
};

int main()
{
    Base *bp = new Base[n];
    delete[] bp;
    return 1;
}*/


/*int main(int argc, char** argv)
{
    cout << "Check the upper and lower limits of integer :" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "The maximum limit of int data type : " << numeric_limits<int>::max() << endl;
    cout << "The minimum limit of int data type : " << numeric_limits<int>::min() << endl;
    cout << "The maximum limit of unsigned int data type : " << numeric_limits<unsigned int>::max() << endl;
    cout << "The maximum limit of long long data type : " << numeric_limits<long long>::min() << endl;
    cout << "The minimum limit of long long data type : " << numeric_limits<long long>::min() << endl;
    cout << "The maximum limit of unsigned long long data type : " << numeric_limits<unsigned long long>::max() << endl;
    cout << "The Bits contain in char data type : " << numeric_limits<char>::digits << endl;
    cout << "The maximum limit of char data type : " << CHAR_MAX << endl;
    cout << "The minimum limit of char data type : " << CHAR_MIN << endl;
    cout << "The maximum limit of signed char data type : " << SCHAR_MAX << endl;
    cout << "The minimum limit of signed char data type : " << SCHAR_MIN << endl;
    cout << "The maximum limit of unsigned char data type : " << UCHAR_MAX << endl;
    cout << "The minimum limit of short data type : " << numeric_limits<short>::min() << endl;
    cout << "The maximum limit of short data type : " << numeric_limits<short>::max() << endl;
    cout << "The maximum limit of unsigned short data type : " << numeric_limits<unsigned short>::max() << endl;

    return 0;
}*/



/*int main(int argc, char** argv)
{
    cout << "Find Size of fundamental data types :" << endl;
    cout << "------------------------------------------" << endl;
    cout << "The sizeof(char) is : " << sizeof(char) << " bytes" << endl;
    cout << "The sizeof(short) is : " << sizeof(short) << " bytes" << endl;
    cout << "The sizeof(int) is : " << sizeof(int) << " bytes" << endl;
    cout << "The sizeof(long) is : " << sizeof(long) << " bytes" << endl;
    cout << "The sizeof(long long) is : " << sizeof(long long) << " bytes" << endl;
    cout << "The sizeof(float) is : " << sizeof(float) << " bytes" << endl;
    cout << "The sizeof(double) is : " << sizeof(double) << " bytes" << endl;
    cout << "The sizeof(long double) is : " << sizeof(long double) << " bytes" << endl;
    cout << "The sizeof(bool) is : " << sizeof(bool) << " bytes" << endl;

    return 0;
}*/



/*int main(int argc, char** argv)
{
    int x = 0, y = 0;
    cout << "Enter first number: " << endl;
    cin >> x;
    cout << "Enter second number: " << endl;
    cin >> y;
    cout << "Print the sum of two numbers : " << endl;
    cout << "-----------------------------------" << endl;
    cout << "The sum of " << x << " and " << y << " is : " << (x+y) << endl;

    return 0;
}*/


/*int main(int argc, char** argv)
{
    int n{};
    int sum{};

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n/2; i++)
        if (n%i == 0)
            sum += i;

    cout << ((sum==n) ? "perfect" : "not") << endl;

    return 0;
}*/



/*int main()
{
    int n{};

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n/2; i++)
        if (n%i == 0)
            cout << i << endl;

    cout << n << endl;

    return 0;
}*/

/*int main()
{
    int sum{};
    int product{1};
    int n{};

    do {
        cout << "enter a number: " << endl;
        cin >> n;
        
        if (n<0)
            break;

        sum += n;
        product *= n;
    } while (n > 0);

    cout << "sum= " << sum << endl;
    cout << "product= " << product << endl;

    return 0;
}*/


/*int main()
{
    const int max{100};

    int n{};
    int sum{};

    do {
        cout << "Enter a number: " << endl;
        cin >> n;
        sum += n;
        cout << "sum: " << sum << endl;
    } while (sum <= max);

    cout << "finished" << endl;

    return 0;
}*/


/*int main() 
{
    cout << "Enter a number: " << endl;

    int n{};
    cin >> n;

    int result{1};
    for (int i=1; i <= n; i++)
        result *= n;

    cout << "Result: " << result << endl;

    return 0;
}*/