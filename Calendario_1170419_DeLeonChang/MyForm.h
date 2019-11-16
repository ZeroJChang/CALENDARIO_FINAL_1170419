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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(338, 200);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"LOGIN";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::MessageBox::Show("REVISE EL MANUAL DE USUARIO PARA INGRESAR ", "AYUDA");

	};
			 
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Calendario^ calen = gcnew Calendario();
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


	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
}
;
}
