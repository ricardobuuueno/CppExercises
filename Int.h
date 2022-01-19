#ifndef Int_h
#define Int_h

class Int {
    int val;
public:
    Int(int i) : val{i} {}
    int getVal() { return val; }

    Int& operator ++ () {
        (*this).val++;
        return *this;
    }

    Int operator ++ (int i) {
        Int tmp = *this;
        ++(*this).val;
        return tmp;
    }

};

#endif