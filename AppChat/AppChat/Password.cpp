#include "Password.h"
#include "Client.h"
#include "Chat.h"

#include "Converter.h"
#include "Validate.h"
#include "GlobalValues.h"


System::Void AppChat::Password::btnSingIn_Click(System::Object^ sender, System::EventArgs^ e)
{   
    string nickName;
    Convert_String_to_string(this->nickName->ToString() + " ", nickName);

    string nameRoom;
    Convert_String_to_string(this->nameRoom->ToString() + " ", nameRoom);

    string password;
    Convert_String_to_string(boxPassword->Text->ToString() + " ", password);

    sendMessage(nickName + Check + nameRoom + password);
    AppChat::Password::boxPassword->Text = "";

    Sleep(30);
        if (isPassword) {
            sendMessage(nickName + Exit);
            sendMessage(nickName + Open + nameRoom + password);
            sendMessage(nickName + List);
            sendMessage(nickName + Online);

            isPassword = false;
            this->Close();
        } 
}


