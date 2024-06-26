#pragma once

namespace AppChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Password
	/// </summary>
	public ref class Password : public System::Windows::Forms::Form
	{
	public:
		Password(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		Password(String^ nickName, String^ nameRoom)
		{
			InitializeComponent();
			this->nickName = nickName;
			this->nameRoom = nameRoom;


		}

		String^ nickName;
		String^ nameRoom;

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Password()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSingIn;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ boxPassword;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Password::typeid));
			this->btnSingIn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->boxPassword = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnSingIn
			// 
			this->btnSingIn->Location = System::Drawing::Point(111, 104);
			this->btnSingIn->Name = L"btnSingIn";
			this->btnSingIn->Size = System::Drawing::Size(75, 23);
			this->btnSingIn->TabIndex = 0;
			this->btnSingIn->Text = L"Sing-in";
			this->btnSingIn->UseVisualStyleBackColor = true;
			this->btnSingIn->Click += gcnew System::EventHandler(this, &Password::btnSingIn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(38, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Password";
			// 
			// boxPassword
			// 
			this->boxPassword->Location = System::Drawing::Point(100, 45);
			this->boxPassword->Name = L"boxPassword";
			this->boxPassword->PasswordChar = '*';
			this->boxPassword->Size = System::Drawing::Size(100, 22);
			this->boxPassword->TabIndex = 2;
			// 
			// Password
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->ClientSize = System::Drawing::Size(284, 147);
			this->Controls->Add(this->boxPassword);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnSingIn);
			this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Password";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSingIn_Click(System::Object^ sender, System::EventArgs^ e);
};
}
