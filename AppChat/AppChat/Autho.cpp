#include "Autho.h"
#include "Chat.h"
#include "Client.h"

#include "Converter.h"
#include "Validate.h"
#include "GlobalValues.h"

using namespace System;
using namespace System::Windows::Forms;

bool bIP = false;
bool bPORT = false;
bool bNICKNAME = false;

string IP;
string PORT;
string NICKNAME;


[STAThreadAttribute]
int main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	AppChat::Autho form;
	Application::Run(% form);
}


bool isBtnConnect() {
    if (bIP && bPORT && bNICKNAME) return true;
    else return false;
}

System::Void AppChat::Autho::btnConnect_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (ConnectToServer(IP, PORT) == false) {
        MessageBox::Show("ERROR TO CONNECT SERVER");
    }
    else {
        Chat^ chat = gcnew Chat(boxNickName->Text);
        NICKNAME += " ";

        sendMessage(NICKNAME + Open + ALL + ALLpassword);
        sendMessage(NICKNAME + Online);
        sendMessage(NICKNAME + List);

    this->Hide();
    chat->ShowDialog();
    }
}

System::Void AppChat::Autho::boxIP_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    String^ currentText = boxIP->Text;


    if (e->KeyChar == (char)Keys::Back && currentText->Length != 0)
    {
        currentText = currentText->Remove(currentText->Length - 1);

        if (currentText->Length == 0) {
            this->nameIP->ForeColor = System::Drawing::Color::White;
            bIP = false;
        }
    }

    if (e->KeyChar != (char)Keys::Back) {
        currentText += e->KeyChar;
    }

    string strNameIP;
    Convert_String_to_string(currentText, strNameIP);


    if (validIP(strNameIP) && currentText->Length != 0) {
        this->nameIP->ForeColor = System::Drawing::Color::Green;
        bIP = true;
        IP = strNameIP;

        if(isBtnConnect()) btnConnect->Enabled = true;
    }
    if (!validIP(strNameIP) && currentText->Length != 0) {
        this->nameIP->ForeColor = System::Drawing::Color::Red;
        bIP = false;

        if (!isBtnConnect()) btnConnect->Enabled = false;
    }
}

System::Void AppChat::Autho::boxPORT_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    String^ currentText = boxPORT->Text;

    if (e->KeyChar == (char)Keys::Back && currentText->Length != 0)
    {
        currentText = currentText->Remove(currentText->Length - 1);

        if (currentText->Length == 0) {
            this->namePORT->ForeColor = System::Drawing::Color::White;
            bPORT = false;
        }
    }

    if(e->KeyChar != (char)Keys::Back) {
        currentText += e->KeyChar;
    }

    string strNamePORT;
    Convert_String_to_string(currentText, strNamePORT);

    if (validPORT(strNamePORT) && currentText->Length != 0) {
            this->namePORT->ForeColor = System::Drawing::Color::Green;
            bPORT = true;
            PORT = strNamePORT;

            if (isBtnConnect()) btnConnect->Enabled = true;
    }
    if (!validPORT(strNamePORT) && currentText->Length != 0) {
            this->namePORT->ForeColor = System::Drawing::Color::Red;
            bPORT = false;

            if (!isBtnConnect()) btnConnect->Enabled = false;
    }    
}

System::Void AppChat::Autho::boxNickName_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    String^ currentText = boxNickName->Text;

    if (e->KeyChar == (char)Keys::Back && currentText->Length != 0)
    {
        currentText = currentText->Remove(currentText->Length - 1);

        if (currentText->Length == 0) {
            this->nameNickName->ForeColor = System::Drawing::Color::White;
            bNICKNAME = false;
        }
    }

    if (e->KeyChar != (char)Keys::Back) {
        currentText += e->KeyChar;
    }

    string strNameNICKNAME;
    Convert_String_to_string(currentText, strNameNICKNAME);

    if (validNICKNAME(strNameNICKNAME) && currentText->Length != 0) {
        this->nameNickName->ForeColor = System::Drawing::Color::Green;
        bNICKNAME = true;
        NICKNAME = strNameNICKNAME;

        if (isBtnConnect()) btnConnect->Enabled = true;
    }
    if (!validNICKNAME(strNameNICKNAME) && currentText->Length != 0) {
        this->nameNickName->ForeColor = System::Drawing::Color::Red;
        bNICKNAME = false;

        if (!isBtnConnect()) btnConnect->Enabled = false;
    }
}


  


