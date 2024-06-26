#include "Delete.h"
#include "Client.h"
#include "Chat.h"

#include "Converter.h"
#include "Validate.h"
#include "GlobalValues.h"

System::Void AppChat::Delete::btnDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    string nickName;
    Convert_String_to_string(this->nickName->ToString() + " ", nickName);

    string nameRoom;
    Convert_String_to_string(this->nameRoom->ToString() + " ", nameRoom);

    string password;
    Convert_String_to_string(boxPassword->Text->ToString() + " ", password);

    sendMessage(nickName + CheckRemove + nameRoom + password);
    AppChat::Delete::boxPassword->Text = "";

    Sleep(30);
    if (isRemove) {
        sendMessage(nickName + Remove + nameRoom + password);
        sendMessage(nickName + List);
        sendMessage(nickName + Online);

        isRemove = false;
        this->Close();
    }
}
