#include "welcomeform.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace msclr::interop;
[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LibraryProject::welcomeform form;
	Application::Run(% form);
}
