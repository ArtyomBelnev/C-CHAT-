#include "Add.h"
#include "Client.h"

#include "Converter.h"
#include "Validate.h"
#include "GlobalValues.h"

//using namespace std;


bool bNewRoom = false;
bool bNewPassword = false;

string NEWROOM;
string NEWPASSWROD;


bool isBtnCreate() {
    if (bNewRoom && bNewPassword) return true;
    else return false;
}

System::Void AppChat::Add::textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    String^ currentText = boxNewRoom->Text;

    if (e->KeyChar == (char)Keys::Back && currentText->Length != 0)
    {
        currentText = currentText->Remove(currentText->Length - 1);

        if (currentText->Length == 0) {
            this->nameNewRoom->ForeColor = System::Drawing::Color::White;
            bNewRoom = false;
        }
    }

    if (e->KeyChar != (char)Keys::Back) {

        currentText += e->KeyChar;

    }

    string strNameNewRoom;
    Convert_String_to_string(currentText, strNameNewRoom);


    if (validNEWROOM(strNameNewRoom) && currentText->Length != 0) {
        this->nameNewRoom->ForeColor = System::Drawing::Color::Green;
        bNewRoom = true;
        NEWROOM = strNameNewRoom;

        if (isBtnCreate()) btnCreate->Enabled = true;
    }
    if (!validNEWROOM(strNameNewRoom) && currentText->Length != 0) {
        this->nameNewRoom->ForeColor = System::Drawing::Color::Red;
        bNewRoom = false;

        if (!isBtnCreate()) btnCreate->Enabled = false;
    }
}

System::Void AppChat::Add::textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    String^ currentText = boxNewPassword->Text;

    if (e->KeyChar == (char)Keys::Back && currentText->Length != 0)
    {
        currentText = currentText->Remove(currentText->Length - 1);

        if (currentText->Length == 0) {
            this->nameNewPassword->ForeColor = System::Drawing::Color::White;
            bNewPassword = false;
        }
    }

    if (e->KeyChar != (char)Keys::Back) {

        currentText += e->KeyChar;

    }

    string strNameNewPassword;
    Convert_String_to_string(currentText, strNameNewPassword);


    if (validNEWPASSWORD(strNameNewPassword) && currentText->Length != 0) {
        this->nameNewPassword->ForeColor = System::Drawing::Color::Green;
        bNewPassword = true;
        NEWROOM = strNameNewPassword;

        if (isBtnCreate()) btnCreate->Enabled = true;
    }
    if (!validNEWPASSWORD(strNameNewPassword) && currentText->Length != 0) {
        this->nameNewPassword->ForeColor = System::Drawing::Color::Red;
        bNewPassword = false;

        if (!isBtnCreate()) btnCreate->Enabled = false;
    }
}

System::Void AppChat::Add::btnCreate_Click(System::Object^ sender, System::EventArgs^ e)
{
    string nickName;
    Convert_String_to_string(this->nickName->ToString() + " ", nickName);
 
    string newRoom;
    Convert_String_to_string(boxNewRoom->Text->ToString() + " ", newRoom);

    string newPassword;
    Convert_String_to_string(boxNewPassword->Text->ToString() + " ", newPassword);

    sendMessage(nickName + Create + newRoom + newPassword);

    //sendMessage(nickName + ls);

    this->Close();
}
