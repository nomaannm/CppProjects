#include "MainForm.h"
#include< iostream >

using namespace System;
using namespace System::Windows::Forms;


/*
*  In C++/CLI (a version of C++ for .NET), you would use the following syntax:
*  array<String^>^ arr = gcnew array<String^>{"string1", "string2", "string3"};
*  ' array<String^>^ ' is way to create an array of ' String^ ' (a .NET handle of String Object)
*/

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FirstCPPApp::MainForm form;
	// In C++/CLI, the % operator is called the "tracking reference" operator. It is similar to the & operator in standard C++ for creating a reference, but it is specifically used for managed types.
	Application::Run(%form);

}
