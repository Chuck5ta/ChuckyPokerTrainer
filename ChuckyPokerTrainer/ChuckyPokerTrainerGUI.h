#pragma once

#include "PreFlopTables.h"
#include "DisplayCards.h"
//#include "PreFlopTable.h"
#include <iostream>
#include <string.h>

#include <msclr\marshal_cppstd.h> // needed for System:String to std::string

// my own types
#include "CustomTypes.h"

#define UNRAISED_EARLY_RAISE 0
#define UNRAISED_EARLY_CALL 1
#define UNRAISED_MIDDLE_RAISE 2
#define UNRAISED_MIDDLE_CALL 3

#include "GlobalVariables.h"


namespace ChuckyPokerTrainer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop; // needed for System:String to std::string

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class ChuckyPokerTrainerGUI : public System::Windows::Forms::Form
	{
	public:
		ChuckyPokerTrainerGUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			initialiseSystem();


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ChuckyPokerTrainerGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPreFlopTableTest;
	protected: 

	private: System::Windows::Forms::TabPage^  tabPreFlopTables;

	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::TextBox^  textAnswer;
	private: System::Windows::Forms::TextBox^  textPreflopTable;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lblPreflopTitle;
	private: System::Windows::Forms::Label^  lblResult;
	private: System::Windows::Forms::TextBox^  textPreflopCorrectAnswer;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtUPEarlyCALL;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtRPAnyRAISE;

	private: System::Windows::Forms::TextBox^  txtRPBigBlindRAISE;
private: System::Windows::Forms::TextBox^  txtRPNotBibBlindRAISE;


private: System::Windows::Forms::TextBox^  txtUPBigBlindRAISE;

	private: System::Windows::Forms::TextBox^  txtUPSmallBlindRAISE;
private: System::Windows::Forms::TextBox^  txtUPLateRAISE;
private: System::Windows::Forms::TextBox^  txtUPMiddleRAISE;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtUPEarlyRAISE;
private: System::Windows::Forms::TabPage^  tabIdentifyTheNuts;

private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::TextBox^  txtUPLateCALL;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::TextBox^  txtUPSmallBlindCALL;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::TextBox^  txtUPMiddleCALL;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::TextBox^  txtRPBigBlindCALL;
private: System::Windows::Forms::Label^  lblSeatingPosition;
private: System::Windows::Forms::Label^  lblPotState;
private: System::Windows::Forms::Button^  btnNextTest;
private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TabPage^  tabPreFlopCorrectPlay;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  lblCorrectPlayHand;
	private: System::Windows::Forms::Label^  lblCorrectPlayResult;
	private: System::Windows::Forms::Button^  btnCorrectPlayNextTest;
	private: System::Windows::Forms::Label^  lblCorrectPlaySeatingPosition;
	private: System::Windows::Forms::Label^  lblCorrectPlayPotState;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::TextBox^  textCorrectPlayAnswer;
	private: System::Windows::Forms::Label^  lblPreFlopCorrectPlay;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::PictureBox^  pbCard1;

private: System::Windows::Forms::PictureBox^  pbCard2;
private: System::Windows::Forms::Button^  btnHighCard;
private: System::Windows::Forms::Button^  btn1Pair;
private: System::Windows::Forms::Button^  btn2Pair;
private: System::Windows::Forms::Button^  btn3ofAKind;
private: System::Windows::Forms::Button^  btnStraight;
private: System::Windows::Forms::Button^  btnFlush;
private: System::Windows::Forms::Button^  btnFullHouse;
private: System::Windows::Forms::Button^  btnRoyalStraightFlush;
private: System::Windows::Forms::Button^  btn4ofAKind;
private: System::Windows::Forms::Button^  btnStraightFlush;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::PictureBox^  pbHoleCard2;
private: System::Windows::Forms::PictureBox^  pbHoleCard1;
private: System::Windows::Forms::PictureBox^  pbFlopCard3;
private: System::Windows::Forms::PictureBox^  pbFlopCard2;
private: System::Windows::Forms::PictureBox^  pbFlopCard1;
private: System::Windows::Forms::Button^  btnIDTheNutsNextTest;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ChuckyPokerTrainerGUI::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPreFlopTables = (gcnew System::Windows::Forms::TabPage());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->txtRPBigBlindCALL = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txtUPLateCALL = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtUPSmallBlindCALL = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txtUPMiddleCALL = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtUPEarlyCALL = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtRPAnyRAISE = (gcnew System::Windows::Forms::TextBox());
			this->txtRPBigBlindRAISE = (gcnew System::Windows::Forms::TextBox());
			this->txtRPNotBibBlindRAISE = (gcnew System::Windows::Forms::TextBox());
			this->txtUPBigBlindRAISE = (gcnew System::Windows::Forms::TextBox());
			this->txtUPSmallBlindRAISE = (gcnew System::Windows::Forms::TextBox());
			this->txtUPLateRAISE = (gcnew System::Windows::Forms::TextBox());
			this->txtUPMiddleRAISE = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUPEarlyRAISE = (gcnew System::Windows::Forms::TextBox());
			this->tabPreFlopTableTest = (gcnew System::Windows::Forms::TabPage());
			this->btnNextTest = (gcnew System::Windows::Forms::Button());
			this->lblSeatingPosition = (gcnew System::Windows::Forms::Label());
			this->lblPotState = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->textPreflopCorrectAnswer = (gcnew System::Windows::Forms::TextBox());
			this->textPreflopTable = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblPreflopTitle = (gcnew System::Windows::Forms::Label());
			this->textAnswer = (gcnew System::Windows::Forms::TextBox());
			this->tabPreFlopCorrectPlay = (gcnew System::Windows::Forms::TabPage());
			this->pbCard2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbCard1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblPreFlopCorrectPlay = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->lblCorrectPlayHand = (gcnew System::Windows::Forms::Label());
			this->lblCorrectPlayResult = (gcnew System::Windows::Forms::Label());
			this->btnCorrectPlayNextTest = (gcnew System::Windows::Forms::Button());
			this->lblCorrectPlaySeatingPosition = (gcnew System::Windows::Forms::Label());
			this->lblCorrectPlayPotState = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textCorrectPlayAnswer = (gcnew System::Windows::Forms::TextBox());
			this->tabIdentifyTheNuts = (gcnew System::Windows::Forms::TabPage());
			this->btnHighCard = (gcnew System::Windows::Forms::Button());
			this->btn1Pair = (gcnew System::Windows::Forms::Button());
			this->btn2Pair = (gcnew System::Windows::Forms::Button());
			this->btn3ofAKind = (gcnew System::Windows::Forms::Button());
			this->btnStraight = (gcnew System::Windows::Forms::Button());
			this->btnFlush = (gcnew System::Windows::Forms::Button());
			this->btnFullHouse = (gcnew System::Windows::Forms::Button());
			this->btnRoyalStraightFlush = (gcnew System::Windows::Forms::Button());
			this->btn4ofAKind = (gcnew System::Windows::Forms::Button());
			this->btnStraightFlush = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->pbHoleCard2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbHoleCard1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbFlopCard3 = (gcnew System::Windows::Forms::PictureBox());
			this->pbFlopCard2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbFlopCard1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnIDTheNutsNextTest = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPreFlopTables->SuspendLayout();
			this->tabPreFlopTableTest->SuspendLayout();
			this->tabPreFlopCorrectPlay->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCard2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCard1))->BeginInit();
			this->tabIdentifyTheNuts->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHoleCard2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHoleCard1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFlopCard3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFlopCard2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFlopCard1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPreFlopTables);
			this->tabControl1->Controls->Add(this->tabPreFlopTableTest);
			this->tabControl1->Controls->Add(this->tabPreFlopCorrectPlay);
			this->tabControl1->Controls->Add(this->tabIdentifyTheNuts);
			this->tabControl1->Location = System::Drawing::Point(56, 69);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1054, 491);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->Selected += gcnew System::Windows::Forms::TabControlEventHandler(this, &ChuckyPokerTrainerGUI::tabControl1_Selected);
			// 
			// tabPreFlopTables
			// 
			this->tabPreFlopTables->Controls->Add(this->panel7);
			this->tabPreFlopTables->Controls->Add(this->panel6);
			this->tabPreFlopTables->Controls->Add(this->panel5);
			this->tabPreFlopTables->Controls->Add(this->panel4);
			this->tabPreFlopTables->Controls->Add(this->panel3);
			this->tabPreFlopTables->Controls->Add(this->panel2);
			this->tabPreFlopTables->Controls->Add(this->panel1);
			this->tabPreFlopTables->Controls->Add(this->label25);
			this->tabPreFlopTables->Controls->Add(this->txtRPBigBlindCALL);
			this->tabPreFlopTables->Controls->Add(this->label24);
			this->tabPreFlopTables->Controls->Add(this->label23);
			this->tabPreFlopTables->Controls->Add(this->label22);
			this->tabPreFlopTables->Controls->Add(this->label21);
			this->tabPreFlopTables->Controls->Add(this->label20);
			this->tabPreFlopTables->Controls->Add(this->label19);
			this->tabPreFlopTables->Controls->Add(this->label18);
			this->tabPreFlopTables->Controls->Add(this->txtUPLateCALL);
			this->tabPreFlopTables->Controls->Add(this->label17);
			this->tabPreFlopTables->Controls->Add(this->txtUPSmallBlindCALL);
			this->tabPreFlopTables->Controls->Add(this->label16);
			this->tabPreFlopTables->Controls->Add(this->txtUPMiddleCALL);
			this->tabPreFlopTables->Controls->Add(this->label15);
			this->tabPreFlopTables->Controls->Add(this->label14);
			this->tabPreFlopTables->Controls->Add(this->label13);
			this->tabPreFlopTables->Controls->Add(this->label12);
			this->tabPreFlopTables->Controls->Add(this->label11);
			this->tabPreFlopTables->Controls->Add(this->label10);
			this->tabPreFlopTables->Controls->Add(this->label9);
			this->tabPreFlopTables->Controls->Add(this->label8);
			this->tabPreFlopTables->Controls->Add(this->label7);
			this->tabPreFlopTables->Controls->Add(this->label6);
			this->tabPreFlopTables->Controls->Add(this->label5);
			this->tabPreFlopTables->Controls->Add(this->txtUPEarlyCALL);
			this->tabPreFlopTables->Controls->Add(this->label4);
			this->tabPreFlopTables->Controls->Add(this->txtRPAnyRAISE);
			this->tabPreFlopTables->Controls->Add(this->txtRPBigBlindRAISE);
			this->tabPreFlopTables->Controls->Add(this->txtRPNotBibBlindRAISE);
			this->tabPreFlopTables->Controls->Add(this->txtUPBigBlindRAISE);
			this->tabPreFlopTables->Controls->Add(this->txtUPSmallBlindRAISE);
			this->tabPreFlopTables->Controls->Add(this->txtUPLateRAISE);
			this->tabPreFlopTables->Controls->Add(this->txtUPMiddleRAISE);
			this->tabPreFlopTables->Controls->Add(this->label3);
			this->tabPreFlopTables->Controls->Add(this->label2);
			this->tabPreFlopTables->Controls->Add(this->txtUPEarlyRAISE);
			this->tabPreFlopTables->Location = System::Drawing::Point(4, 22);
			this->tabPreFlopTables->Name = L"tabPreFlopTables";
			this->tabPreFlopTables->Padding = System::Windows::Forms::Padding(3);
			this->tabPreFlopTables->Size = System::Drawing::Size(1046, 465);
			this->tabPreFlopTables->TabIndex = 1;
			this->tabPreFlopTables->Text = L"PreFlop Tables";
			this->tabPreFlopTables->UseVisualStyleBackColor = true;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Gainsboro;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel7->Location = System::Drawing::Point(910, 56);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(3, 400);
			this->panel7->TabIndex = 43;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Gainsboro;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel6->Location = System::Drawing::Point(789, 56);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(3, 400);
			this->panel6->TabIndex = 42;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Gainsboro;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel5->Location = System::Drawing::Point(502, 56);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(3, 400);
			this->panel5->TabIndex = 41;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Gainsboro;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel4->Location = System::Drawing::Point(380, 56);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(3, 400);
			this->panel4->TabIndex = 40;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gainsboro;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel3->Location = System::Drawing::Point(259, 56);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(3, 400);
			this->panel3->TabIndex = 39;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Gainsboro;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel2->Location = System::Drawing::Point(136, 56);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(3, 400);
			this->panel2->TabIndex = 38;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SlateBlue;
			this->panel1->Location = System::Drawing::Point(636, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(5, 469);
			this->panel1->TabIndex = 37;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(805, 185);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(34, 16);
			this->label25->TabIndex = 36;
			this->label25->Text = L"Call:";
			// 
			// txtRPBigBlindCALL
			// 
			this->txtRPBigBlindCALL->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtRPBigBlindCALL->Location = System::Drawing::Point(801, 202);
			this->txtRPBigBlindCALL->Multiline = true;
			this->txtRPBigBlindCALL->Name = L"txtRPBigBlindCALL";
			this->txtRPBigBlindCALL->Size = System::Drawing::Size(100, 107);
			this->txtRPBigBlindCALL->TabIndex = 35;
			this->txtRPBigBlindCALL->Text = L"TT-22\r\nAJs-A2s\r\nKQs-K9s\r\nQJs-Q9s\r\nJTs-87s\r\nJ9s-T8s\r\nAQ\r\n";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(926, 59);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(59, 16);
			this->label24->TabIndex = 34;
			this->label24->Text = L"Reraise:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(805, 59);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(47, 16);
			this->label23->TabIndex = 33;
			this->label23->Text = L"Raise:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(681, 59);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(47, 16);
			this->label22->TabIndex = 32;
			this->label22->Text = L"Raise:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(920, 36);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(108, 16);
			this->label21->TabIndex = 31;
			this->label21->Text = L"ReRaised Any";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(814, 36);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(70, 16);
			this->label20->TabIndex = 30;
			this->label20->Text = L"Big Blind";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(681, 36);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(98, 16);
			this->label19->TabIndex = 29;
			this->label19->Text = L"Not Big Blind";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(276, 190);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(34, 16);
			this->label18->TabIndex = 28;
			this->label18->Text = L"Call:";
			// 
			// txtUPLateCALL
			// 
			this->txtUPLateCALL->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtUPLateCALL->Location = System::Drawing::Point(272, 208);
			this->txtUPLateCALL->Multiline = true;
			this->txtUPLateCALL->Name = L"txtUPLateCALL";
			this->txtUPLateCALL->Size = System::Drawing::Size(100, 92);
			this->txtUPLateCALL->TabIndex = 27;
			this->txtUPLateCALL->Text = L"77-22 \r\nA7s-A2s\r\nK9s \r\nQTs-Q9s\r\nJTs-87s \r\nJ9s-T8s \r\n";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(397, 190);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(34, 16);
			this->label17->TabIndex = 26;
			this->label17->Text = L"Call:";
			// 
			// txtUPSmallBlindCALL
			// 
			this->txtUPSmallBlindCALL->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtUPSmallBlindCALL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtUPSmallBlindCALL->Location = System::Drawing::Point(393, 208);
			this->txtUPSmallBlindCALL->Multiline = true;
			this->txtUPSmallBlindCALL->Name = L"txtUPSmallBlindCALL";
			this->txtUPSmallBlindCALL->Size = System::Drawing::Size(100, 117);
			this->txtUPSmallBlindCALL->TabIndex = 25;
			this->txtUPSmallBlindCALL->Text = L"88-22\r\nA9s-A2s\r\nKTs-K8s \r\nQJs-Q8s\r\nJTs-54s \r\nJ9s-T8s\r\nAT\r\nKJ\r\n";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(153, 189);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(31, 16);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Call";
			// 
			// txtUPMiddleCALL
			// 
			this->txtUPMiddleCALL->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtUPMiddleCALL->Location = System::Drawing::Point(149, 208);
			this->txtUPMiddleCALL->Multiline = true;
			this->txtUPMiddleCALL->Name = L"txtUPMiddleCALL";
			this->txtUPMiddleCALL->Size = System::Drawing::Size(100, 106);
			this->txtUPMiddleCALL->TabIndex = 23;
			this->txtUPMiddleCALL->Text = L"88-22\r\nA9s-A7s\r\nKTs\r\nQJs-QTs\r\nJTs \r\nAT\r\nKJ\r\n";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(276, 59);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(47, 16);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Raise:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(297, 36);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(38, 16);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Late";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(513, 207);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(106, 16);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Check all others!";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(151, 58);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(47, 16);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Raise:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(171, 36);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 16);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Middle";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(513, 58);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 16);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Raise:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(519, 37);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 16);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Big Blind";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(395, 58);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Raise:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(397, 37);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Small Blind";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(54, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Early";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Call";
			// 
			// txtUPEarlyCALL
			// 
			this->txtUPEarlyCALL->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtUPEarlyCALL->Location = System::Drawing::Point(26, 208);
			this->txtUPEarlyCALL->Multiline = true;
			this->txtUPEarlyCALL->Name = L"txtUPEarlyCALL";
			this->txtUPEarlyCALL->Size = System::Drawing::Size(100, 82);
			this->txtUPEarlyCALL->TabIndex = 11;
			this->txtUPEarlyCALL->Text = L"99-77\r\nKJs\r\nQJs\r\nAJ\r\nKQ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 58);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Raise:";
			// 
			// txtRPAnyRAISE
			// 
			this->txtRPAnyRAISE->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtRPAnyRAISE->Location = System::Drawing::Point(923, 76);
			this->txtRPAnyRAISE->Multiline = true;
			this->txtRPAnyRAISE->Name = L"txtRPAnyRAISE";
			this->txtRPAnyRAISE->Size = System::Drawing::Size(100, 39);
			this->txtRPAnyRAISE->TabIndex = 9;
			this->txtRPAnyRAISE->Text = L"AA-QQ\r\nAKs";
			// 
			// txtRPBigBlindRAISE
			// 
			this->txtRPBigBlindRAISE->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtRPBigBlindRAISE->Location = System::Drawing::Point(801, 76);
			this->txtRPBigBlindRAISE->Multiline = true;
			this->txtRPBigBlindRAISE->Name = L"txtRPBigBlindRAISE";
			this->txtRPBigBlindRAISE->Size = System::Drawing::Size(100, 51);
			this->txtRPBigBlindRAISE->TabIndex = 8;
			this->txtRPBigBlindRAISE->Text = L"AA-JJ\r\nAKs-AQs\r\nAK";
			// 
			// txtRPNotBibBlindRAISE
			// 
			this->txtRPNotBibBlindRAISE->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtRPNotBibBlindRAISE->Location = System::Drawing::Point(680, 76);
			this->txtRPNotBibBlindRAISE->Multiline = true;
			this->txtRPNotBibBlindRAISE->Name = L"txtRPNotBibBlindRAISE";
			this->txtRPNotBibBlindRAISE->Size = System::Drawing::Size(100, 72);
			this->txtRPNotBibBlindRAISE->TabIndex = 7;
			this->txtRPNotBibBlindRAISE->Text = L"AA-TT\r\nAKs-AJs\r\nKQs\r\nAK";
			// 
			// txtUPBigBlindRAISE
			// 
			this->txtUPBigBlindRAISE->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtUPBigBlindRAISE->Location = System::Drawing::Point(512, 76);
			this->txtUPBigBlindRAISE->Multiline = true;
			this->txtUPBigBlindRAISE->Name = L"txtUPBigBlindRAISE";
			this->txtUPBigBlindRAISE->Size = System::Drawing::Size(100, 77);
			this->txtUPBigBlindRAISE->TabIndex = 6;
			this->txtUPBigBlindRAISE->Text = L"AA-99\r\nAKs-ATs\r\nKQs-KJs\r\nAK-AJ\r\nKQ";
			// 
			// txtUPSmallBlindRAISE
			// 
			this->txtUPSmallBlindRAISE->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtUPSmallBlindRAISE->Location = System::Drawing::Point(393, 76);
			this->txtUPSmallBlindRAISE->Multiline = true;
			this->txtUPSmallBlindRAISE->Name = L"txtUPSmallBlindRAISE";
			this->txtUPSmallBlindRAISE->Size = System::Drawing::Size(100, 77);
			this->txtUPSmallBlindRAISE->TabIndex = 5;
			this->txtUPSmallBlindRAISE->Text = L"AA-99\r\nAKs-AT\r\nKQs-KJs\r\nAK-AJ\r\nKQ";
			// 
			// txtUPLateRAISE
			// 
			this->txtUPLateRAISE->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtUPLateRAISE->Location = System::Drawing::Point(272, 76);
			this->txtUPLateRAISE->Multiline = true;
			this->txtUPLateRAISE->Name = L"txtUPLateRAISE";
			this->txtUPLateRAISE->Size = System::Drawing::Size(100, 95);
			this->txtUPLateRAISE->TabIndex = 4;
			this->txtUPLateRAISE->Text = L"AA-88\r\nAKs-A8s\r\nKQs-KTs\r\nQJs\r\nAK-AT\r\nKQ-KJ\r\n";
			// 
			// txtUPMiddleRAISE
			// 
			this->txtUPMiddleRAISE->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtUPMiddleRAISE->Location = System::Drawing::Point(149, 76);
			this->txtUPMiddleRAISE->Multiline = true;
			this->txtUPMiddleRAISE->Name = L"txtUPMiddleRAISE";
			this->txtUPMiddleRAISE->Size = System::Drawing::Size(100, 77);
			this->txtUPMiddleRAISE->TabIndex = 3;
			this->txtUPMiddleRAISE->Text = L"AA-99\r\nAKs-ATs\r\nKQs-KJs\r\nAK-AJ\r\nKQ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(789, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Raised Pots";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(255, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Unraised Pots";
			// 
			// txtUPEarlyRAISE
			// 
			this->txtUPEarlyRAISE->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtUPEarlyRAISE->Location = System::Drawing::Point(26, 76);
			this->txtUPEarlyRAISE->Multiline = true;
			this->txtUPEarlyRAISE->Name = L"txtUPEarlyRAISE";
			this->txtUPEarlyRAISE->Size = System::Drawing::Size(100, 72);
			this->txtUPEarlyRAISE->TabIndex = 0;
			this->txtUPEarlyRAISE->Text = L"AA-TT\r\nAKs-ATs\r\nKQs\r\nAK-AQ";
			// 
			// tabPreFlopTableTest
			// 
			this->tabPreFlopTableTest->Controls->Add(this->btnNextTest);
			this->tabPreFlopTableTest->Controls->Add(this->lblSeatingPosition);
			this->tabPreFlopTableTest->Controls->Add(this->lblPotState);
			this->tabPreFlopTableTest->Controls->Add(this->lblResult);
			this->tabPreFlopTableTest->Controls->Add(this->textPreflopCorrectAnswer);
			this->tabPreFlopTableTest->Controls->Add(this->textPreflopTable);
			this->tabPreFlopTableTest->Controls->Add(this->label1);
			this->tabPreFlopTableTest->Controls->Add(this->lblPreflopTitle);
			this->tabPreFlopTableTest->Controls->Add(this->textAnswer);
			this->tabPreFlopTableTest->Location = System::Drawing::Point(4, 22);
			this->tabPreFlopTableTest->Name = L"tabPreFlopTableTest";
			this->tabPreFlopTableTest->Padding = System::Windows::Forms::Padding(3);
			this->tabPreFlopTableTest->Size = System::Drawing::Size(1046, 465);
			this->tabPreFlopTableTest->TabIndex = 0;
			this->tabPreFlopTableTest->Text = L"Preflop Tables Test";
			this->tabPreFlopTableTest->UseVisualStyleBackColor = true;
			// 
			// btnNextTest
			// 
			this->btnNextTest->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnNextTest->Location = System::Drawing::Point(444, 335);
			this->btnNextTest->Name = L"btnNextTest";
			this->btnNextTest->Size = System::Drawing::Size(175, 43);
			this->btnNextTest->TabIndex = 8;
			this->btnNextTest->Text = L"Next Test";
			this->btnNextTest->UseVisualStyleBackColor = true;
			this->btnNextTest->Click += gcnew System::EventHandler(this, &ChuckyPokerTrainerGUI::btnNextTest_Click);
			// 
			// lblSeatingPosition
			// 
			this->lblSeatingPosition->AutoSize = true;
			this->lblSeatingPosition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSeatingPosition->Location = System::Drawing::Point(108, 130);
			this->lblSeatingPosition->Name = L"lblSeatingPosition";
			this->lblSeatingPosition->Size = System::Drawing::Size(120, 16);
			this->lblSeatingPosition->TabIndex = 7;
			this->lblSeatingPosition->Text = L"Seating position";
			// 
			// lblPotState
			// 
			this->lblPotState->AutoSize = true;
			this->lblPotState->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPotState->Location = System::Drawing::Point(108, 105);
			this->lblPotState->Name = L"lblPotState";
			this->lblPotState->Size = System::Drawing::Size(85, 20);
			this->lblPotState->TabIndex = 6;
			this->lblPotState->Text = L"Pot State";
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResult->ForeColor = System::Drawing::Color::DodgerBlue;
			this->lblResult->Location = System::Drawing::Point(463, 199);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(35, 37);
			this->lblResult->TabIndex = 5;
			this->lblResult->Text = L"\?";
			// 
			// textPreflopCorrectAnswer
			// 
			this->textPreflopCorrectAnswer->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textPreflopCorrectAnswer->Location = System::Drawing::Point(308, 200);
			this->textPreflopCorrectAnswer->Multiline = true;
			this->textPreflopCorrectAnswer->Name = L"textPreflopCorrectAnswer";
			this->textPreflopCorrectAnswer->ReadOnly = true;
			this->textPreflopCorrectAnswer->Size = System::Drawing::Size(142, 38);
			this->textPreflopCorrectAnswer->TabIndex = 4;
			this->textPreflopCorrectAnswer->Text = L"Preflop Table Correct Answer";
			// 
			// textPreflopTable
			// 
			this->textPreflopTable->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textPreflopTable->Location = System::Drawing::Point(104, 160);
			this->textPreflopTable->Multiline = true;
			this->textPreflopTable->Name = L"textPreflopTable";
			this->textPreflopTable->ReadOnly = true;
			this->textPreflopTable->Size = System::Drawing::Size(142, 121);
			this->textPreflopTable->TabIndex = 3;
			this->textPreflopTable->Text = L"Preflop Table\r\nhello";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(101, 298);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"What is the missing line\?";
			// 
			// lblPreflopTitle
			// 
			this->lblPreflopTitle->AutoSize = true;
			this->lblPreflopTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPreflopTitle->Location = System::Drawing::Point(242, 28);
			this->lblPreflopTitle->Name = L"lblPreflopTitle";
			this->lblPreflopTitle->Size = System::Drawing::Size(282, 29);
			this->lblPreflopTitle->TabIndex = 1;
			this->lblPreflopTitle->Text = L"Preflop Tables Test Area";
			// 
			// textAnswer
			// 
			this->textAnswer->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textAnswer->Location = System::Drawing::Point(99, 322);
			this->textAnswer->Name = L"textAnswer";
			this->textAnswer->Size = System::Drawing::Size(147, 20);
			this->textAnswer->TabIndex = 0;
			this->textAnswer->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ChuckyPokerTrainerGUI::textAnswer_KeyDown);
			// 
			// tabPreFlopCorrectPlay
			// 
			this->tabPreFlopCorrectPlay->Controls->Add(this->pbCard2);
			this->tabPreFlopCorrectPlay->Controls->Add(this->pbCard1);
			this->tabPreFlopCorrectPlay->Controls->Add(this->lblPreFlopCorrectPlay);
			this->tabPreFlopCorrectPlay->Controls->Add(this->label27);
			this->tabPreFlopCorrectPlay->Controls->Add(this->lblCorrectPlayHand);
			this->tabPreFlopCorrectPlay->Controls->Add(this->lblCorrectPlayResult);
			this->tabPreFlopCorrectPlay->Controls->Add(this->btnCorrectPlayNextTest);
			this->tabPreFlopCorrectPlay->Controls->Add(this->lblCorrectPlaySeatingPosition);
			this->tabPreFlopCorrectPlay->Controls->Add(this->lblCorrectPlayPotState);
			this->tabPreFlopCorrectPlay->Controls->Add(this->label26);
			this->tabPreFlopCorrectPlay->Controls->Add(this->textCorrectPlayAnswer);
			this->tabPreFlopCorrectPlay->Location = System::Drawing::Point(4, 22);
			this->tabPreFlopCorrectPlay->Name = L"tabPreFlopCorrectPlay";
			this->tabPreFlopCorrectPlay->Padding = System::Windows::Forms::Padding(3);
			this->tabPreFlopCorrectPlay->Size = System::Drawing::Size(1046, 465);
			this->tabPreFlopCorrectPlay->TabIndex = 3;
			this->tabPreFlopCorrectPlay->Text = L"PreFlop Correct Play";
			this->tabPreFlopCorrectPlay->UseVisualStyleBackColor = true;
			// 
			// pbCard2
			// 
			this->pbCard2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbCard2.Image")));
			this->pbCard2->Location = System::Drawing::Point(411, 146);
			this->pbCard2->Name = L"pbCard2";
			this->pbCard2->Size = System::Drawing::Size(99, 137);
			this->pbCard2->TabIndex = 16;
			this->pbCard2->TabStop = false;
			// 
			// pbCard1
			// 
			this->pbCard1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbCard1.Image")));
			this->pbCard1->Location = System::Drawing::Point(306, 146);
			this->pbCard1->Name = L"pbCard1";
			this->pbCard1->Size = System::Drawing::Size(99, 137);
			this->pbCard1->TabIndex = 15;
			this->pbCard1->TabStop = false;
			// 
			// lblPreFlopCorrectPlay
			// 
			this->lblPreFlopCorrectPlay->AutoSize = true;
			this->lblPreFlopCorrectPlay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblPreFlopCorrectPlay->Location = System::Drawing::Point(74, 282);
			this->lblPreFlopCorrectPlay->Name = L"lblPreFlopCorrectPlay";
			this->lblPreFlopCorrectPlay->Size = System::Drawing::Size(112, 16);
			this->lblPreFlopCorrectPlay->TabIndex = 13;
			this->lblPreFlopCorrectPlay->Text = L"Correct Answer";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(240, 29);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(257, 29);
			this->label27->TabIndex = 12;
			this->label27->Text = L"PreFlop Correct Play";
			// 
			// lblCorrectPlayHand
			// 
			this->lblCorrectPlayHand->AutoSize = true;
			this->lblCorrectPlayHand->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCorrectPlayHand->Location = System::Drawing::Point(372, 298);
			this->lblCorrectPlayHand->Name = L"lblCorrectPlayHand";
			this->lblCorrectPlayHand->Size = System::Drawing::Size(96, 31);
			this->lblCorrectPlayHand->TabIndex = 11;
			this->lblCorrectPlayHand->Text = L"HAND";
			// 
			// lblCorrectPlayResult
			// 
			this->lblCorrectPlayResult->AutoSize = true;
			this->lblCorrectPlayResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorrectPlayResult->ForeColor = System::Drawing::Color::DodgerBlue;
			this->lblCorrectPlayResult->Location = System::Drawing::Point(233, 358);
			this->lblCorrectPlayResult->Name = L"lblCorrectPlayResult";
			this->lblCorrectPlayResult->Size = System::Drawing::Size(35, 37);
			this->lblCorrectPlayResult->TabIndex = 10;
			this->lblCorrectPlayResult->Text = L"\?";
			// 
			// btnCorrectPlayNextTest
			// 
			this->btnCorrectPlayNextTest->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnCorrectPlayNextTest->Location = System::Drawing::Point(465, 358);
			this->btnCorrectPlayNextTest->Name = L"btnCorrectPlayNextTest";
			this->btnCorrectPlayNextTest->Size = System::Drawing::Size(175, 43);
			this->btnCorrectPlayNextTest->TabIndex = 9;
			this->btnCorrectPlayNextTest->Text = L"Next Test";
			this->btnCorrectPlayNextTest->UseVisualStyleBackColor = true;
			this->btnCorrectPlayNextTest->Click += gcnew System::EventHandler(this, &ChuckyPokerTrainerGUI::btnCorrectPlayNextTest_Click);
			// 
			// lblCorrectPlaySeatingPosition
			// 
			this->lblCorrectPlaySeatingPosition->AutoSize = true;
			this->lblCorrectPlaySeatingPosition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCorrectPlaySeatingPosition->Location = System::Drawing::Point(71, 217);
			this->lblCorrectPlaySeatingPosition->Name = L"lblCorrectPlaySeatingPosition";
			this->lblCorrectPlaySeatingPosition->Size = System::Drawing::Size(121, 16);
			this->lblCorrectPlaySeatingPosition->TabIndex = 5;
			this->lblCorrectPlaySeatingPosition->Text = L"Seating Position";
			// 
			// lblCorrectPlayPotState
			// 
			this->lblCorrectPlayPotState->AutoSize = true;
			this->lblCorrectPlayPotState->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCorrectPlayPotState->Location = System::Drawing::Point(71, 177);
			this->lblCorrectPlayPotState->Name = L"lblCorrectPlayPotState";
			this->lblCorrectPlayPotState->Size = System::Drawing::Size(85, 20);
			this->lblCorrectPlayPotState->TabIndex = 4;
			this->lblCorrectPlayPotState->Text = L"Pot State";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(68, 358);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(125, 13);
			this->label26->TabIndex = 3;
			this->label26->Text = L"What is the correct play\?";
			// 
			// textCorrectPlayAnswer
			// 
			this->textCorrectPlayAnswer->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textCorrectPlayAnswer->Location = System::Drawing::Point(64, 383);
			this->textCorrectPlayAnswer->Name = L"textCorrectPlayAnswer";
			this->textCorrectPlayAnswer->Size = System::Drawing::Size(138, 20);
			this->textCorrectPlayAnswer->TabIndex = 0;
			this->textCorrectPlayAnswer->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ChuckyPokerTrainerGUI::textCorrectPlayAnswer_KeyDown);
			// 
			// tabIdentifyTheNuts
			// 
			this->tabIdentifyTheNuts->Controls->Add(this->btnHighCard);
			this->tabIdentifyTheNuts->Controls->Add(this->btn1Pair);
			this->tabIdentifyTheNuts->Controls->Add(this->btn2Pair);
			this->tabIdentifyTheNuts->Controls->Add(this->btn3ofAKind);
			this->tabIdentifyTheNuts->Controls->Add(this->btnStraight);
			this->tabIdentifyTheNuts->Controls->Add(this->btnFlush);
			this->tabIdentifyTheNuts->Controls->Add(this->btnFullHouse);
			this->tabIdentifyTheNuts->Controls->Add(this->btnRoyalStraightFlush);
			this->tabIdentifyTheNuts->Controls->Add(this->btn4ofAKind);
			this->tabIdentifyTheNuts->Controls->Add(this->btnStraightFlush);
			this->tabIdentifyTheNuts->Controls->Add(this->label29);
			this->tabIdentifyTheNuts->Controls->Add(this->label30);
			this->tabIdentifyTheNuts->Controls->Add(this->pbHoleCard2);
			this->tabIdentifyTheNuts->Controls->Add(this->pbHoleCard1);
			this->tabIdentifyTheNuts->Controls->Add(this->pbFlopCard3);
			this->tabIdentifyTheNuts->Controls->Add(this->pbFlopCard2);
			this->tabIdentifyTheNuts->Controls->Add(this->pbFlopCard1);
			this->tabIdentifyTheNuts->Controls->Add(this->btnIDTheNutsNextTest);
			this->tabIdentifyTheNuts->Location = System::Drawing::Point(4, 22);
			this->tabIdentifyTheNuts->Name = L"tabIdentifyTheNuts";
			this->tabIdentifyTheNuts->Padding = System::Windows::Forms::Padding(3);
			this->tabIdentifyTheNuts->Size = System::Drawing::Size(1046, 465);
			this->tabIdentifyTheNuts->TabIndex = 2;
			this->tabIdentifyTheNuts->Text = L"Identify the Nuts";
			this->tabIdentifyTheNuts->UseVisualStyleBackColor = true;
			// 
			// btnHighCard
			// 
			this->btnHighCard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHighCard->Location = System::Drawing::Point(22, 411);
			this->btnHighCard->Name = L"btnHighCard";
			this->btnHighCard->Size = System::Drawing::Size(133, 29);
			this->btnHighCard->TabIndex = 34;
			this->btnHighCard->Text = L"High Card";
			this->btnHighCard->UseVisualStyleBackColor = true;
			// 
			// btn1Pair
			// 
			this->btn1Pair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1Pair->Location = System::Drawing::Point(22, 376);
			this->btn1Pair->Name = L"btn1Pair";
			this->btn1Pair->Size = System::Drawing::Size(133, 29);
			this->btn1Pair->TabIndex = 33;
			this->btn1Pair->Text = L"1 Pair";
			this->btn1Pair->UseVisualStyleBackColor = true;
			// 
			// btn2Pair
			// 
			this->btn2Pair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2Pair->Location = System::Drawing::Point(22, 341);
			this->btn2Pair->Name = L"btn2Pair";
			this->btn2Pair->Size = System::Drawing::Size(133, 29);
			this->btn2Pair->TabIndex = 32;
			this->btn2Pair->Text = L"2 pair";
			this->btn2Pair->UseVisualStyleBackColor = true;
			// 
			// btn3ofAKind
			// 
			this->btn3ofAKind->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3ofAKind->Location = System::Drawing::Point(22, 306);
			this->btn3ofAKind->Name = L"btn3ofAKind";
			this->btn3ofAKind->Size = System::Drawing::Size(133, 29);
			this->btn3ofAKind->TabIndex = 31;
			this->btn3ofAKind->Text = L"3 of a kind";
			this->btn3ofAKind->UseVisualStyleBackColor = true;
			// 
			// btnStraight
			// 
			this->btnStraight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStraight->Location = System::Drawing::Point(22, 271);
			this->btnStraight->Name = L"btnStraight";
			this->btnStraight->Size = System::Drawing::Size(133, 29);
			this->btnStraight->TabIndex = 30;
			this->btnStraight->Text = L"Straight";
			this->btnStraight->UseVisualStyleBackColor = true;
			// 
			// btnFlush
			// 
			this->btnFlush->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFlush->Location = System::Drawing::Point(22, 236);
			this->btnFlush->Name = L"btnFlush";
			this->btnFlush->Size = System::Drawing::Size(133, 29);
			this->btnFlush->TabIndex = 29;
			this->btnFlush->Text = L"Flush";
			this->btnFlush->UseVisualStyleBackColor = true;
			// 
			// btnFullHouse
			// 
			this->btnFullHouse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFullHouse->Location = System::Drawing::Point(22, 201);
			this->btnFullHouse->Name = L"btnFullHouse";
			this->btnFullHouse->Size = System::Drawing::Size(133, 29);
			this->btnFullHouse->TabIndex = 28;
			this->btnFullHouse->Text = L"Full House";
			this->btnFullHouse->UseVisualStyleBackColor = true;
			// 
			// btnRoyalStraightFlush
			// 
			this->btnRoyalStraightFlush->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnRoyalStraightFlush->Location = System::Drawing::Point(22, 90);
			this->btnRoyalStraightFlush->Name = L"btnRoyalStraightFlush";
			this->btnRoyalStraightFlush->Size = System::Drawing::Size(167, 34);
			this->btnRoyalStraightFlush->TabIndex = 27;
			this->btnRoyalStraightFlush->Text = L"Royal Straight Flush";
			this->btnRoyalStraightFlush->UseVisualStyleBackColor = true;
			// 
			// btn4ofAKind
			// 
			this->btn4ofAKind->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4ofAKind->Location = System::Drawing::Point(22, 165);
			this->btn4ofAKind->Name = L"btn4ofAKind";
			this->btn4ofAKind->Size = System::Drawing::Size(133, 29);
			this->btn4ofAKind->TabIndex = 26;
			this->btn4ofAKind->Text = L"4 of a kind";
			this->btn4ofAKind->UseVisualStyleBackColor = true;
			// 
			// btnStraightFlush
			// 
			this->btnStraightFlush->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStraightFlush->Location = System::Drawing::Point(22, 130);
			this->btnStraightFlush->Name = L"btnStraightFlush";
			this->btnStraightFlush->Size = System::Drawing::Size(133, 29);
			this->btnStraightFlush->TabIndex = 25;
			this->btnStraightFlush->Text = L"Straight Flush";
			this->btnStraightFlush->UseVisualStyleBackColor = true;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label29->Location = System::Drawing::Point(356, 401);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(35, 37);
			this->label29->TabIndex = 24;
			this->label29->Text = L"\?";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(17, 53);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(172, 25);
			this->label30->TabIndex = 23;
			this->label30->Text = L"What\'s the nuts\?";
			// 
			// pbHoleCard2
			// 
			this->pbHoleCard2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbHoleCard2.Image")));
			this->pbHoleCard2->Location = System::Drawing::Point(413, 244);
			this->pbHoleCard2->Name = L"pbHoleCard2";
			this->pbHoleCard2->Size = System::Drawing::Size(99, 137);
			this->pbHoleCard2->TabIndex = 21;
			this->pbHoleCard2->TabStop = false;
			// 
			// pbHoleCard1
			// 
			this->pbHoleCard1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbHoleCard1.Image")));
			this->pbHoleCard1->Location = System::Drawing::Point(308, 244);
			this->pbHoleCard1->Name = L"pbHoleCard1";
			this->pbHoleCard1->Size = System::Drawing::Size(99, 137);
			this->pbHoleCard1->TabIndex = 20;
			this->pbHoleCard1->TabStop = false;
			// 
			// pbFlopCard3
			// 
			this->pbFlopCard3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbFlopCard3.Image")));
			this->pbFlopCard3->Location = System::Drawing::Point(468, 70);
			this->pbFlopCard3->Name = L"pbFlopCard3";
			this->pbFlopCard3->Size = System::Drawing::Size(99, 137);
			this->pbFlopCard3->TabIndex = 19;
			this->pbFlopCard3->TabStop = false;
			// 
			// pbFlopCard2
			// 
			this->pbFlopCard2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbFlopCard2.Image")));
			this->pbFlopCard2->Location = System::Drawing::Point(363, 70);
			this->pbFlopCard2->Name = L"pbFlopCard2";
			this->pbFlopCard2->Size = System::Drawing::Size(99, 137);
			this->pbFlopCard2->TabIndex = 18;
			this->pbFlopCard2->TabStop = false;
			// 
			// pbFlopCard1
			// 
			this->pbFlopCard1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbFlopCard1.Image")));
			this->pbFlopCard1->Location = System::Drawing::Point(258, 70);
			this->pbFlopCard1->Name = L"pbFlopCard1";
			this->pbFlopCard1->Size = System::Drawing::Size(99, 137);
			this->pbFlopCard1->TabIndex = 17;
			this->pbFlopCard1->TabStop = false;
			// 
			// btnIDTheNutsNextTest
			// 
			this->btnIDTheNutsNextTest->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnIDTheNutsNextTest->Location = System::Drawing::Point(195, 387);
			this->btnIDTheNutsNextTest->Name = L"btnIDTheNutsNextTest";
			this->btnIDTheNutsNextTest->Size = System::Drawing::Size(75, 69);
			this->btnIDTheNutsNextTest->TabIndex = 10;
			this->btnIDTheNutsNextTest->Text = L"Next Test";
			this->btnIDTheNutsNextTest->UseVisualStyleBackColor = true;
			this->btnIDTheNutsNextTest->Click += gcnew System::EventHandler(this, &ChuckyPokerTrainerGUI::btnIDTheNutsNextTest_Click);
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(419, 16);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(300, 38);
			this->lblTitle->TabIndex = 1;
			this->lblTitle->Text = L"Chucky Poker Trainer";
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(530, 566);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 2;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &ChuckyPokerTrainerGUI::btnExit_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(-2, 585);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(46, 16);
			this->label28->TabIndex = 3;
			this->label28->Text = L"ChuckE";
			// 
			// ChuckyPokerTrainerGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1142, 599);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->lblTitle);
			this->Name = L"ChuckyPokerTrainerGUI";
			this->Text = L"Chucky Poker Trainer";
			this->Load += gcnew System::EventHandler(this, &ChuckyPokerTrainerGUI::ChuckyPokerTrainerGUI_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPreFlopTables->ResumeLayout(false);
			this->tabPreFlopTables->PerformLayout();
			this->tabPreFlopTableTest->ResumeLayout(false);
			this->tabPreFlopTableTest->PerformLayout();
			this->tabPreFlopCorrectPlay->ResumeLayout(false);
			this->tabPreFlopCorrectPlay->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCard2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCard1))->EndInit();
			this->tabIdentifyTheNuts->ResumeLayout(false);
			this->tabIdentifyTheNuts->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHoleCard2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHoleCard1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFlopCard3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFlopCard2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFlopCard1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		private: System::Void initialisePreFlopTableTest()
		{
			// *** PREFLOP TABLES ***
			// ======================
			// LOAD UP THE PREFLOP TABLES
			PreFlopTables * preFlopTables = new PreFlopTables();
			// clear current settings
			lblResult->Text = "?";
			textAnswer->Text = "";
			textPreflopCorrectAnswer->Text = "";
			textPreflopTable->Text = "";
			lblPotState->Text = "";
			lblSeatingPosition->Text = "";
			// set up next test
			struct ResultStruct result;
			result = preFlopTables->getTestTable();
			textPreflopTable->Text = gcnew String(result.table.c_str());
			lblPotState->Text = gcnew String(result.potState.c_str());
			lblSeatingPosition->Text = gcnew String(result.seatingPosition.c_str());

			// send the missing line to the judge
			judge.setTheAnswer(result.missingLine);
		}
		
		private: System::Void initialisePreFlopCorrectPlayTest()
		{
			// *** PREFLOP TABLES ***
			// ======================
			// LOAD UP THE PREFLOP TABLES
			PreFlopTables * preFlopTables = new PreFlopTables();

				
			// clear current settings
			lblCorrectPlayResult->Text = "?";
			textCorrectPlayAnswer->Text = "";
			lblCorrectPlaySeatingPosition->Text = "Seating Position";
			lblCorrectPlayPotState->Text = "Pot State";
				 
			// set up next test
			struct ResultStruct result;
			result = preFlopTables->getPreFlopHandDetails();

			lblCorrectPlayHand->Text = gcnew String(result.table.c_str());

			// get Preflop hand
			std::string sCardNames = getCardImageNames(result.table);

			lblCorrectPlayHand->Text = gcnew String(result.table.c_str());

			// split the card names and display the cards
			int divider = sCardNames.find("|");
			std::string sFile1 = sCardNames.substr(0, 6);
			std::string sFile2 = sCardNames.substr(divider+1, 6);
			// change the cards
			std::string sFileName = ".\\images\\" + sFile1;
			pbCard1->Load(gcnew String(sFileName.c_str()));
			sFileName = ".\\images\\" + sFile2;
			pbCard2->Load(gcnew String(sFileName.c_str()));

			lblCorrectPlayPotState->Text = gcnew String(result.potState.c_str());
			lblCorrectPlaySeatingPosition->Text = gcnew String(result.seatingPosition.c_str());

			// send the missing line to the judge
			judge.setPreFlopCorrectPlayAnswer(result.correctPlay);
		}																																																		

		private: System::Void initialiseIdentifyTheNutsTest()
		{

		}

		private: System::Void initialiseSystem()
		{
			// PreFlop Tables Test
			initialisePreFlopTableTest();
			// PreFlop Correct Play
			initialisePreFlopCorrectPlayTest();
			// Identify the Nuts
			initialiseIdentifyTheNutsTest();

		}

		private: System::Void btnNextTest_Click(System::Object^  sender, System::EventArgs^  e) 
		{				
			initialisePreFlopTableTest();
		}

		private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			Application::Exit();
		}

		private: System::Void textAnswer_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		{
			// was the ENTER key pressed?
			if (e->KeyCode == Keys::Enter )
			{					 
				// output the correct answer
				std::string correctAnswer = judge.getTheAnswer();
				// display the correct answer
				textPreflopCorrectAnswer->Text = gcnew String(correctAnswer.c_str());
				// time for the judge to decide if the user's answer is correct
				if (judge.checkPlayerAnswer(marshal_as<std::string>(textAnswer->Text), correctAnswer) == true)
				{
					lblResult->Text = "CORRECT";
				}
				else
					lblResult->Text = "WRONG";
			}
		}

		private: System::Void textCorrectPlayAnswer_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		{
			// was the ENTER key pressed?
			if (e->KeyCode == Keys::Enter )
			{
				// output the correct answer
				std::string correctAnswer = judge.getPreFlopCorrectPlayAnswer();
				// display the correct answer
				lblPreFlopCorrectPlay->Text = gcnew String(correctAnswer.c_str());
				// time for the judge to decide if the user's answer is correct
				if (judge.checkPlayerAnswer(marshal_as<std::string>(textCorrectPlayAnswer->Text), correctAnswer) == true)
				{
					lblCorrectPlayResult->Text = "CORRECT";
				}
				else
					lblCorrectPlayResult->Text = "WRONG";
			}
		}

		 // PreFlop Correct Play Next Text button
		private: System::Void btnCorrectPlayNextTest_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			initialisePreFlopCorrectPlayTest();
		}

		private: System::Void ChuckyPokerTrainerGUI_Load(System::Object^  sender, System::EventArgs^  e) 
		{
			// make the card images fit the picture box control
			pbCard1->SizeMode = PictureBoxSizeMode::Zoom;
			pbCard2->SizeMode = PictureBoxSizeMode::Zoom;
		}

		private: System::Void tabControl1_Selected(System::Object^  sender, System::Windows::Forms::TabControlEventArgs^  e)
		{
			if (tabControl1->SelectedTab == tabPreFlopTables)
			{
				// change the GUI's width
				this->Width = 1158;
				tabControl1->Width = 1054;

				// change location of the main title and the exit button
				lblTitle->Location = Point(419, 16);
				btnExit->Location = Point(530, 566);
			}
			else
			{
				// change the GUI's width
				this->Width = 864;
				tabControl1->Width = 735;

				// change location of the main title and the exit button
				lblTitle->Location = Point(264, 16);
				btnExit->Location = Point(371, 566);
			}
		}

		private: System::Void btnIDTheNutsNextTest_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			initialiseIdentifyTheNutsTest();
		}

};

}

