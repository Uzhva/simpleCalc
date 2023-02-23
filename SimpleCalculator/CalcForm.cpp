#include "CalcForm.h"
#include <Windows.h>

using namespace SimpleCalculator;

void main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CalcForm form;
	Application::Run(% form);
}