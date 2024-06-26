#pragma once

namespace AppChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Chat
	/// </summary>

	public ref class Chat : public System::Windows::Forms::Form
	{
	public:
		Chat(void)
		{
			InitializeComponent();

			//listRooms->SelectedIndexChanged += listRooms_SelectedIndexChanged;
			//
			//TODO: добавьте код конструктора
			//
		}
		Chat(String^nickName)
		{
			InitializeComponent();
			//listRooms->SelectedIndex = 0;
			this->Text = nickName;
		}
	static System::Windows::Forms::RichTextBox^ globalChat;
	static System::Windows::Forms::Label^ countOnline;
	static System::Windows::Forms::ComboBox^ listRooms;
	static System::Windows::Forms::Label^ labelChat;



	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripComboBox^ toolStripComboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAddRoom;
	private: System::Windows::Forms::Button^ btnDeleteRoom;


	private: System::Windows::Forms::Button^ btnOpenRoom;
	public: System::Windows::Forms::Label^ label3;
	private:

	private: System::Windows::Forms::Label^ label2;



	private:




	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Chat()
		{
			if (components)
			{
				delete components;
			}
		}
	//public: System::Windows::Forms::RichTextBox^ globalChat;
	protected:
	private: System::Windows::Forms::Label^ label4;
	public:

	private: System::Windows::Forms::RichTextBox^ textBoxSend;
	private: System::Windows::Forms::Button^ btnSend;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Chat::typeid));
			this->globalChat = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelChat = (gcnew System::Windows::Forms::Label());
			this->textBoxSend = (gcnew System::Windows::Forms::RichTextBox());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->listRooms = (gcnew System::Windows::Forms::ComboBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAddRoom = (gcnew System::Windows::Forms::Button());
			this->btnDeleteRoom = (gcnew System::Windows::Forms::Button());
			this->btnOpenRoom = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->countOnline = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// globalChat
			// 
			this->globalChat->Location = System::Drawing::Point(26, 83);
			this->globalChat->Name = L"globalChat";
			this->globalChat->Size = System::Drawing::Size(404, 216);
			this->globalChat->TabIndex = 17;
			this->globalChat->Text = L"";
			this->globalChat->TextChanged += gcnew System::EventHandler(this, &Chat::globalChat_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(23, 327);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Enter your message:";
			// 
			// labelChat
			// 
			this->labelChat->AutoSize = true;
			this->labelChat->ForeColor = System::Drawing::Color::White;
			this->labelChat->Location = System::Drawing::Point(55, 67);
			this->labelChat->Name = L"labelChat";
			this->labelChat->Size = System::Drawing::Size(0, 13);
			this->labelChat->TabIndex = 15;
			// 
			// textBoxSend
			// 
			this->textBoxSend->Location = System::Drawing::Point(26, 343);
			this->textBoxSend->Name = L"textBoxSend";
			this->textBoxSend->Size = System::Drawing::Size(323, 96);
			this->textBoxSend->TabIndex = 14;
			this->textBoxSend->Text = L"";
			// 
			// btnSend
			// 
			this->btnSend->Location = System::Drawing::Point(355, 343);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(75, 96);
			this->btnSend->TabIndex = 13;
			this->btnSend->Text = L"Send";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &Chat::btnSend_Click);
			// 
			// listRooms
			// 
			this->listRooms->FormattingEnabled = true;
			this->listRooms->Location = System::Drawing::Point(170, 26);
			this->listRooms->Name = L"listRooms";
			this->listRooms->Size = System::Drawing::Size(121, 21);
			this->listRooms->TabIndex = 21;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripComboBox1 });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(182, 31);
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(121, 23);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(205, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Rooms";
			// 
			// btnAddRoom
			// 
			this->btnAddRoom->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddRoom.BackgroundImage")));
			this->btnAddRoom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnAddRoom->FlatAppearance->BorderSize = 0;
			this->btnAddRoom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddRoom->Location = System::Drawing::Point(128, 28);
			this->btnAddRoom->Name = L"btnAddRoom";
			this->btnAddRoom->Size = System::Drawing::Size(15, 15);
			this->btnAddRoom->TabIndex = 23;
			this->btnAddRoom->UseVisualStyleBackColor = true;
			this->btnAddRoom->Click += gcnew System::EventHandler(this, &Chat::btnAddRoom_Click);
			// 
			// btnDeleteRoom
			// 
			this->btnDeleteRoom->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteRoom.BackgroundImage")));
			this->btnDeleteRoom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnDeleteRoom->FlatAppearance->BorderSize = 0;
			this->btnDeleteRoom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteRoom->Location = System::Drawing::Point(149, 28);
			this->btnDeleteRoom->Name = L"btnDeleteRoom";
			this->btnDeleteRoom->Size = System::Drawing::Size(15, 15);
			this->btnDeleteRoom->TabIndex = 24;
			this->btnDeleteRoom->UseVisualStyleBackColor = true;
			this->btnDeleteRoom->Click += gcnew System::EventHandler(this, &Chat::btnDeleteRoom_Click);
			// 
			// btnOpenRoom
			// 
			this->btnOpenRoom->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOpenRoom.BackgroundImage")));
			this->btnOpenRoom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnOpenRoom->FlatAppearance->BorderSize = 0;
			this->btnOpenRoom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOpenRoom->Location = System::Drawing::Point(297, 28);
			this->btnOpenRoom->Name = L"btnOpenRoom";
			this->btnOpenRoom->Size = System::Drawing::Size(15, 15);
			this->btnOpenRoom->TabIndex = 25;
			this->btnOpenRoom->UseVisualStyleBackColor = true;
			this->btnOpenRoom->Click += gcnew System::EventHandler(this, &Chat::btnOpenRoom_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(392, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Online:";
			// 
			// countOnline
			// 
			this->countOnline->AutoSize = true;
			this->countOnline->Location = System::Drawing::Point(432, 30);
			this->countOnline->Name = L"countOnline";
			this->countOnline->Size = System::Drawing::Size(0, 13);
			this->countOnline->TabIndex = 27;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(23, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Chat:";
			// 
			// Chat
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->ClientSize = System::Drawing::Size(456, 456);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->countOnline);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnOpenRoom);
			this->Controls->Add(this->btnDeleteRoom);
			this->Controls->Add(this->btnAddRoom);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listRooms);
			this->Controls->Add(this->globalChat);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->labelChat);
			this->Controls->Add(this->textBoxSend);
			this->Controls->Add(this->btnSend);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Chat";
			this->RightToLeftLayout = true;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Chat";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Chat::Chat_FormClosed);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Chat_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
	private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnAddRoom_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnOpenRoom_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void globalChat_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnDeleteRoom_Click(System::Object^ sender, System::EventArgs^ e);
};
}
