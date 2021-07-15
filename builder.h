#pragma once
#include <string>
#include <ostream>
#include <vector>
#include <tuple>
using namespace std;

class CodeBuilder
{
    string class_name;
    vector<tuple<string, string>> fields;
public:
    CodeBuilder(const string& class_name);

    CodeBuilder& add_field(const string& name, const string& type);

    friend ostream& operator<<(ostream& os, const CodeBuilder& obj);
};

