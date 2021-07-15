#include "builder.h"

CodeBuilder::CodeBuilder(const string& class_name)
{
	this->class_name = class_name;
}

CodeBuilder& CodeBuilder::add_field(const string& name, const string& type)
{
	this->fields.push_back(make_tuple(name, type));
	return *this;
}

ostream& operator<<(ostream& os, const CodeBuilder& obj)
{
	os << "class " << obj.class_name << endl << "{\n";
	for (auto const & [name, type] : obj.fields ) 
	{
		os << "  " << type << " " << name << ";\n";
	}
	os << "};";
	return os;
}
