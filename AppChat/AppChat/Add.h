#pragma once

namespace AppChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Add
	/// </summary>
	public ref class Add : public System::Windows::Forms::Form
	{
	public:
		Add(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		Add(String^ nickName)
		{
			InitializeComponent();
			this->nickName = nickName;
		}

		String^ nickName;

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Add()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCreate;
	protected:

	private: System::Windows::Forms::TextBox^ boxNewRoom;

	private: System::Windows::Forms::TextBox^ boxNewPassword;
	private: System::Windows::Forms::Label^ nameNewRoom;
	private: System::Windows::Forms::Label^ nameNewPassword;



	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Add::typeid));
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->boxNewRoom = (gcnew System::Windows::Forms::TextBox());
			this->boxNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->nameNewRoom = (gcnew System::Windows::Forms::Label());
			this->nameNewPassword = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnCreate
			// 
			this->btnCreate->Enabled = false;
			this->btnCreate->Location = System::Drawing::Point(113, 168);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(75, 23);
			this->btnCreate->TabIndex = 0;
			this->btnCreate->Text = L"Create";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &Add::btnCreate_Click);
			// 
			// boxNewRoom
			// 
			this->boxNewRoom->Location = System::Drawing::Point(102, 71);
			this->boxNewRoom->Name = L"boxNewRoom";
			this->boxNewRoom->Size = System::Drawing::Size(100, 22);
			this->boxNewRoom->TabIndex = 1;
			this->boxNewRoom->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Add::textBox1_KeyPress);
			// 
			// boxNewPassword
			// 
			this->boxNewPassword->Location = System::Drawing::Point(102, 119);
			this->boxNewPassword->Name = L"boxNewPassword";
			this->boxNewPassword->Size = System::Drawing::Size(100, 22);
			this->boxNewPassword->TabIndex = 2;
			this->boxNewPassword->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Add::textBox2_KeyPress);
			// 
			// nameNewRoom
			// 
			this->nameNewRoom->AutoSize = true;
			this->nameNewRoom->ForeColor = System::Drawing::Color::White;
			this->nameNewRoom->Location = System::Drawing::Point(40, 74);
			this->nameNewRoom->Name = L"nameNewRoom";
			this->nameNewRoom->Size = System::Drawing::Size(63, 13);
			this->nameNewRoom->TabIndex = 3;
			this->nameNewRoom->Text = L"New room:";
			// 
			// nameNewPassword
			// 
			this->nameNewPassword->AutoSize = true;
			this->nameNewPassword->ForeColor = System::Drawing::Color::White;
			this->nameNewPassword->Location = System::Drawing::Point(40, 122);
			this->nameNewPassword->Name = L"nameNewPassword";
			this->nameNewPassword->Size = System::Drawing::Size(59, 13);
			this->nameNewPassword->TabIndex = 4;
			this->nameNewPassword->Text = L"Password:";
			// 
			// Add
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->nameNewPassword);
			this->Controls->Add(this->nameNewRoom);
			this->Controls->Add(this->boxNewPassword);
			this->Controls->Add(this->boxNewRoom);
			this->Controls->Add(this->btnCreate);
			this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Add";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void btnCreate_Click(System::Object^ sender, System::EventArgs^ e);
};
}
