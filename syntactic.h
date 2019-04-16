#ifndef SYNTACTIC_H
#define SYNTACTIC_H
#include <iostream>
#include <string>
#include <vector>
#include "reserved.h"
using namespace std;

struct Grammar
{
    string tokenString;
    string tokenType;
    string ID;
};

extern vector<Grammar> tok;

void Analyze();
void ReadToken(string& file);
void Instruccion(Grammar temp, vector<Grammar>::iterator& it);

bool mientras(Grammar temp, vector<Grammar>::iterator& it);
bool Expresion(Grammar temp, vector<Grammar>::iterator it,string& id);
bool Parentesis(Grammar temp, vector<Grammar>::iterator& it,string& id);



#endif // SYNTACTIC_H
