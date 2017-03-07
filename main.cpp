
/* 
 * File:   main.cpp
 * Author: Stephen Olszak <sao14@zips.uakron.edu>
 *
 * 
 */

#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include <fstream>

using namespace std;

class Value {
public:
    virtual ~Value(){}
};

class Null: public Value{
public:
    
};

class Bool: public Value{
public:
    bool val;
    Bool (bool b) : val(b) {}
};

class Num: public Value{
public:
    int val;
    Num (int v) : val(v){}
};

class StringType: public Value{
public:
    string s;
    StringType (string a) : s(a){} 
};

class Array: public Value{
public:
    vector<Value*> v;
    ~Array(){
 for(Value *v: *this)
 delete v;
   };
};
map<string, Value*> Map;
vector<pair<string,Value*> > pair;

class Object: public Value{
public:
    map<string, Value*> obj;
};


/*
class Parse{
public:
    string input;
    Null NullParse{
        
    };
    Bool BoolParse{
        
    };
    StringType StringParse{
        
    };
    Num NumParse{
        
    };
    Array ArrayParse{
        
    };
    Object ObjectParse{
        
    };
    
    Value C;
    switch(Input[0]){
        case 'n':
            C = NullParse(Input);
            break;
        case 't':
        case 'f':
            C = BoolParse(Input);
            break;
        case '0':
        case '1':
        case '2'
        case '3':
        case '4': 
        case '5': 
        case '6':
        case '7':
        case '8':
        case '9':
            C = NumParse;
            break;
        case '['
            C = ArrayParse;
            break;
        case '{'
             C = ObjectParse;
             break;
        case '"'
             C = StringParse;
             break;                            
    }
    return C;
   
    
   
    /*
 the algorithm for parse is
take in an input text as a parameter
look at the first character
depending on what it is, 
send off the string 
to a specific parser 
(Objectparse, arrayParse, 
 Numparse, Boolparse etc)
           
};
*/
 

/*
 * 
 */
int main() {
     //string json = "{test : ing}";
    //Parse(json);
    //Value *Doc = Parse();
    //delete Doc;
    return 0;
}

