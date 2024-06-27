#include "Client.h"
#include "Chat.h"

#include "Converter.h"
#include "GlobalValues.h"

using namespace System;
using namespace std;

#define MaxMessageLength 256

bool IsDebug = true;
//bool bIndex = true;


SOCKET Connection = INVALID_SOCKET;


vector<string> Split(string StringToSplit, string SplitterString)
{
	vector<string> ReturnVector;
	int i = 0;
	string SplittedString = "";
	while (i < StringToSplit.size())
	{
		if (StringToSplit[i] == SplitterString[0])
		{
			bool IsSplitter = true;
			for (int j = 1; j < SplitterString.size(); j++)
			{
				if (StringToSplit[i + j] != SplitterString[j])
				{
					IsSplitter = false;
					break;
				}
			}
			if (IsSplitter)
			{
				ReturnVector.push_back(SplittedString);
				SplittedString = "";
				i += SplitterString.size();
				continue;
			}
		}
		SplittedString += StringToSplit[i];
		i++;
	}
	ReturnVector.push_back(SplittedString);
	return ReturnVector;
}

void ClientHandler()
{
	char msg[256];
	int ConnectionStatus;
	
	while (true)
	{
		ConnectionStatus = recv(Connection, msg, MaxMessageLength, NULL);

		if (ConnectionStatus <= 0)
		{
			//cout << "Server disconnected" << endl;
			closesocket(Connection);
			Connection = INVALID_SOCKET;
			break;
		}

		vector<string> MessageVector = Split(msg, " ");

		if (MessageVector[0] == Online) {
			AppChat::Chat::countOnline->Text = Convert_string_to_String(MessageVector[1]);
			continue;
		}

		if (MessageVector[0] == CheckRoom) {
			isPassword = true;
			continue;
		}

		if (MessageVector[0] == CheckRemoveRoom) {
			isRemove = true;
			continue;
		}

		if (MessageVector[0] == Wrong) {
			AppChat::MessageBox::Show(Convert_char_to_String(msg));
			continue;
		}

		if (MessageVector[0] == Created) {
			continue;
		}


		if (MessageVector[0] == List) {

			AppChat::Chat::listRooms->Items->Clear();

			for (int i = 1; i < MessageVector.size() - 1; i++)
			{
				AppChat::Chat::listRooms->Items->Add(Convert_string_to_String(MessageVector[i]));
			}
			/*if (bIndex) {
			AppChat::Chat::listRooms->SelectedIndex = 0;
				bIndex = false;
			}*/
			continue;
		}

		if (MessageVector[0] == Opened) {
			AppChat::Chat::globalChat->Text = "";
			AppChat::Chat::labelChat->Text = Convert_string_to_String(MessageVector[2]);
			continue;
		}

		if (MessageVector[0] == RemoveRoom) {
			AppChat::Chat::listRooms->SelectedIndex = -1;
			continue;
		}


		AppChat::Chat::globalChat->Text += Convert_char_to_String(msg) + "\n";
		
		//AppChat::Chat::globalChat->AppendText(Convert_char_to_String(msg) + "\n");

	}
}

bool ConnectToServer(string ServerAddress, string Port)
{
	WSAData wsaData; 

	if (WSAStartup(MAKEWORD(2, 1), &wsaData) != 0) {
	
		return false;
	}
	
	SOCKADDR_IN addr;
	int sizeofaddr = sizeof(addr);
	addr.sin_addr.s_addr = inet_addr(ServerAddress.c_str());
	addr.sin_port = htons(stoi(Port));
	addr.sin_family = AF_INET;

	Connection = socket(AF_INET, SOCK_STREAM, NULL);

	if (connect(Connection, (SOCKADDR*)&addr, sizeof(addr)) != 0) {
	
		return false;
	}
	
	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)ClientHandler, NULL, NULL, NULL);
	return true;
}


void sendMessage(string Message) {

	send(Connection, Message.c_str(), MaxMessageLength, NULL);
	Sleep(10);
}





