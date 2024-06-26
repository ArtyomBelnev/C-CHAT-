#pragma once

#include <string>

using namespace System;
using namespace std;

string& Convert_String_to_string(String^ s, string& os);
String^ Convert_string_to_String(string& os, String^ s);
string& Convert_String_to_string(String^ s);
String^ Convert_string_to_String(string& os);
System::String^ Convert_char_to_String(char* ch);
char* Convert_String_to_char(System::String^ string);