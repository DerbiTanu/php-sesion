#include <map>
#include<string>
#include<iostream>

namespace parser {
    double expr(bool);
    double term(bool);
    double prim(bool);
}

namespace lexer{
    enum class kind : char{
        name, number, end,
        plus='+', minus='-', mul='*', div='/', print=';', assign='=', ip='(', rp=')'

    };
number
    struct Token {
        kind kind;
        string string _value;
        double _value;
    };

    class Token_stream{
    public:
        Token(istream& s):ip{&s}, owns{false}, ct{kind :: end } {}
        Token(istream* p): ip{p}, owns{true}, ct{kind :: end } {}

        ~Token(){ close();}
