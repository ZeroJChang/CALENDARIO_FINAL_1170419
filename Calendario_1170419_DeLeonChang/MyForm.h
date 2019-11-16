#pragma once
#include "Calendario.h"
namespace Calendario1170419DeLeonChang {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupUsuario;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ txtUsusarioIngresar;
	private: System::Windows::Forms::Button^ btnIngresar;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupUsuario = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->txtUsusarioIngresar = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupUsuario->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(122, 35);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(173, 22);
			this->txtUsername->TabIndex = 2;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(122, 63);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(173, 22);
			this->txtPassword->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 37);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(119, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"¿Necesitas ayuda\?";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::Label3_Click);
			// 
			// groupUsuario
			// 
			this->groupUsuario->Controls->Add(this->comboBox2);
			this->groupUsuario->Controls->Add(this->btnIngresar);
			this->groupUsuario->Controls->Add(this->textBox2);
			this->groupUsuario->Controls->Add(this->txtUsusarioIngresar);
			this->groupUsuario->Controls->Add(this->label4);
			this->groupUsuario->Controls->Add(this->lblNombre);
			this->groupUsuario->Enabled = false;
			this->groupUsuario->Location = System::Drawing::Point(379, 13);
			this->groupUsuario->Name = L"groupUsuario";
			this->groupUsuario->Size = System::Drawing::Size(360, 175);
			this->groupUsuario->TabIndex = 6;
			this->groupUsuario->TabStop = false;
			this->groupUsuario->Text = L"Registrar usuario";
			// 
			// comboBox2
			// 
			this->comboBox2->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) { L"1", L"2", L"3", L"4" });
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1", L"2", L"3", L"4" });
			this->comboBox2->Location = System::Drawing::Point(252, 52);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(66, 24);
			this->comboBox2->TabIndex = 8;
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(10, 127);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(143, 33);
			this->btnIngresar->TabIndex = 4;
			this->btnIngresar->Text = L"Ingresar Usuario";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &MyForm::BtnIngresar_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(10, 99);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(236, 22);
			this->textBox2->TabIndex = 3;
			// 
			// txtUsusarioIngresar
			// 
			this->txtUsusarioIngresar->Location = System::Drawing::Point(10, 54);
			this->txtUsusarioIngresar->Name = L"txtUsusarioIngresar";
			this->txtUsusarioIngresar->Size = System::Drawing::Size(236, 22);
			this->txtUsusarioIngresar->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 79);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 17);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Ingrese Password";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(7, 26);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(124, 17);
			this->lblNombre->TabIndex = 0;
			this->lblNombre->Text = L"Ingrese Username";
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(5) { L"0", L"1", L"2", L"3", L"4" });
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"0", L"1", L"2", L"3", L"4" });
			this->comboBox1->Location = System::Drawing::Point(27, 92);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(66, 24);
			this->comboBox1->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(755, 200);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->groupUsuario);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"LOGIN";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupUsuario->ResumeLayout(false);
			this->groupUsuario->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//ARREGLO PARA USUARIO el usuario
	array<String^>^ ArregloUsuario = gcnew array< String^ >(5);
	array<String^>^ ArregloPassword = gcnew array< String^ >(5);
	
	int i = 1;
	private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
		groupUsuario->Enabled = true;
		System::Windows::Forms::MessageBox::Show("SI NECESITA AYUDA REVISE EL MANUAL DE USUARIO PARA INGRESAR ", "AYUDA");

	};
			 
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Calendario^ calen = gcnew Calendario();
		/*
		if (txtUsername->Text->Equals("Usuario1") && txtPassword->Text->Equals("admin")) {
			System::Windows::Forms::MessageBox::Show("Ingreso correctamente usuario 1", "SUCESSFULL");
			calen->Show();
			this->Hide();
		}
		else if (txtUsername->Text->Equals("JChang") && txtPassword->Text->Equals("admin")) {
			System::Windows::Forms::MessageBox::Show("Ingreso correctamente usuario 2", "SUCESSFULL");
			calen->Show();
			this->Hide();
		}
		else if (txtUsername->Text->Equals("IngaLiska:D") && txtPassword->Text->Equals("admin")) {
			System::Windows::Forms::MessageBox::Show("Ingreso correctamente usuario 3", "SUCESSFULL");
			calen->Show();
			this->Hide();
		}
		else {
			System::Windows::Forms::MessageBox::Show("LOS DATOS SON ERRONEOS", "ERROR D:");
		}
		*/
		if (txtUsername->Text == ArregloUsuario[System::Convert::ToInt32(comboBox1->Text)] && txtPassword->Text == ArregloPassword[System::Convert::ToInt32(comboBox1->Text)]) {
			System::Windows::Forms::MessageBox::Show("Ingreso correctamente", "SUCESSFULL");
			calen->Show();
			this->Hide();
		}
		else {
			System::Windows::Forms::MessageBox::Show("LOS DATOS SON ERRONEOS", "ERROR D:");
		}


	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ArregloUsuario[0] = "JChang";
	ArregloPassword[0] = "admin";
}
private: System::Void BtnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
	ArregloUsuario[System::Convert::ToInt32(comboBox2->Text)] = txtUsusarioIngresar->Text;
	ArregloPassword[System::Convert::ToInt32(comboBox2->Text)] = textBox2->Text;
	groupUsuario->Enabled = false;
}
}
;
}
