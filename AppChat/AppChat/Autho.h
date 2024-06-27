#pragma once

namespace AppChat {

 	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Autho
	/// </summary>
	public ref class Autho : public System::Windows::Forms::Form
	{
	public:
		Autho(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}


	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Autho()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ boxNickName;
	protected:

	private: System::Windows::Forms::TextBox^ boxPORT;
	protected:

	private: System::Windows::Forms::TextBox^ boxIP;
	private: System::Windows::Forms::Label^ nameNickName;


	private: System::Windows::Forms::Label^ namePORT;

	private: System::Windows::Forms::Label^ nameIP;

	private: System::Windows::Forms::Button^ btnConnect;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Autho::typeid));
			this->boxNickName = (gcnew System::Windows::Forms::TextBox());
			this->boxPORT = (gcnew System::Windows::Forms::TextBox());
			this->boxIP = (gcnew System::Windows::Forms::TextBox());
			this->nameNickName = (gcnew System::Windows::Forms::Label());
			this->namePORT = (gcnew System::Windows::Forms::Label());
			this->nameIP = (gcnew System::Windows::Forms::Label());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// boxNickName
			// 
			this->boxNickName->Location = System::Drawing::Point(104, 184);
			this->boxNickName->Name = L"boxNickName";
			this->boxNickName->Size = System::Drawing::Size(100, 22);
			this->boxNickName->TabIndex = 13;
			this->boxNickName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Autho::boxNickName_KeyPress);
			// 
			// boxPORT
			// 
			this->boxPORT->Location = System::Drawing::Point(104, 151);
			this->boxPORT->Name = L"boxPORT";
			this->boxPORT->Size = System::Drawing::Size(100, 22);
			this->boxPORT->TabIndex = 12;
			this->boxPORT->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Autho::boxPORT_KeyPress);
			// 
			// boxIP
			// 
			this->boxIP->Location = System::Drawing::Point(104, 116);
			this->boxIP->Name = L"boxIP";
			this->boxIP->Size = System::Drawing::Size(100, 22);
			this->boxIP->TabIndex = 11;
			this->boxIP->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Autho::boxIP_KeyPress);
			// 
			// nameNickName
			// 
			this->nameNickName->AutoSize = true;
			this->nameNickName->ForeColor = System::Drawing::Color::White;
			this->nameNickName->Location = System::Drawing::Point(41, 187);
			this->nameNickName->Name = L"nameNickName";
			this->nameNickName->Size = System::Drawing::Size(58, 13);
			this->nameNickName->TabIndex = 10;
			this->nameNickName->Text = L"NickName";
			// 
			// namePORT
			// 
			this->namePORT->AutoSize = true;
			this->namePORT->ForeColor = System::Drawing::Color::White;
			this->namePORT->Location = System::Drawing::Point(41, 154);
			this->namePORT->Name = L"namePORT";
			this->namePORT->Size = System::Drawing::Size(34, 13);
			this->namePORT->TabIndex = 9;
			this->namePORT->Text = L"PORT";
			// 
			// nameIP
			// 
			this->nameIP->AutoSize = true;
			this->nameIP->ForeColor = System::Drawing::Color::White;
			this->nameIP->Location = System::Drawing::Point(41, 119);
			this->nameIP->Name = L"nameIP";
			this->nameIP->Size = System::Drawing::Size(52, 13);
			this->nameIP->TabIndex = 8;
			this->nameIP->Text = L"IP(server)";
			// 
			// btnConnect
			// 
			this->btnConnect->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnConnect->Enabled = false;
			this->btnConnect->Location = System::Drawing::Point(113, 251);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(75, 23);
			this->btnConnect->TabIndex = 7;
			this->btnConnect->Text = L"Connect";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &Autho::btnConnect_Click);
			// 
			// Autho
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->ClientSize = System::Drawing::Size(264, 370);
			this->Controls->Add(this->boxNickName);
			this->Controls->Add(this->boxPORT);
			this->Controls->Add(this->boxIP);
			this->Controls->Add(this->nameNickName);
			this->Controls->Add(this->namePORT);
			this->Controls->Add(this->nameIP);
			this->Controls->Add(this->btnConnect);
			this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Autho";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void boxIP_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void boxPORT_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void boxNickName_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
};
}
