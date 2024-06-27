#include "Chat.h"
#include "Client.h"
#include "Add.h"
#include "Password.h"
#include "Delete.h"

#include "Converter.h"
#include "GlobalValues.h"





System::Void AppChat::Chat::Chat_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
    Application::Exit();
}

System::Void AppChat::Chat::btnSend_Click(System::Object^ sender, System::EventArgs^ e)
{
	string nickName;
	Convert_String_to_string(this->Text->ToString(), nickName);
	nickName += ": ";

	string messageSend;
	Convert_String_to_string(textBoxSend->Text->ToString(), messageSend);

	for (int i = messageSend.size() - 1 ; i >= 0; --i)
	{	
		if (messageSend[i] == ' ' || messageSend[i] == '\n') {
			messageSend.erase(i, 1);
			break;
		}
	}

	messageSend.erase(0, messageSend.find_first_not_of(" "));

	if (textBoxSend->Text->Length != 0 && messageSend.size() != 0) {
	sendMessage(nickName + messageSend);
	textBoxSend->Text = "";
	}
	else {
		textBoxSend->Text = "";
	}
}

System::Void AppChat::Chat::btnAddRoom_Click(System::Object^ sender, System::EventArgs^ e)
{
	Add^ add = gcnew Add(this->Text);
	
	add->ShowDialog();

	string nickName;
	Convert_String_to_string(this->Text->ToString(), nickName);
	nickName += ": ";

	sendMessage(nickName + List);
}


System::Void AppChat::Chat::btnOpenRoom_Click(System::Object^ sender, System::EventArgs^ e)
{
	string nickName;
	Convert_String_to_string(this->Text->ToString()+ " ", nickName);

	if (AppChat::Chat::listRooms->Text == "ALL" && AppChat::Chat::labelChat->Text != "ALL") {

		sendMessage(nickName + Exit);
		sendMessage(nickName + Open + ALL + ALLpassword);
		sendMessage(nickName + Online);
		sendMessage(nickName + List);

	} else if (AppChat::Chat::listRooms->Text != "ALL") {

	Password^ password = gcnew Password(this->Text, AppChat::Chat::listRooms->Text);

	password->ShowDialog();
	}
}

System::Void AppChat::Chat::btnDeleteRoom_Click(System::Object^ sender, System::EventArgs^ e)
{
	string nickName;
	Convert_String_to_string(this->Text->ToString() + " ", nickName);

	if (AppChat::Chat::listRooms->Text == "ALL") {
		MessageBox::Show("The ALL room cannot be deleted!!!");
	}
	else if (AppChat::Chat::listRooms->Text == AppChat::Chat::labelChat->Text) {
		MessageBox::Show("You can't delete the room you're in!!!");
	}
	else {
		Delete^ deleteRoom = gcnew Delete(this->Text, AppChat::Chat::listRooms->Text);

		deleteRoom->ShowDialog();
	}
}

System::Void AppChat::Chat::textBoxSend_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if (e->KeyChar == (char)Keys::Enter) {
		btnSend_Click(this, e);
	}
}


System::Void AppChat::Chat::globalChat_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	globalChat->SelectionStart = globalChat->Text->Length;
	globalChat->ScrollToCaret();
	globalChat->Refresh();
}




