#include "MyForm.h"
#include "MyTestForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	
	IndividualProject::MyForm form;
	Application::Run(% form);
	
	
}

System::Void IndividualProject::MyForm::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void IndividualProject::MyForm::button_StartTest_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyTestForm^ test_form = gcnew MyTestForm;
	test_form->Show();
	this->Hide();
	return System::Void();
}

System::Void IndividualProject::MyForm::buttonProgramInfo_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("��� ������������ ������� ��� ���������� � ��� �� �����������.\n\n��� ������� ����� ������� <<��������� ����>>.\n����� ������� ���������� � ����� �� ������� ����, ������� <<�����>>.\n\n����� ��.����� ��� ����������� ��������� - nikita.dolb@gmail.ru \n\n������ ��� ������������ ������.","����������");
	return System::Void();
}


