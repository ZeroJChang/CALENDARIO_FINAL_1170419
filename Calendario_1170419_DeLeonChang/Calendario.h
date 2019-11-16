#pragma once
//librerias a usar
#include <string>
#include <iostream>
#include <windows.h>
#include <stdio.h>


//AYUDA WEB
//https://docs.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messagebox
//https://docs.microsoft.com/es-es/dotnet/framework/winforms/controls/how-to-load-a-sound-asynchronously-within-a-windows-form

//YOUTUBE
//https://www.youtube.com/watch?v=O8CD2CIhQO8

namespace Calendario1170419DeLeonChang {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//Estas nos serviran para que funcione correctamente xd
	using namespace System::IO;
	using namespace System::Diagnostics;
	using namespace System::Collections::Generic;
	using namespace System::Media;
	
	
	

	/// <summary>
	/// Resumen de Calendario
	/// </summary>
	public ref class Calendario : public System::Windows::Forms::Form
	{

	
		
	public:
		Calendario(void)
		{
			InitializeComponent();
			
			
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Calendario(int a)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Calendario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::Label^ lbl10;
	private: System::Windows::Forms::Label^ lbl9;
	private: System::Windows::Forms::Label^ lbl8;
	private: System::Windows::Forms::Label^ lbl7;
	private: System::Windows::Forms::Label^ lbl6;
	private: System::Windows::Forms::Label^ Oka;
	private: System::Windows::Forms::TextBox^ txtIngreseRuta;
	private: System::Windows::Forms::Button^ btnLeer;
	private: System::Windows::Forms::Label^ lbl5;
	private: System::Windows::Forms::Label^ lbl4;
	private: System::Windows::Forms::Label^ lbl3;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ Dia29;
	private: System::Windows::Forms::ListBox^ Dia30;
	private: System::Windows::Forms::ListBox^ Dia28;
	private: System::Windows::Forms::ListBox^ Dia27;
	private: System::Windows::Forms::ListBox^ Dia26;
	private: System::Windows::Forms::ListBox^ Dia25;
	private: System::Windows::Forms::ListBox^ Dia23;
	private: System::Windows::Forms::ListBox^ Dia24;
	private: System::Windows::Forms::ListBox^ Dia22;
	private: System::Windows::Forms::ListBox^ Dia21;
	private: System::Windows::Forms::ListBox^ Dia19;
	private: System::Windows::Forms::ListBox^ Dia20;
	private: System::Windows::Forms::ListBox^ Dia18;
	private: System::Windows::Forms::ListBox^ Dia17;
	private: System::Windows::Forms::ListBox^ Dia16;
	private: System::Windows::Forms::ListBox^ Dia15;
	private: System::Windows::Forms::ListBox^ Dia13;
	private: System::Windows::Forms::ListBox^ Dia14;
	private: System::Windows::Forms::ListBox^ Dia12;
	private: System::Windows::Forms::ListBox^ Dia11;
	private: System::Windows::Forms::ListBox^ Dia9;
	private: System::Windows::Forms::ListBox^ Dia10;
	private: System::Windows::Forms::ListBox^ Dia8;
	private: System::Windows::Forms::ListBox^ Dia7;
	private: System::Windows::Forms::ListBox^ Dia6;
	private: System::Windows::Forms::ListBox^ Dia5;
	private: System::Windows::Forms::ListBox^ Dia3;
	private: System::Windows::Forms::ListBox^ Dia4;
	private: System::Windows::Forms::ListBox^ Dia2;
	private: System::Windows::Forms::ListBox^ Dia1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ lblCambio;
	private: System::Windows::Forms::Label^ lbl20;

	private: System::Windows::Forms::Label^ lbl19;

	private: System::Windows::Forms::Label^ lbl18;

	private: System::Windows::Forms::Label^ lbl17;

	private: System::Windows::Forms::Label^ lbl16;

	private: System::Windows::Forms::Label^ lbl15;

	private: System::Windows::Forms::Label^ lbl14;

	private: System::Windows::Forms::Label^ lbl13;

	private: System::Windows::Forms::Label^ lbl12;

	private: System::Windows::Forms::Label^ lbl11;
	private: System::Windows::Forms::Label^ lbl30;

	private: System::Windows::Forms::Label^ lbl29;

	private: System::Windows::Forms::Label^ lbl28;

	private: System::Windows::Forms::Label^ lbl27;

	private: System::Windows::Forms::Label^ lbl26;

	private: System::Windows::Forms::Label^ lbl25;

	private: System::Windows::Forms::Label^ lbl24;

private: System::Windows::Forms::Label^ lbl23;

private: System::Windows::Forms::Label^ lbl22;

private: System::Windows::Forms::Label^ lbl21;
private: System::Windows::Forms::GroupBox^ groupAgregar;

private: System::Windows::Forms::Button^ btnEditar;
private: System::Windows::Forms::GroupBox^ groupEditar;

private: System::Windows::Forms::Button^ btnActualizar;
private: System::Windows::Forms::TextBox^ txtEditar;
private: System::Windows::Forms::Button^ btnAceptar;


private: System::Windows::Forms::ComboBox^ cmbTipoTarea;
private: System::Windows::Forms::ComboBox^ cmbHora;
private: System::Windows::Forms::ComboBox^ cmbHORARIA;
private: System::Windows::Forms::ComboBox^ cmbMinutos;


private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TextBox^ txtAgregar;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::ComboBox^ cmbDia;
private: System::Windows::Forms::Timer^ ContadorDias;
private: System::Windows::Forms::Timer^ Aplazador;
private: System::Windows::Forms::Label^ lblDia;
private: System::Windows::Forms::TextBox^ txtAlarma;

private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Label^ lblMes;




private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calendario::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->lbl30 = (gcnew System::Windows::Forms::Label());
			this->lbl29 = (gcnew System::Windows::Forms::Label());
			this->lbl28 = (gcnew System::Windows::Forms::Label());
			this->lbl27 = (gcnew System::Windows::Forms::Label());
			this->lbl26 = (gcnew System::Windows::Forms::Label());
			this->lbl25 = (gcnew System::Windows::Forms::Label());
			this->lbl24 = (gcnew System::Windows::Forms::Label());
			this->lbl23 = (gcnew System::Windows::Forms::Label());
			this->lbl22 = (gcnew System::Windows::Forms::Label());
			this->lbl21 = (gcnew System::Windows::Forms::Label());
			this->lbl20 = (gcnew System::Windows::Forms::Label());
			this->lbl19 = (gcnew System::Windows::Forms::Label());
			this->lbl18 = (gcnew System::Windows::Forms::Label());
			this->lbl17 = (gcnew System::Windows::Forms::Label());
			this->lbl16 = (gcnew System::Windows::Forms::Label());
			this->lbl15 = (gcnew System::Windows::Forms::Label());
			this->lbl14 = (gcnew System::Windows::Forms::Label());
			this->lbl13 = (gcnew System::Windows::Forms::Label());
			this->lbl12 = (gcnew System::Windows::Forms::Label());
			this->lbl11 = (gcnew System::Windows::Forms::Label());
			this->lbl10 = (gcnew System::Windows::Forms::Label());
			this->lbl9 = (gcnew System::Windows::Forms::Label());
			this->lbl8 = (gcnew System::Windows::Forms::Label());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->Oka = (gcnew System::Windows::Forms::Label());
			this->txtIngreseRuta = (gcnew System::Windows::Forms::TextBox());
			this->btnLeer = (gcnew System::Windows::Forms::Button());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Dia29 = (gcnew System::Windows::Forms::ListBox());
			this->Dia30 = (gcnew System::Windows::Forms::ListBox());
			this->Dia28 = (gcnew System::Windows::Forms::ListBox());
			this->Dia27 = (gcnew System::Windows::Forms::ListBox());
			this->Dia26 = (gcnew System::Windows::Forms::ListBox());
			this->Dia25 = (gcnew System::Windows::Forms::ListBox());
			this->Dia23 = (gcnew System::Windows::Forms::ListBox());
			this->Dia24 = (gcnew System::Windows::Forms::ListBox());
			this->Dia22 = (gcnew System::Windows::Forms::ListBox());
			this->Dia21 = (gcnew System::Windows::Forms::ListBox());
			this->Dia19 = (gcnew System::Windows::Forms::ListBox());
			this->Dia20 = (gcnew System::Windows::Forms::ListBox());
			this->Dia18 = (gcnew System::Windows::Forms::ListBox());
			this->Dia17 = (gcnew System::Windows::Forms::ListBox());
			this->Dia16 = (gcnew System::Windows::Forms::ListBox());
			this->Dia15 = (gcnew System::Windows::Forms::ListBox());
			this->Dia13 = (gcnew System::Windows::Forms::ListBox());
			this->Dia14 = (gcnew System::Windows::Forms::ListBox());
			this->Dia12 = (gcnew System::Windows::Forms::ListBox());
			this->Dia11 = (gcnew System::Windows::Forms::ListBox());
			this->Dia9 = (gcnew System::Windows::Forms::ListBox());
			this->Dia10 = (gcnew System::Windows::Forms::ListBox());
			this->Dia8 = (gcnew System::Windows::Forms::ListBox());
			this->Dia7 = (gcnew System::Windows::Forms::ListBox());
			this->Dia6 = (gcnew System::Windows::Forms::ListBox());
			this->Dia5 = (gcnew System::Windows::Forms::ListBox());
			this->Dia3 = (gcnew System::Windows::Forms::ListBox());
			this->Dia4 = (gcnew System::Windows::Forms::ListBox());
			this->Dia2 = (gcnew System::Windows::Forms::ListBox());
			this->Dia1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lblCambio = (gcnew System::Windows::Forms::Label());
			this->groupAgregar = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cmbDia = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtAgregar = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cmbHORARIA = (gcnew System::Windows::Forms::ComboBox());
			this->cmbMinutos = (gcnew System::Windows::Forms::ComboBox());
			this->cmbHora = (gcnew System::Windows::Forms::ComboBox());
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->cmbTipoTarea = (gcnew System::Windows::Forms::ComboBox());
			this->groupEditar = (gcnew System::Windows::Forms::GroupBox());
			this->btnActualizar = (gcnew System::Windows::Forms::Button());
			this->txtEditar = (gcnew System::Windows::Forms::TextBox());
			this->ContadorDias = (gcnew System::Windows::Forms::Timer(this->components));
			this->Aplazador = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblDia = (gcnew System::Windows::Forms::Label());
			this->txtAlarma = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->lblMes = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupAgregar->SuspendLayout();
			this->groupEditar->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnEditar);
			this->groupBox2->Controls->Add(this->lbl30);
			this->groupBox2->Controls->Add(this->lbl29);
			this->groupBox2->Controls->Add(this->lbl28);
			this->groupBox2->Controls->Add(this->lbl27);
			this->groupBox2->Controls->Add(this->lbl26);
			this->groupBox2->Controls->Add(this->lbl25);
			this->groupBox2->Controls->Add(this->lbl24);
			this->groupBox2->Controls->Add(this->lbl23);
			this->groupBox2->Controls->Add(this->lbl22);
			this->groupBox2->Controls->Add(this->lbl21);
			this->groupBox2->Controls->Add(this->lbl20);
			this->groupBox2->Controls->Add(this->lbl19);
			this->groupBox2->Controls->Add(this->lbl18);
			this->groupBox2->Controls->Add(this->lbl17);
			this->groupBox2->Controls->Add(this->lbl16);
			this->groupBox2->Controls->Add(this->lbl15);
			this->groupBox2->Controls->Add(this->lbl14);
			this->groupBox2->Controls->Add(this->lbl13);
			this->groupBox2->Controls->Add(this->lbl12);
			this->groupBox2->Controls->Add(this->lbl11);
			this->groupBox2->Controls->Add(this->lbl10);
			this->groupBox2->Controls->Add(this->lbl9);
			this->groupBox2->Controls->Add(this->lbl8);
			this->groupBox2->Controls->Add(this->lbl7);
			this->groupBox2->Controls->Add(this->lbl6);
			this->groupBox2->Controls->Add(this->Oka);
			this->groupBox2->Controls->Add(this->txtIngreseRuta);
			this->groupBox2->Controls->Add(this->btnLeer);
			this->groupBox2->Controls->Add(this->lbl5);
			this->groupBox2->Controls->Add(this->lbl4);
			this->groupBox2->Controls->Add(this->lbl3);
			this->groupBox2->Controls->Add(this->lbl2);
			this->groupBox2->Controls->Add(this->lbl1);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->Dia29);
			this->groupBox2->Controls->Add(this->Dia30);
			this->groupBox2->Controls->Add(this->Dia28);
			this->groupBox2->Controls->Add(this->Dia27);
			this->groupBox2->Controls->Add(this->Dia26);
			this->groupBox2->Controls->Add(this->Dia25);
			this->groupBox2->Controls->Add(this->Dia23);
			this->groupBox2->Controls->Add(this->Dia24);
			this->groupBox2->Controls->Add(this->Dia22);
			this->groupBox2->Controls->Add(this->Dia21);
			this->groupBox2->Controls->Add(this->Dia19);
			this->groupBox2->Controls->Add(this->Dia20);
			this->groupBox2->Controls->Add(this->Dia18);
			this->groupBox2->Controls->Add(this->Dia17);
			this->groupBox2->Controls->Add(this->Dia16);
			this->groupBox2->Controls->Add(this->Dia15);
			this->groupBox2->Controls->Add(this->Dia13);
			this->groupBox2->Controls->Add(this->Dia14);
			this->groupBox2->Controls->Add(this->Dia12);
			this->groupBox2->Controls->Add(this->Dia11);
			this->groupBox2->Controls->Add(this->Dia9);
			this->groupBox2->Controls->Add(this->Dia10);
			this->groupBox2->Controls->Add(this->Dia8);
			this->groupBox2->Controls->Add(this->Dia7);
			this->groupBox2->Controls->Add(this->Dia6);
			this->groupBox2->Controls->Add(this->Dia5);
			this->groupBox2->Controls->Add(this->Dia3);
			this->groupBox2->Controls->Add(this->Dia4);
			this->groupBox2->Controls->Add(this->Dia2);
			this->groupBox2->Controls->Add(this->Dia1);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(912, 299);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L" Calendario";
			// 
			// btnEditar
			// 
			this->btnEditar->Enabled = false;
			this->btnEditar->Location = System::Drawing::Point(248, 205);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(115, 37);
			this->btnEditar->TabIndex = 63;
			this->btnEditar->Text = L"Editar Tareas";
			this->btnEditar->UseVisualStyleBackColor = true;
			this->btnEditar->Click += gcnew System::EventHandler(this, &Calendario::BtnEditar_Click);
			// 
			// lbl30
			// 
			this->lbl30->AutoSize = true;
			this->lbl30->Location = System::Drawing::Point(832, 162);
			this->lbl30->Name = L"lbl30";
			this->lbl30->Size = System::Drawing::Size(24, 17);
			this->lbl30->TabIndex = 62;
			this->lbl30->Text = L"30";
			// 
			// lbl29
			// 
			this->lbl29->AutoSize = true;
			this->lbl29->Location = System::Drawing::Point(747, 160);
			this->lbl29->Name = L"lbl29";
			this->lbl29->Size = System::Drawing::Size(24, 17);
			this->lbl29->TabIndex = 61;
			this->lbl29->Text = L"29";
			// 
			// lbl28
			// 
			this->lbl28->AutoSize = true;
			this->lbl28->Location = System::Drawing::Point(657, 160);
			this->lbl28->Name = L"lbl28";
			this->lbl28->Size = System::Drawing::Size(24, 17);
			this->lbl28->TabIndex = 60;
			this->lbl28->Text = L"28";
			// 
			// lbl27
			// 
			this->lbl27->AutoSize = true;
			this->lbl27->Location = System::Drawing::Point(568, 160);
			this->lbl27->Name = L"lbl27";
			this->lbl27->Size = System::Drawing::Size(24, 17);
			this->lbl27->TabIndex = 59;
			this->lbl27->Text = L"27";
			// 
			// lbl26
			// 
			this->lbl26->AutoSize = true;
			this->lbl26->Location = System::Drawing::Point(481, 159);
			this->lbl26->Name = L"lbl26";
			this->lbl26->Size = System::Drawing::Size(24, 17);
			this->lbl26->TabIndex = 58;
			this->lbl26->Text = L"26";
			// 
			// lbl25
			// 
			this->lbl25->AutoSize = true;
			this->lbl25->Location = System::Drawing::Point(388, 160);
			this->lbl25->Name = L"lbl25";
			this->lbl25->Size = System::Drawing::Size(24, 17);
			this->lbl25->TabIndex = 57;
			this->lbl25->Text = L"25";
			// 
			// lbl24
			// 
			this->lbl24->AutoSize = true;
			this->lbl24->Location = System::Drawing::Point(303, 158);
			this->lbl24->Name = L"lbl24";
			this->lbl24->Size = System::Drawing::Size(24, 17);
			this->lbl24->TabIndex = 56;
			this->lbl24->Text = L"24";
			// 
			// lbl23
			// 
			this->lbl23->AutoSize = true;
			this->lbl23->Location = System::Drawing::Point(213, 158);
			this->lbl23->Name = L"lbl23";
			this->lbl23->Size = System::Drawing::Size(24, 17);
			this->lbl23->TabIndex = 55;
			this->lbl23->Text = L"23";
			// 
			// lbl22
			// 
			this->lbl22->AutoSize = true;
			this->lbl22->Location = System::Drawing::Point(124, 158);
			this->lbl22->Name = L"lbl22";
			this->lbl22->Size = System::Drawing::Size(24, 17);
			this->lbl22->TabIndex = 54;
			this->lbl22->Text = L"22";
			// 
			// lbl21
			// 
			this->lbl21->AutoSize = true;
			this->lbl21->Location = System::Drawing::Point(37, 157);
			this->lbl21->Name = L"lbl21";
			this->lbl21->Size = System::Drawing::Size(24, 17);
			this->lbl21->TabIndex = 53;
			this->lbl21->Text = L"21";
			// 
			// lbl20
			// 
			this->lbl20->AutoSize = true;
			this->lbl20->Location = System::Drawing::Point(832, 104);
			this->lbl20->Name = L"lbl20";
			this->lbl20->Size = System::Drawing::Size(24, 17);
			this->lbl20->TabIndex = 52;
			this->lbl20->Text = L"20";
			// 
			// lbl19
			// 
			this->lbl19->AutoSize = true;
			this->lbl19->Location = System::Drawing::Point(747, 102);
			this->lbl19->Name = L"lbl19";
			this->lbl19->Size = System::Drawing::Size(24, 17);
			this->lbl19->TabIndex = 51;
			this->lbl19->Text = L"19";
			// 
			// lbl18
			// 
			this->lbl18->AutoSize = true;
			this->lbl18->Location = System::Drawing::Point(657, 102);
			this->lbl18->Name = L"lbl18";
			this->lbl18->Size = System::Drawing::Size(24, 17);
			this->lbl18->TabIndex = 50;
			this->lbl18->Text = L"18";
			// 
			// lbl17
			// 
			this->lbl17->AutoSize = true;
			this->lbl17->Location = System::Drawing::Point(568, 102);
			this->lbl17->Name = L"lbl17";
			this->lbl17->Size = System::Drawing::Size(24, 17);
			this->lbl17->TabIndex = 49;
			this->lbl17->Text = L"17";
			// 
			// lbl16
			// 
			this->lbl16->AutoSize = true;
			this->lbl16->Location = System::Drawing::Point(481, 101);
			this->lbl16->Name = L"lbl16";
			this->lbl16->Size = System::Drawing::Size(24, 17);
			this->lbl16->TabIndex = 48;
			this->lbl16->Text = L"16";
			// 
			// lbl15
			// 
			this->lbl15->AutoSize = true;
			this->lbl15->Location = System::Drawing::Point(388, 102);
			this->lbl15->Name = L"lbl15";
			this->lbl15->Size = System::Drawing::Size(24, 17);
			this->lbl15->TabIndex = 47;
			this->lbl15->Text = L"15";
			// 
			// lbl14
			// 
			this->lbl14->AutoSize = true;
			this->lbl14->Location = System::Drawing::Point(303, 100);
			this->lbl14->Name = L"lbl14";
			this->lbl14->Size = System::Drawing::Size(24, 17);
			this->lbl14->TabIndex = 46;
			this->lbl14->Text = L"14";
			// 
			// lbl13
			// 
			this->lbl13->AutoSize = true;
			this->lbl13->Location = System::Drawing::Point(213, 100);
			this->lbl13->Name = L"lbl13";
			this->lbl13->Size = System::Drawing::Size(24, 17);
			this->lbl13->TabIndex = 45;
			this->lbl13->Text = L"13";
			// 
			// lbl12
			// 
			this->lbl12->AutoSize = true;
			this->lbl12->Location = System::Drawing::Point(124, 100);
			this->lbl12->Name = L"lbl12";
			this->lbl12->Size = System::Drawing::Size(24, 17);
			this->lbl12->TabIndex = 44;
			this->lbl12->Text = L"12";
			// 
			// lbl11
			// 
			this->lbl11->AutoSize = true;
			this->lbl11->Location = System::Drawing::Point(37, 99);
			this->lbl11->Name = L"lbl11";
			this->lbl11->Size = System::Drawing::Size(24, 17);
			this->lbl11->TabIndex = 43;
			this->lbl11->Text = L"11";
			// 
			// lbl10
			// 
			this->lbl10->AutoSize = true;
			this->lbl10->Location = System::Drawing::Point(832, 47);
			this->lbl10->Name = L"lbl10";
			this->lbl10->Size = System::Drawing::Size(24, 17);
			this->lbl10->TabIndex = 42;
			this->lbl10->Text = L"10";
			this->lbl10->Click += gcnew System::EventHandler(this, &Calendario::c);
			// 
			// lbl9
			// 
			this->lbl9->AutoSize = true;
			this->lbl9->Location = System::Drawing::Point(747, 45);
			this->lbl9->Name = L"lbl9";
			this->lbl9->Size = System::Drawing::Size(16, 17);
			this->lbl9->TabIndex = 41;
			this->lbl9->Text = L"9";
			this->lbl9->Click += gcnew System::EventHandler(this, &Calendario::c);
			// 
			// lbl8
			// 
			this->lbl8->AutoSize = true;
			this->lbl8->Location = System::Drawing::Point(657, 45);
			this->lbl8->Name = L"lbl8";
			this->lbl8->Size = System::Drawing::Size(16, 17);
			this->lbl8->TabIndex = 40;
			this->lbl8->Text = L"8";
			this->lbl8->Click += gcnew System::EventHandler(this, &Calendario::c);
			// 
			// lbl7
			// 
			this->lbl7->AutoSize = true;
			this->lbl7->Location = System::Drawing::Point(568, 45);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(16, 17);
			this->lbl7->TabIndex = 39;
			this->lbl7->Text = L"7";
			this->lbl7->Click += gcnew System::EventHandler(this, &Calendario::c);
			// 
			// lbl6
			// 
			this->lbl6->AutoSize = true;
			this->lbl6->Location = System::Drawing::Point(481, 44);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(16, 17);
			this->lbl6->TabIndex = 38;
			this->lbl6->Text = L"6";
			this->lbl6->Click += gcnew System::EventHandler(this, &Calendario::c);
			// 
			// Oka
			// 
			this->Oka->AutoSize = true;
			this->Oka->Location = System::Drawing::Point(467, 257);
			this->Oka->Name = L"Oka";
			this->Oka->Size = System::Drawing::Size(46, 17);
			this->Oka->TabIndex = 37;
			this->Oka->Text = L"label8";
			this->Oka->Visible = false;
			// 
			// txtIngreseRuta
			// 
			this->txtIngreseRuta->Location = System::Drawing::Point(467, 228);
			this->txtIngreseRuta->Name = L"txtIngreseRuta";
			this->txtIngreseRuta->Size = System::Drawing::Size(302, 22);
			this->txtIngreseRuta->TabIndex = 5;
			// 
			// btnLeer
			// 
			this->btnLeer->Enabled = false;
			this->btnLeer->Location = System::Drawing::Point(775, 197);
			this->btnLeer->Name = L"btnLeer";
			this->btnLeer->Size = System::Drawing::Size(115, 53);
			this->btnLeer->TabIndex = 36;
			this->btnLeer->Text = L"LEER DATOS USUARIO";
			this->btnLeer->UseVisualStyleBackColor = true;
			this->btnLeer->Click += gcnew System::EventHandler(this, &Calendario::BtnLeer_Click);
			// 
			// lbl5
			// 
			this->lbl5->AutoSize = true;
			this->lbl5->Location = System::Drawing::Point(388, 45);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(16, 17);
			this->lbl5->TabIndex = 35;
			this->lbl5->Text = L"5";
			this->lbl5->Click += gcnew System::EventHandler(this, &Calendario::c);
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->Location = System::Drawing::Point(303, 43);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(16, 17);
			this->lbl4->TabIndex = 34;
			this->lbl4->Text = L"4";
			this->lbl4->Click += gcnew System::EventHandler(this, &Calendario::c);
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Location = System::Drawing::Point(213, 43);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(16, 17);
			this->lbl3->TabIndex = 33;
			this->lbl3->Text = L"3";
			this->lbl3->Click += gcnew System::EventHandler(this, &Calendario::c);
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(124, 43);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(16, 17);
			this->lbl2->TabIndex = 32;
			this->lbl2->Text = L"2";
			this->lbl2->Click += gcnew System::EventHandler(this, &Calendario::c);
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(37, 42);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(16, 17);
			this->lbl1->TabIndex = 31;
			this->lbl1->Text = L"1";
			this->lbl1->Click += gcnew System::EventHandler(this, &Calendario::c);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(127, 205);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 37);
			this->button3->TabIndex = 30;
			this->button3->Text = L"Borrar Tareas";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calendario::Button3_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(6, 205);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 37);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Agregar Tarea";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calendario::Button2_Click);
			// 
			// Dia29
			// 
			this->Dia29->FormattingEnabled = true;
			this->Dia29->ItemHeight = 16;
			this->Dia29->Location = System::Drawing::Point(718, 137);
			this->Dia29->Name = L"Dia29";
			this->Dia29->Size = System::Drawing::Size(83, 52);
			this->Dia29->TabIndex = 27;
			this->Dia29->Click += gcnew System::EventHandler(this, &Calendario::Dia29_Click);
			// 
			// Dia30
			// 
			this->Dia30->FormattingEnabled = true;
			this->Dia30->ItemHeight = 16;
			this->Dia30->Location = System::Drawing::Point(807, 137);
			this->Dia30->Name = L"Dia30";
			this->Dia30->Size = System::Drawing::Size(83, 52);
			this->Dia30->TabIndex = 28;
			this->Dia30->Click += gcnew System::EventHandler(this, &Calendario::Dia30_Click);
			// 
			// Dia28
			// 
			this->Dia28->FormattingEnabled = true;
			this->Dia28->ItemHeight = 16;
			this->Dia28->Location = System::Drawing::Point(629, 137);
			this->Dia28->Name = L"Dia28";
			this->Dia28->Size = System::Drawing::Size(83, 52);
			this->Dia28->TabIndex = 26;
			this->Dia28->Click += gcnew System::EventHandler(this, &Calendario::Dia28_Click);
			// 
			// Dia27
			// 
			this->Dia27->FormattingEnabled = true;
			this->Dia27->ItemHeight = 16;
			this->Dia27->Location = System::Drawing::Point(540, 137);
			this->Dia27->Name = L"Dia27";
			this->Dia27->Size = System::Drawing::Size(83, 52);
			this->Dia27->TabIndex = 25;
			this->Dia27->Click += gcnew System::EventHandler(this, &Calendario::Dia27_Click);
			// 
			// Dia26
			// 
			this->Dia26->FormattingEnabled = true;
			this->Dia26->ItemHeight = 16;
			this->Dia26->Location = System::Drawing::Point(451, 137);
			this->Dia26->Name = L"Dia26";
			this->Dia26->Size = System::Drawing::Size(83, 52);
			this->Dia26->TabIndex = 24;
			this->Dia26->Click += gcnew System::EventHandler(this, &Calendario::Dia26_Click);
			// 
			// Dia25
			// 
			this->Dia25->FormattingEnabled = true;
			this->Dia25->ItemHeight = 16;
			this->Dia25->Location = System::Drawing::Point(362, 137);
			this->Dia25->Name = L"Dia25";
			this->Dia25->Size = System::Drawing::Size(83, 52);
			this->Dia25->TabIndex = 23;
			this->Dia25->Click += gcnew System::EventHandler(this, &Calendario::Dia25_Click);
			// 
			// Dia23
			// 
			this->Dia23->FormattingEnabled = true;
			this->Dia23->ItemHeight = 16;
			this->Dia23->Location = System::Drawing::Point(184, 137);
			this->Dia23->Name = L"Dia23";
			this->Dia23->Size = System::Drawing::Size(83, 52);
			this->Dia23->TabIndex = 21;
			this->Dia23->Click += gcnew System::EventHandler(this, &Calendario::Dia23_Click);
			// 
			// Dia24
			// 
			this->Dia24->FormattingEnabled = true;
			this->Dia24->ItemHeight = 16;
			this->Dia24->Location = System::Drawing::Point(273, 137);
			this->Dia24->Name = L"Dia24";
			this->Dia24->Size = System::Drawing::Size(83, 52);
			this->Dia24->TabIndex = 22;
			this->Dia24->Click += gcnew System::EventHandler(this, &Calendario::Dia24_Click);
			// 
			// Dia22
			// 
			this->Dia22->FormattingEnabled = true;
			this->Dia22->ItemHeight = 16;
			this->Dia22->Location = System::Drawing::Point(95, 137);
			this->Dia22->Name = L"Dia22";
			this->Dia22->Size = System::Drawing::Size(83, 52);
			this->Dia22->TabIndex = 20;
			this->Dia22->Click += gcnew System::EventHandler(this, &Calendario::Dia22_Click);
			// 
			// Dia21
			// 
			this->Dia21->FormattingEnabled = true;
			this->Dia21->ItemHeight = 16;
			this->Dia21->Location = System::Drawing::Point(6, 137);
			this->Dia21->Name = L"Dia21";
			this->Dia21->Size = System::Drawing::Size(83, 52);
			this->Dia21->TabIndex = 19;
			this->Dia21->Click += gcnew System::EventHandler(this, &Calendario::Dia21_Click);
			// 
			// Dia19
			// 
			this->Dia19->FormattingEnabled = true;
			this->Dia19->ItemHeight = 16;
			this->Dia19->Location = System::Drawing::Point(718, 79);
			this->Dia19->Name = L"Dia19";
			this->Dia19->Size = System::Drawing::Size(83, 52);
			this->Dia19->TabIndex = 17;
			this->Dia19->Click += gcnew System::EventHandler(this, &Calendario::Dia19_Click);
			// 
			// Dia20
			// 
			this->Dia20->FormattingEnabled = true;
			this->Dia20->ItemHeight = 16;
			this->Dia20->Location = System::Drawing::Point(807, 79);
			this->Dia20->Name = L"Dia20";
			this->Dia20->Size = System::Drawing::Size(83, 52);
			this->Dia20->TabIndex = 18;
			this->Dia20->Click += gcnew System::EventHandler(this, &Calendario::Dia20_Click);
			// 
			// Dia18
			// 
			this->Dia18->FormattingEnabled = true;
			this->Dia18->ItemHeight = 16;
			this->Dia18->Location = System::Drawing::Point(629, 79);
			this->Dia18->Name = L"Dia18";
			this->Dia18->Size = System::Drawing::Size(83, 52);
			this->Dia18->TabIndex = 16;
			this->Dia18->Click += gcnew System::EventHandler(this, &Calendario::Dia18_Click);
			// 
			// Dia17
			// 
			this->Dia17->FormattingEnabled = true;
			this->Dia17->ItemHeight = 16;
			this->Dia17->Location = System::Drawing::Point(540, 79);
			this->Dia17->Name = L"Dia17";
			this->Dia17->Size = System::Drawing::Size(83, 52);
			this->Dia17->TabIndex = 15;
			this->Dia17->Click += gcnew System::EventHandler(this, &Calendario::Dia17_Click);
			this->Dia17->SelectedIndexChanged += gcnew System::EventHandler(this, &Calendario::Dia17_SelectedIndexChanged);
			// 
			// Dia16
			// 
			this->Dia16->FormattingEnabled = true;
			this->Dia16->ItemHeight = 16;
			this->Dia16->Location = System::Drawing::Point(451, 79);
			this->Dia16->Name = L"Dia16";
			this->Dia16->Size = System::Drawing::Size(83, 52);
			this->Dia16->TabIndex = 14;
			this->Dia16->Click += gcnew System::EventHandler(this, &Calendario::Dia16_Click);
			// 
			// Dia15
			// 
			this->Dia15->FormattingEnabled = true;
			this->Dia15->ItemHeight = 16;
			this->Dia15->Location = System::Drawing::Point(362, 79);
			this->Dia15->Name = L"Dia15";
			this->Dia15->Size = System::Drawing::Size(83, 52);
			this->Dia15->TabIndex = 13;
			this->Dia15->Click += gcnew System::EventHandler(this, &Calendario::Dia15_Click);
			// 
			// Dia13
			// 
			this->Dia13->FormattingEnabled = true;
			this->Dia13->ItemHeight = 16;
			this->Dia13->Location = System::Drawing::Point(184, 79);
			this->Dia13->Name = L"Dia13";
			this->Dia13->Size = System::Drawing::Size(83, 52);
			this->Dia13->TabIndex = 11;
			this->Dia13->Click += gcnew System::EventHandler(this, &Calendario::Dia13_Click);
			// 
			// Dia14
			// 
			this->Dia14->FormattingEnabled = true;
			this->Dia14->ItemHeight = 16;
			this->Dia14->Location = System::Drawing::Point(273, 79);
			this->Dia14->Name = L"Dia14";
			this->Dia14->Size = System::Drawing::Size(83, 52);
			this->Dia14->TabIndex = 12;
			this->Dia14->Click += gcnew System::EventHandler(this, &Calendario::Dia14_Click);
			// 
			// Dia12
			// 
			this->Dia12->FormattingEnabled = true;
			this->Dia12->ItemHeight = 16;
			this->Dia12->Location = System::Drawing::Point(95, 79);
			this->Dia12->Name = L"Dia12";
			this->Dia12->Size = System::Drawing::Size(83, 52);
			this->Dia12->TabIndex = 10;
			this->Dia12->Click += gcnew System::EventHandler(this, &Calendario::Dia12_Click);
			// 
			// Dia11
			// 
			this->Dia11->FormattingEnabled = true;
			this->Dia11->ItemHeight = 16;
			this->Dia11->Location = System::Drawing::Point(6, 79);
			this->Dia11->Name = L"Dia11";
			this->Dia11->Size = System::Drawing::Size(83, 52);
			this->Dia11->TabIndex = 9;
			this->Dia11->Click += gcnew System::EventHandler(this, &Calendario::Dia11_Click);
			// 
			// Dia9
			// 
			this->Dia9->FormattingEnabled = true;
			this->Dia9->ItemHeight = 16;
			this->Dia9->Location = System::Drawing::Point(718, 21);
			this->Dia9->Name = L"Dia9";
			this->Dia9->Size = System::Drawing::Size(83, 52);
			this->Dia9->TabIndex = 7;
			this->Dia9->Click += gcnew System::EventHandler(this, &Calendario::Dia9_Click);
			this->Dia9->SelectedIndexChanged += gcnew System::EventHandler(this, &Calendario::Dia9_SelectedIndexChanged);
			// 
			// Dia10
			// 
			this->Dia10->FormattingEnabled = true;
			this->Dia10->ItemHeight = 16;
			this->Dia10->Location = System::Drawing::Point(807, 21);
			this->Dia10->Name = L"Dia10";
			this->Dia10->Size = System::Drawing::Size(83, 52);
			this->Dia10->TabIndex = 8;
			this->Dia10->Click += gcnew System::EventHandler(this, &Calendario::Dia10_Click);
			this->Dia10->SelectedIndexChanged += gcnew System::EventHandler(this, &Calendario::Dia10_SelectedIndexChanged);
			// 
			// Dia8
			// 
			this->Dia8->FormattingEnabled = true;
			this->Dia8->ItemHeight = 16;
			this->Dia8->Location = System::Drawing::Point(629, 21);
			this->Dia8->Name = L"Dia8";
			this->Dia8->Size = System::Drawing::Size(83, 52);
			this->Dia8->TabIndex = 6;
			this->Dia8->Click += gcnew System::EventHandler(this, &Calendario::Dia8_Click);
			this->Dia8->SelectedIndexChanged += gcnew System::EventHandler(this, &Calendario::Dia8_SelectedIndexChanged);
			// 
			// Dia7
			// 
			this->Dia7->FormattingEnabled = true;
			this->Dia7->ItemHeight = 16;
			this->Dia7->Location = System::Drawing::Point(540, 21);
			this->Dia7->Name = L"Dia7";
			this->Dia7->Size = System::Drawing::Size(83, 52);
			this->Dia7->TabIndex = 5;
			this->Dia7->Click += gcnew System::EventHandler(this, &Calendario::Dia7_Click);
			this->Dia7->SelectedIndexChanged += gcnew System::EventHandler(this, &Calendario::Dia7_SelectedIndexChanged);
			// 
			// Dia6
			// 
			this->Dia6->FormattingEnabled = true;
			this->Dia6->ItemHeight = 16;
			this->Dia6->Location = System::Drawing::Point(451, 21);
			this->Dia6->Name = L"Dia6";
			this->Dia6->Size = System::Drawing::Size(83, 52);
			this->Dia6->TabIndex = 4;
			this->Dia6->Click += gcnew System::EventHandler(this, &Calendario::Dia6_Click);
			// 
			// Dia5
			// 
			this->Dia5->FormattingEnabled = true;
			this->Dia5->ItemHeight = 16;
			this->Dia5->Location = System::Drawing::Point(362, 21);
			this->Dia5->Name = L"Dia5";
			this->Dia5->Size = System::Drawing::Size(83, 52);
			this->Dia5->TabIndex = 3;
			this->Dia5->Click += gcnew System::EventHandler(this, &Calendario::Dia5_Click);
			// 
			// Dia3
			// 
			this->Dia3->FormattingEnabled = true;
			this->Dia3->ItemHeight = 16;
			this->Dia3->Location = System::Drawing::Point(184, 21);
			this->Dia3->Name = L"Dia3";
			this->Dia3->Size = System::Drawing::Size(83, 52);
			this->Dia3->TabIndex = 2;
			this->Dia3->Click += gcnew System::EventHandler(this, &Calendario::Dia3_Click);
			// 
			// Dia4
			// 
			this->Dia4->FormattingEnabled = true;
			this->Dia4->ItemHeight = 16;
			this->Dia4->Location = System::Drawing::Point(273, 21);
			this->Dia4->Name = L"Dia4";
			this->Dia4->Size = System::Drawing::Size(83, 52);
			this->Dia4->TabIndex = 2;
			this->Dia4->Click += gcnew System::EventHandler(this, &Calendario::Dia4_Click);
			// 
			// Dia2
			// 
			this->Dia2->FormattingEnabled = true;
			this->Dia2->ItemHeight = 16;
			this->Dia2->Location = System::Drawing::Point(95, 21);
			this->Dia2->Name = L"Dia2";
			this->Dia2->Size = System::Drawing::Size(83, 52);
			this->Dia2->TabIndex = 1;
			this->Dia2->Click += gcnew System::EventHandler(this, &Calendario::Dia2_Click);
			// 
			// Dia1
			// 
			this->Dia1->FormattingEnabled = true;
			this->Dia1->ItemHeight = 16;
			this->Dia1->Location = System::Drawing::Point(6, 21);
			this->Dia1->Name = L"Dia1";
			this->Dia1->Size = System::Drawing::Size(83, 52);
			this->Dia1->TabIndex = 0;
			this->Dia1->Click += gcnew System::EventHandler(this, &Calendario::Dia1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lblCambio);
			this->groupBox3->Location = System::Drawing::Point(20, 317);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(904, 64);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Tareas del dia";
			// 
			// lblCambio
			// 
			this->lblCambio->AutoSize = true;
			this->lblCambio->Location = System::Drawing::Point(7, 18);
			this->lblCambio->Name = L"lblCambio";
			this->lblCambio->Size = System::Drawing::Size(0, 17);
			this->lblCambio->TabIndex = 3;
			// 
			// groupAgregar
			// 
			this->groupAgregar->Controls->Add(this->label6);
			this->groupAgregar->Controls->Add(this->cmbDia);
			this->groupAgregar->Controls->Add(this->label5);
			this->groupAgregar->Controls->Add(this->txtAgregar);
			this->groupAgregar->Controls->Add(this->label4);
			this->groupAgregar->Controls->Add(this->label3);
			this->groupAgregar->Controls->Add(this->label2);
			this->groupAgregar->Controls->Add(this->label1);
			this->groupAgregar->Controls->Add(this->cmbHORARIA);
			this->groupAgregar->Controls->Add(this->cmbMinutos);
			this->groupAgregar->Controls->Add(this->cmbHora);
			this->groupAgregar->Controls->Add(this->btnAceptar);
			this->groupAgregar->Controls->Add(this->cmbTipoTarea);
			this->groupAgregar->Enabled = false;
			this->groupAgregar->Location = System::Drawing::Point(931, 22);
			this->groupAgregar->Name = L"groupAgregar";
			this->groupAgregar->Size = System::Drawing::Size(207, 289);
			this->groupAgregar->TabIndex = 4;
			this->groupAgregar->TabStop = false;
			this->groupAgregar->Text = L"Agregar tarea";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 17);
			this->label6->TabIndex = 74;
			this->label6->Text = L"Dia";
			// 
			// cmbDia
			// 
			this->cmbDia->FormattingEnabled = true;
			this->cmbDia->Items->AddRange(gcnew cli::array< System::Object^  >(30) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", L"27",
					L"28", L"29", L"30"
			});
			this->cmbDia->Location = System::Drawing::Point(7, 217);
			this->cmbDia->Name = L"cmbDia";
			this->cmbDia->Size = System::Drawing::Size(59, 24);
			this->cmbDia->TabIndex = 73;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 144);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 17);
			this->label5->TabIndex = 72;
			this->label5->Text = L"Agregar texto tarea";
			// 
			// txtAgregar
			// 
			this->txtAgregar->Location = System::Drawing::Point(7, 164);
			this->txtAgregar->Multiline = true;
			this->txtAgregar->Name = L"txtAgregar";
			this->txtAgregar->Size = System::Drawing::Size(187, 30);
			this->txtAgregar->TabIndex = 65;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(134, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 17);
			this->label4->TabIndex = 71;
			this->label4->Text = L"AM/PM";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(66, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 17);
			this->label3->TabIndex = 70;
			this->label3->Text = L"Minutos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 17);
			this->label2->TabIndex = 69;
			this->label2->Text = L"Hora";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 17);
			this->label1->TabIndex = 68;
			this->label1->Text = L"Tipo tarea";
			// 
			// cmbHORARIA
			// 
			this->cmbHORARIA->FormattingEnabled = true;
			this->cmbHORARIA->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->cmbHORARIA->Location = System::Drawing::Point(134, 106);
			this->cmbHORARIA->Name = L"cmbHORARIA";
			this->cmbHORARIA->Size = System::Drawing::Size(59, 24);
			this->cmbHORARIA->TabIndex = 67;
			// 
			// cmbMinutos
			// 
			this->cmbMinutos->FormattingEnabled = true;
			this->cmbMinutos->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"0", L"5", L"10", L"15", L"20", L"25", L"30",
					L"35", L"40", L"45", L"50", L"55"
			});
			this->cmbMinutos->Location = System::Drawing::Point(69, 106);
			this->cmbMinutos->Name = L"cmbMinutos";
			this->cmbMinutos->Size = System::Drawing::Size(59, 24);
			this->cmbMinutos->TabIndex = 66;
			// 
			// cmbHora
			// 
			this->cmbHora->FormattingEnabled = true;
			this->cmbHora->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->cmbHora->Location = System::Drawing::Point(7, 106);
			this->cmbHora->Name = L"cmbHora";
			this->cmbHora->Size = System::Drawing::Size(59, 24);
			this->cmbHora->TabIndex = 65;
			// 
			// btnAceptar
			// 
			this->btnAceptar->Location = System::Drawing::Point(7, 246);
			this->btnAceptar->Name = L"btnAceptar";
			this->btnAceptar->Size = System::Drawing::Size(186, 37);
			this->btnAceptar->TabIndex = 64;
			this->btnAceptar->Text = L"Aceptar";
			this->btnAceptar->UseVisualStyleBackColor = true;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &Calendario::Button1_Click);
			// 
			// cmbTipoTarea
			// 
			this->cmbTipoTarea->FormattingEnabled = true;
			this->cmbTipoTarea->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"SIMPLE", L"RECORDATORIO", L"ALARMA" });
			this->cmbTipoTarea->Location = System::Drawing::Point(6, 52);
			this->cmbTipoTarea->Name = L"cmbTipoTarea";
			this->cmbTipoTarea->Size = System::Drawing::Size(186, 24);
			this->cmbTipoTarea->TabIndex = 0;
			// 
			// groupEditar
			// 
			this->groupEditar->Controls->Add(this->btnActualizar);
			this->groupEditar->Controls->Add(this->txtEditar);
			this->groupEditar->Enabled = false;
			this->groupEditar->Location = System::Drawing::Point(930, 317);
			this->groupEditar->Name = L"groupEditar";
			this->groupEditar->Size = System::Drawing::Size(200, 133);
			this->groupEditar->TabIndex = 5;
			this->groupEditar->TabStop = false;
			this->groupEditar->Text = L"Editar Tarea";
			// 
			// btnActualizar
			// 
			this->btnActualizar->Location = System::Drawing::Point(6, 96);
			this->btnActualizar->Name = L"btnActualizar";
			this->btnActualizar->Size = System::Drawing::Size(194, 37);
			this->btnActualizar->TabIndex = 64;
			this->btnActualizar->Text = L"Actualizar Tarea";
			this->btnActualizar->UseVisualStyleBackColor = true;
			this->btnActualizar->Click += gcnew System::EventHandler(this, &Calendario::BtnActualizar_Click);
			// 
			// txtEditar
			// 
			this->txtEditar->Location = System::Drawing::Point(7, 22);
			this->txtEditar->Multiline = true;
			this->txtEditar->Name = L"txtEditar";
			this->txtEditar->Size = System::Drawing::Size(187, 68);
			this->txtEditar->TabIndex = 0;
			// 
			// ContadorDias
			// 
			this->ContadorDias->Interval = 10000;
			this->ContadorDias->Tick += gcnew System::EventHandler(this, &Calendario::ContadorDias_Tick);
			// 
			// Aplazador
			// 
			this->Aplazador->Interval = 6000;
			this->Aplazador->Tick += gcnew System::EventHandler(this, &Calendario::Aplazador_Tick);
			// 
			// lblDia
			// 
			this->lblDia->AutoSize = true;
			this->lblDia->Location = System::Drawing::Point(20, 389);
			this->lblDia->Name = L"lblDia";
			this->lblDia->Size = System::Drawing::Size(16, 17);
			this->lblDia->TabIndex = 6;
			this->lblDia->Text = L"1";
			// 
			// txtAlarma
			// 
			this->txtAlarma->Location = System::Drawing::Point(244, 420);
			this->txtAlarma->Name = L"txtAlarma";
			this->txtAlarma->Size = System::Drawing::Size(302, 22);
			this->txtAlarma->TabIndex = 64;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(552, 389);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 53);
			this->button1->TabIndex = 65;
			this->button1->Text = L"INGRESAR ALARMA";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calendario::Button1_Click_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(244, 397);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(171, 17);
			this->label7->TabIndex = 66;
			this->label7->Text = L"INGRESE RUTA ALARMA";
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(672, 389);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 53);
			this->button4->TabIndex = 67;
			this->button4->Text = L"Prueba alarma";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calendario::Button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(793, 387);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 53);
			this->button5->TabIndex = 68;
			this->button5->Text = L"EXPORTAR CALENDARIO";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Calendario::Button5_Click);
			// 
			// lblMes
			// 
			this->lblMes->AutoSize = true;
			this->lblMes->Location = System::Drawing::Point(20, 432);
			this->lblMes->Name = L"lblMes";
			this->lblMes->Size = System::Drawing::Size(48, 17);
			this->lblMes->TabIndex = 69;
			this->lblMes->Text = L"lblMes";
			// 
			// Calendario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1192, 475);
			this->Controls->Add(this->lblMes);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtAlarma);
			this->Controls->Add(this->lblDia);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupEditar);
			this->Controls->Add(this->groupAgregar);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Calendario";
			this->Text = L"Calendario";
			this->Load += gcnew System::EventHandler(this, &Calendario::Calendario_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupAgregar->ResumeLayout(false);
			this->groupAgregar->PerformLayout();
			this->groupEditar->ResumeLayout(false);
			this->groupEditar->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Calendario_Load(System::Object^ sender, System::EventArgs^ e) {
		lblMes->Text = System::Convert::ToString(DateTime::Now);
	}

			 ///////////////////////////////////////////////////////////////////////////////////////////////////////
	//Nos ayudara a ver en que dia estamos
	int GlobalDia = 0;
	int AyudaDia;
	//Variable en la cual podremos mandar a llamar nuestro archivo txt
	String^ Ruta = "";

	//Esta servira para la cancion
	String^ Ruta2 = "";
	//private: SoundPlayer Player = new SoundPlayer();


	
	//ARREGLO PARA USUARIO el usuario
	array<String^>^ ArregloString = gcnew array< String^ >(30);
	
	//ARREGLO PARA ALARMAS el usuario
	array<String^>^ ArregloALARMAS = gcnew array< String^ >(30);
	//ARREGLO PARA RECORDATORIO el usuario
	array<String^>^ ArregloRECORDATORIO = gcnew array< String^ >(30);
	private: System::Void BtnLeer_Click(System::Object^ sender, System::EventArgs^ e) {
		button5->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
		btnEditar->Enabled = true;
		Ruta = txtIngreseRuta->Text;

		//C:\Users\ZeroJChang\Desktop\Archivo1.txt
		if (Ruta != "")
		{
			try
			{

				LeerArchivo1();
				ContadorDias->Enabled = true;
				Oka->Text = "Se encontro el archivo y se guardo correctamente :D";
				Oka->ForeColor = ForeColor.Green;
				Oka->Visible = true;
				
			}
			catch (const std::exception&)
			{
				Oka->Text = "POR FAVOR REVISAR SI LA RUTA DEL ARCHIVO ES LA CORRECTA";
				Oka->ForeColor = ForeColor.Red;
				Oka->Visible = true;
			}

		}
		else
		{
			Oka->Text = "POR FAVOR REVISAR SI LA RUTA DEL ARCHIVO ES LA CORRECTA";
			Oka->ForeColor = ForeColor.Red;
			Oka->Visible = true;
		}
	}

			 void LeerArchivo1()
			 {
				 try {
					 StreamReader^ Lector = gcnew StreamReader(Ruta);
					 String^ Linea = Lector->ReadLine();
					 
					 int contador = 0;
					 //Mientras linea sea != de null
					 while (Linea != nullptr)
					 {//hacemos un split por ,
						 array<String^>^ ArregloAux = Linea->Split(',');

						 //ArregloInt[contador] = System::Convert::ToInt32(ArregloAux[0]);
						 ArregloString[contador] = ArregloAux[1];
						 contador++;
						 // lo queres hacer con el arreglo
						 Linea = Lector->ReadLine();
					 }
					 Lector->Close();
				 }
				 catch(const std::exception&){
					 System::Windows::Forms::MessageBox::Show("La ruta no existe :C (REVISAR)", "T_T");
				 }

			 }

			 void mostrarDatos(int a) {

				 lblCambio->Text = ArregloString[a];
			 }

			 void mostrarEditar(int a) {
				 
				 txtEditar->Text = ArregloString[a];
				 
			 }

			 void borrarDatos(int a) {

				 ArregloString[a]="";

			 }
private: System::Void Dia1_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl1->Text) -1);
	AyudaDia = System::Convert::ToInt32(lbl1->Text) -1;
}
private: System::Void Dia2_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl2->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl2->Text) - 1;
}

private: System::Void Dia3_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl3->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl3->Text) - 1;
}
private: System::Void Dia4_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl4->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl4->Text) - 1;
}


private: System::Void Dia5_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl5->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl5->Text) - 1;
}

private: System::Void Dia6_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl6->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl6->Text) - 1;
}

private: System::Void Dia7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl7->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl7->Text) - 1;
}
private: System::Void Dia8_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl8->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl8->Text)-1;
}
private: System::Void Dia9_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl9->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl9->Text) - 1;
}


private: System::Void Dia10_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Dia10_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl10->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl10->Text) - 1;
}
private: System::Void c(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Dia11_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl11->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl11->Text) - 1;
}
private: System::Void Dia12_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl12->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl12->Text) - 1;
}
private: System::Void Dia13_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl13->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl13->Text) - 1;
}
private: System::Void Dia14_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl14->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl14->Text) - 1;
}
private: System::Void Dia15_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl15->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl15->Text) - 1;
}
private: System::Void Dia16_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl16->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl16->Text) - 1;
}
private: System::Void Dia17_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Dia17_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl17->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl17->Text) - 1;
}
private: System::Void Dia18_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl18->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl18->Text) - 1;

}
private: System::Void Dia19_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl19->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl19->Text) - 1;
}
private: System::Void Dia20_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl20->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl20->Text) - 1;
}
private: System::Void Dia21_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl21->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl21->Text) - 1;
}
private: System::Void Dia22_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl22->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl22->Text) - 1;
}
private: System::Void Dia23_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl23->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl23->Text) - 1;
}
private: System::Void Dia24_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl24->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl24->Text) - 1;
}
private: System::Void Dia25_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl25->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl25->Text) - 1;
}
private: System::Void Dia26_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl26->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl26->Text) - 1;
}


private: System::Void Dia27_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl27->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl27->Text) - 1;
}
private: System::Void Dia28_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl28->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl28->Text) - 1;
}
private: System::Void Dia29_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl29->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl29->Text) - 1;
}
private: System::Void Dia30_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl30->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl30->Text) - 1;
}
private: System::Void BtnEditar_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarEditar(AyudaDia);
	groupEditar->Enabled=true;
}


private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ datos="";
	int dia =0;

	dia = System::Convert::ToInt32(cmbDia->Text) - 1;
	if (cmbTipoTarea->Text->Equals("SIMPLE")) {
		ArregloString[dia] = ArregloString[dia] + " S: "+ txtAgregar->Text+ " " + cmbHora->Text + ":" + cmbMinutos->Text+ cmbHORARIA->Text;
		//ArregloString[System::Convert::ToInt32(cmbDia->Text) - 1] = "S: " + txtAgregar + cmbHora->Text + ":" + cmbMinutos->Text + cmbHORARIA;
	}
	else if (cmbTipoTarea->Text->Equals("RECORDATORIO")) {
		ArregloString[dia] = ArregloString[dia] + " R: " + txtAgregar->Text + " " + cmbHora->Text + ":" + cmbMinutos->Text + cmbHORARIA->Text;
		ArregloRECORDATORIO[dia] = ArregloRECORDATORIO[dia]+ "R: " + txtAgregar->Text + " " + cmbHora->Text + ":" + cmbMinutos->Text + cmbHORARIA->Text;
	}
	else if (cmbTipoTarea->Text->Equals("ALARMA")) {
		ArregloString[dia] = ArregloString[dia] + " A: " + txtAgregar->Text + " " + cmbHora->Text + ":" + cmbMinutos->Text + cmbHORARIA->Text;
		ArregloALARMAS[dia] = ArregloALARMAS[dia] + "A: " + txtAgregar->Text + " " + cmbHora->Text + ":" + cmbMinutos->Text + cmbHORARIA->Text;
	}
	txtAgregar->Text = "";
	cmbDia->Text = "";
	cmbHora->Text = "";
	cmbMinutos->Text = "";
	cmbHORARIA->Text = "";
	groupAgregar->Enabled = false;
}


private: System::Void Dia7_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl7->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl7->Text) - 1;
}
private: System::Void Dia8_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl8->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl8->Text) - 1;
}
private: System::Void Dia9_Click(System::Object^ sender, System::EventArgs^ e) {
	mostrarDatos(System::Convert::ToInt32(lbl9->Text) - 1);
	AyudaDia = System::Convert::ToInt32(lbl9->Text) - 1;
}
private: System::Void BtnActualizar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	System::Windows::Forms::DialogResult::Yes;
	if (MessageBox::Show(System::Convert::ToString(ArregloString[AyudaDia] + " se actualizara a " + txtEditar->Text), "ACTUALIZAR", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		MessageBox::Show("OKAY :D", "ACTUALIZADO");
		ArregloString[AyudaDia] = txtEditar->Text;

		txtEditar->Text = "";
		groupEditar->Enabled = false;
	}
	else
	{
		MessageBox::Show("No actualizo", "NO ACTUALIZADO");
		txtEditar->Text = "";
		groupEditar->Enabled = false;
	}

}
		 
		 //ESTE SERVIRA PARA LOS RECORDATORIOS
		 void validarRECORDATORIO() {
			 
			 if (ArregloRECORDATORIO[GlobalDia] != nullptr) {
				 System::Windows::Forms::DialogResult::Yes;
				 ContadorDias->Enabled = false;
				 if (MessageBox::Show(System::Convert::ToString(ArregloString[GlobalDia]) + " ¿Desea posponer?", "Recordatorio", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				 {
					 GlobalDia--;
					 MessageBox::Show("5 mins mas :D", "APLAZAR");
					 Aplazador->Enabled = true;
				 }
				 else
				 {
					 MessageBox::Show("Ojala realice todas sus actividades! :D", "TERMINAR");
					 ContadorDias->Enabled = true;
					 ArregloRECORDATORIO[GlobalDia] = nullptr;
				 }
				 
				 
			 }

			 if (ArregloALARMAS[GlobalDia] != nullptr) {
				 SoundPlayer^ osi = gcnew SoundPlayer(Ruta2);
				 osi->PlayLooping();
				 System::Windows::Forms::DialogResult::Yes;
				 ContadorDias->Enabled = false;
				 if (MessageBox::Show(System::Convert::ToString(ArregloString[GlobalDia]) + " ¿Desea posponer?", "ALARMA", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				 {
					 groupAgregar->Enabled = false;
					 groupEditar->Enabled = false;
					 groupBox2->Enabled = false;
					 groupBox3->Enabled = false;
					 osi->Stop();
					 GlobalDia--;
					 MessageBox::Show("5 mins mas :D", "APLAZAR");
					 Aplazador->Enabled = true;

					 groupBox2->Enabled = true;
					 groupBox3->Enabled = true;
				 }
				 else
				 {
					 groupAgregar->Enabled = false;
					 groupEditar->Enabled = false;
					 groupBox2->Enabled = false;
					 groupBox3->Enabled = false;
					 MessageBox::Show("Ojala realice todas sus actividades! :D", "TERMINAR");
					 ContadorDias->Enabled = true;
					 ArregloALARMAS[GlobalDia] = nullptr;
					 osi->Stop();

					 groupBox2->Enabled = true;
					 groupBox3->Enabled = true;
				 }


			 }
		 }
		 
private: System::Void ContadorDias_Tick(System::Object^ sender, System::EventArgs^ e) {
	validarRECORDATORIO();
	GlobalDia++;
	lblDia->Text = System::Convert::ToString(GlobalDia);
	if (GlobalDia == 30) {
		GlobalDia = 1;
	}
	
}


		 
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult::Yes;
	if (MessageBox::Show(System::Convert::ToString(ArregloString[AyudaDia]), "¿Seguro de borrar?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		MessageBox::Show("Adios actividades", "BORRAR");
		ArregloString[AyudaDia] = "";
	}
	else
	{
		MessageBox::Show("No se borro", "NO BORRAR");
	}

}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	groupAgregar->Enabled = true;
}
private: System::Void Aplazador_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (Aplazador->Interval == 6000) {
		Aplazador->Enabled = false;
		validarRECORDATORIO();
	}
}
private: System::Void Button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	button4->Enabled = true;
	btnLeer->Enabled = true;
	Ruta2 = txtAlarma->Text;
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	SoundPlayer^ osi = gcnew SoundPlayer(Ruta2);
	osi->PlayLooping();
}


private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamWriter^ streamwriter = gcnew StreamWriter(Ruta);
	String^ textoDelArchivo;
	for (int i = 0; i < ArregloString->Length;i++) {
		
		if (i == 29) {
			textoDelArchivo += i + "," + ArregloString[i];
		}
		else {
			textoDelArchivo += i + "," + ArregloString[i] + "\n";
		}
	}
	streamwriter->Write(textoDelArchivo);
	streamwriter->Close();
}
};
}
