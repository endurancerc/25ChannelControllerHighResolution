#pragma once
#include "controller.h"
#undef GetObject

namespace controllerGUI
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public __gc class Form1 : public System::Windows::Forms::Form
	{	
	public:
		Form1(void)
		{
			InitializeComponent();
		}
		
	protected:
		void Dispose(Boolean disposing)
		{
			if (disposing && components)
			{
				components->Dispose();
			}
			__super::Dispose(disposing);
		}

	private: System::Windows::Forms::Label *  label10;
	private: System::Windows::Forms::HScrollBar *  hScrollBar9;
	private: System::Windows::Forms::HScrollBar *  hScrollBar1;
	private: System::ComponentModel::IContainer *  components;
	private: System::Windows::Forms::Label *  label1;
	private: System::Windows::Forms::Label *  label2;
	private: System::Windows::Forms::Label *  label3;
	private: System::Windows::Forms::HScrollBar *  hScrollBar2;
	private: System::Windows::Forms::Label *  label4;
	private: System::Windows::Forms::HScrollBar *  hScrollBar3;
	private: System::Windows::Forms::Label *  label5;
	private: System::Windows::Forms::HScrollBar *  hScrollBar4;
	private: System::Windows::Forms::Label *  label6;
	private: System::Windows::Forms::HScrollBar *  hScrollBar5;
	private: System::Windows::Forms::Label *  label7;
	private: System::Windows::Forms::HScrollBar *  hScrollBar6;
	private: System::Windows::Forms::Label *  label8;
	private: System::Windows::Forms::HScrollBar *  hScrollBar7;
	private: System::Windows::Forms::Label *  label9;
	private: System::Windows::Forms::HScrollBar *  hScrollBar8;
	private: System::Windows::Forms::Label *  label11;
	private: System::Windows::Forms::Label *  label12;
	private: System::Windows::Forms::Label *  label13;
	private: System::Windows::Forms::Label *  label14;
	private: System::Windows::Forms::Label *  label15;
	private: System::Windows::Forms::Label *  label16;
	private: System::Windows::Forms::Label *  label17;
	private: System::Windows::Forms::Label *  label18;
	private: System::Windows::Forms::Label *  label19;
	private: System::Windows::Forms::Timer *  timer1;
	private: System::Windows::Forms::Label *  label20;
	private: System::Windows::Forms::Label *  label21;
	private: System::Windows::Forms::Label *  label24;
	private: System::Windows::Forms::Label *  label25;
	private: System::Windows::Forms::Label *  label26;
	private: System::Windows::Forms::Label *  label27;
	private: System::Windows::Forms::Label *  label28;
	private: System::Windows::Forms::Label *  label29;
	private: System::Windows::Forms::Label *  label30;
	private: System::Windows::Forms::HScrollBar *  hScrollBar11;
	private: System::Windows::Forms::Label *  label33;
	private: System::Windows::Forms::HScrollBar *  hScrollBar12;
	private: System::Windows::Forms::Label *  label34;
	private: System::Windows::Forms::HScrollBar *  hScrollBar13;
	private: System::Windows::Forms::Label *  label35;
	private: System::Windows::Forms::Label *  label36;
	private: System::Windows::Forms::HScrollBar *  hScrollBar15;
	private: System::Windows::Forms::Label *  label37;
	private: System::Windows::Forms::HScrollBar *  hScrollBar16;
	private: System::Windows::Forms::Label *  label38;
	private: System::Windows::Forms::HScrollBar *  hScrollBar17;
	private: System::Windows::Forms::Label *  label39;
	private: System::Windows::Forms::HScrollBar *  hScrollBar18;
	private: System::Windows::Forms::Label *  label22;

		controller *c;	//pointer to the PCTx controller
	private: System::Windows::Forms::HScrollBar *  hScrollBar10;
	private: System::Windows::Forms::HScrollBar *  hScrollBar14;
	private: System::Windows::Forms::HScrollBar *  hScrollBar19;
	private: System::Windows::Forms::HScrollBar *  hScrollBar20;
	private: System::Windows::Forms::HScrollBar *  hScrollBar21;
	private: System::Windows::Forms::HScrollBar *  hScrollBar22;
	private: System::Windows::Forms::HScrollBar *  hScrollBar23;
	private: System::Windows::Forms::HScrollBar *  hScrollBar24;
	private: System::Windows::Forms::HScrollBar *  hScrollBar25;
	private: System::Windows::Forms::Label *  label23;
	private: System::Windows::Forms::Label *  label31;
	private: System::Windows::Forms::Label *  label32;
	private: System::Windows::Forms::Label *  label40;
	private: System::Windows::Forms::Label *  label41;
	private: System::Windows::Forms::Label *  label42;
	private: System::Windows::Forms::Label *  label43;
	private: System::Windows::Forms::Label *  label44;
	private: System::Windows::Forms::Label *  label45;
	private: System::Windows::Forms::Label *  label46;
	private: System::Windows::Forms::Label *  label47;
	private: System::Windows::Forms::Label *  label48;
	private: System::Windows::Forms::Label *  label49;
	private: System::Windows::Forms::Label *  label50;
	private: System::Windows::Forms::Label *  label51;
	private: System::Windows::Forms::Label *  label52;
	private: System::Windows::Forms::Label *  label53;
	private: System::Windows::Forms::Label *  label54;
			 int *values;	//pointer to the values array

		

		void InitializeComponent(void)
		{
			this->components = (new System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager*  resources = (new System::ComponentModel::ComponentResourceManager(__typeof(Form1)));
			this->hScrollBar1 = (new System::Windows::Forms::HScrollBar());
			this->label1 = (new System::Windows::Forms::Label());
			this->label2 = (new System::Windows::Forms::Label());
			this->label3 = (new System::Windows::Forms::Label());
			this->hScrollBar2 = (new System::Windows::Forms::HScrollBar());
			this->label4 = (new System::Windows::Forms::Label());
			this->hScrollBar3 = (new System::Windows::Forms::HScrollBar());
			this->label5 = (new System::Windows::Forms::Label());
			this->hScrollBar4 = (new System::Windows::Forms::HScrollBar());
			this->label6 = (new System::Windows::Forms::Label());
			this->hScrollBar5 = (new System::Windows::Forms::HScrollBar());
			this->label7 = (new System::Windows::Forms::Label());
			this->hScrollBar6 = (new System::Windows::Forms::HScrollBar());
			this->label8 = (new System::Windows::Forms::Label());
			this->hScrollBar7 = (new System::Windows::Forms::HScrollBar());
			this->label9 = (new System::Windows::Forms::Label());
			this->hScrollBar8 = (new System::Windows::Forms::HScrollBar());
			this->label10 = (new System::Windows::Forms::Label());
			this->hScrollBar9 = (new System::Windows::Forms::HScrollBar());
			this->label11 = (new System::Windows::Forms::Label());
			this->label12 = (new System::Windows::Forms::Label());
			this->label13 = (new System::Windows::Forms::Label());
			this->label14 = (new System::Windows::Forms::Label());
			this->label15 = (new System::Windows::Forms::Label());
			this->label16 = (new System::Windows::Forms::Label());
			this->label17 = (new System::Windows::Forms::Label());
			this->label18 = (new System::Windows::Forms::Label());
			this->label19 = (new System::Windows::Forms::Label());
			this->timer1 = (new System::Windows::Forms::Timer(this->components));
			this->label20 = (new System::Windows::Forms::Label());
			this->label21 = (new System::Windows::Forms::Label());
			this->label24 = (new System::Windows::Forms::Label());
			this->label25 = (new System::Windows::Forms::Label());
			this->label26 = (new System::Windows::Forms::Label());
			this->label27 = (new System::Windows::Forms::Label());
			this->label28 = (new System::Windows::Forms::Label());
			this->label29 = (new System::Windows::Forms::Label());
			this->label30 = (new System::Windows::Forms::Label());
			this->hScrollBar11 = (new System::Windows::Forms::HScrollBar());
			this->label33 = (new System::Windows::Forms::Label());
			this->hScrollBar12 = (new System::Windows::Forms::HScrollBar());
			this->label34 = (new System::Windows::Forms::Label());
			this->hScrollBar13 = (new System::Windows::Forms::HScrollBar());
			this->label35 = (new System::Windows::Forms::Label());
			this->label36 = (new System::Windows::Forms::Label());
			this->hScrollBar15 = (new System::Windows::Forms::HScrollBar());
			this->label37 = (new System::Windows::Forms::Label());
			this->hScrollBar16 = (new System::Windows::Forms::HScrollBar());
			this->label38 = (new System::Windows::Forms::Label());
			this->hScrollBar17 = (new System::Windows::Forms::HScrollBar());
			this->label39 = (new System::Windows::Forms::Label());
			this->hScrollBar18 = (new System::Windows::Forms::HScrollBar());
			this->label22 = (new System::Windows::Forms::Label());
			this->hScrollBar10 = (new System::Windows::Forms::HScrollBar());
			this->hScrollBar14 = (new System::Windows::Forms::HScrollBar());
			this->hScrollBar19 = (new System::Windows::Forms::HScrollBar());
			this->hScrollBar20 = (new System::Windows::Forms::HScrollBar());
			this->hScrollBar21 = (new System::Windows::Forms::HScrollBar());
			this->hScrollBar22 = (new System::Windows::Forms::HScrollBar());
			this->hScrollBar23 = (new System::Windows::Forms::HScrollBar());
			this->hScrollBar24 = (new System::Windows::Forms::HScrollBar());
			this->hScrollBar25 = (new System::Windows::Forms::HScrollBar());
			this->label23 = (new System::Windows::Forms::Label());
			this->label31 = (new System::Windows::Forms::Label());
			this->label32 = (new System::Windows::Forms::Label());
			this->label40 = (new System::Windows::Forms::Label());
			this->label41 = (new System::Windows::Forms::Label());
			this->label42 = (new System::Windows::Forms::Label());
			this->label43 = (new System::Windows::Forms::Label());
			this->label44 = (new System::Windows::Forms::Label());
			this->label45 = (new System::Windows::Forms::Label());
			this->label46 = (new System::Windows::Forms::Label());
			this->label47 = (new System::Windows::Forms::Label());
			this->label48 = (new System::Windows::Forms::Label());
			this->label49 = (new System::Windows::Forms::Label());
			this->label50 = (new System::Windows::Forms::Label());
			this->label51 = (new System::Windows::Forms::Label());
			this->label52 = (new System::Windows::Forms::Label());
			this->label53 = (new System::Windows::Forms::Label());
			this->label54 = (new System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->LargeChange = 1;
			this->hScrollBar1->Location = System::Drawing::Point(128, 16);
			this->hScrollBar1->Maximum = 1023;
			this->hScrollBar1->Name = S"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(288, 16);
			this->hScrollBar1->TabIndex = 0;
			this->hScrollBar1->Value = 511;
			this->hScrollBar1->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar1_Scroll);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(208, 632);
			this->label1->Name = S"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = S"Controller Status:";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(80, 16);
			this->label2->Name = S"label2";
			this->label2->Size = System::Drawing::Size(40, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = S"511";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(80, 40);
			this->label3->Name = S"label3";
			this->label3->Size = System::Drawing::Size(40, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = S"511";
			// 
			// hScrollBar2
			// 
			this->hScrollBar2->LargeChange = 4;
			this->hScrollBar2->Location = System::Drawing::Point(128, 40);
			this->hScrollBar2->Maximum = 1023;
			this->hScrollBar2->Name = S"hScrollBar2";
			this->hScrollBar2->Size = System::Drawing::Size(288, 16);
			this->hScrollBar2->TabIndex = 10;
			this->hScrollBar2->Value = 511;
			this->hScrollBar2->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar2_Scroll);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(80, 64);
			this->label4->Name = S"label4";
			this->label4->Size = System::Drawing::Size(40, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = S"511";
			// 
			// hScrollBar3
			// 
			this->hScrollBar3->LargeChange = 4;
			this->hScrollBar3->Location = System::Drawing::Point(128, 64);
			this->hScrollBar3->Maximum = 1023;
			this->hScrollBar3->Name = S"hScrollBar3";
			this->hScrollBar3->Size = System::Drawing::Size(288, 16);
			this->hScrollBar3->TabIndex = 12;
			this->hScrollBar3->Value = 511;
			this->hScrollBar3->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar3_Scroll);
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(80, 88);
			this->label5->Name = S"label5";
			this->label5->Size = System::Drawing::Size(40, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = S"511";
			// 
			// hScrollBar4
			// 
			this->hScrollBar4->LargeChange = 4;
			this->hScrollBar4->Location = System::Drawing::Point(128, 88);
			this->hScrollBar4->Maximum = 1023;
			this->hScrollBar4->Name = S"hScrollBar4";
			this->hScrollBar4->Size = System::Drawing::Size(288, 16);
			this->hScrollBar4->TabIndex = 14;
			this->hScrollBar4->Value = 511;
			this->hScrollBar4->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar4_Scroll);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(80, 112);
			this->label6->Name = S"label6";
			this->label6->Size = System::Drawing::Size(40, 16);
			this->label6->TabIndex = 23;
			this->label6->Text = S"511";
			// 
			// hScrollBar5
			// 
			this->hScrollBar5->LargeChange = 4;
			this->hScrollBar5->Location = System::Drawing::Point(128, 112);
			this->hScrollBar5->Maximum = 1023;
			this->hScrollBar5->Name = S"hScrollBar5";
			this->hScrollBar5->Size = System::Drawing::Size(288, 16);
			this->hScrollBar5->TabIndex = 22;
			this->hScrollBar5->Value = 511;
			this->hScrollBar5->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar5_Scroll);
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(80, 136);
			this->label7->Name = S"label7";
			this->label7->Size = System::Drawing::Size(40, 16);
			this->label7->TabIndex = 21;
			this->label7->Text = S"511";
			// 
			// hScrollBar6
			// 
			this->hScrollBar6->LargeChange = 4;
			this->hScrollBar6->Location = System::Drawing::Point(128, 136);
			this->hScrollBar6->Maximum = 1023;
			this->hScrollBar6->Name = S"hScrollBar6";
			this->hScrollBar6->Size = System::Drawing::Size(288, 16);
			this->hScrollBar6->TabIndex = 20;
			this->hScrollBar6->Value = 511;
			this->hScrollBar6->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar6_Scroll);
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(80, 160);
			this->label8->Name = S"label8";
			this->label8->Size = System::Drawing::Size(40, 16);
			this->label8->TabIndex = 19;
			this->label8->Text = S"511";
			// 
			// hScrollBar7
			// 
			this->hScrollBar7->LargeChange = 4;
			this->hScrollBar7->Location = System::Drawing::Point(128, 160);
			this->hScrollBar7->Maximum = 1023;
			this->hScrollBar7->Name = S"hScrollBar7";
			this->hScrollBar7->Size = System::Drawing::Size(288, 16);
			this->hScrollBar7->TabIndex = 18;
			this->hScrollBar7->Value = 511;
			this->hScrollBar7->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar7_Scroll);
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(80, 184);
			this->label9->Name = S"label9";
			this->label9->Size = System::Drawing::Size(40, 16);
			this->label9->TabIndex = 17;
			this->label9->Text = S"511";
			// 
			// hScrollBar8
			// 
			this->hScrollBar8->LargeChange = 4;
			this->hScrollBar8->Location = System::Drawing::Point(128, 184);
			this->hScrollBar8->Maximum = 1023;
			this->hScrollBar8->Name = S"hScrollBar8";
			this->hScrollBar8->Size = System::Drawing::Size(288, 16);
			this->hScrollBar8->TabIndex = 16;
			this->hScrollBar8->Value = 511;
			this->hScrollBar8->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar8_Scroll);
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(80, 208);
			this->label10->Name = S"label10";
			this->label10->Size = System::Drawing::Size(40, 16);
			this->label10->TabIndex = 25;
			this->label10->Text = S"511";
			// 
			// hScrollBar9
			// 
			this->hScrollBar9->LargeChange = 4;
			this->hScrollBar9->Location = System::Drawing::Point(128, 208);
			this->hScrollBar9->Maximum = 1023;
			this->hScrollBar9->Name = S"hScrollBar9";
			this->hScrollBar9->Size = System::Drawing::Size(288, 16);
			this->hScrollBar9->TabIndex = 24;
			this->hScrollBar9->Value = 511;
			this->hScrollBar9->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar9_Scroll);
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(8, 16);
			this->label11->Name = S"label11";
			this->label11->Size = System::Drawing::Size(56, 16);
			this->label11->TabIndex = 26;
			this->label11->Text = S"Channel 1";
			// 
			// label12
			// 
			this->label12->Location = System::Drawing::Point(8, 40);
			this->label12->Name = S"label12";
			this->label12->Size = System::Drawing::Size(56, 16);
			this->label12->TabIndex = 27;
			this->label12->Text = S"Channel 2";
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(8, 64);
			this->label13->Name = S"label13";
			this->label13->Size = System::Drawing::Size(56, 16);
			this->label13->TabIndex = 28;
			this->label13->Text = S"Channel 3";
			// 
			// label14
			// 
			this->label14->Location = System::Drawing::Point(8, 88);
			this->label14->Name = S"label14";
			this->label14->Size = System::Drawing::Size(56, 16);
			this->label14->TabIndex = 29;
			this->label14->Text = S"Channel 4";
			// 
			// label15
			// 
			this->label15->Location = System::Drawing::Point(8, 112);
			this->label15->Name = S"label15";
			this->label15->Size = System::Drawing::Size(56, 16);
			this->label15->TabIndex = 30;
			this->label15->Text = S"Channel 5";
			// 
			// label16
			// 
			this->label16->Location = System::Drawing::Point(8, 136);
			this->label16->Name = S"label16";
			this->label16->Size = System::Drawing::Size(56, 16);
			this->label16->TabIndex = 31;
			this->label16->Text = S"Channel 6";
			// 
			// label17
			// 
			this->label17->Location = System::Drawing::Point(8, 160);
			this->label17->Name = S"label17";
			this->label17->Size = System::Drawing::Size(56, 16);
			this->label17->TabIndex = 32;
			this->label17->Text = S"Channel 7";
			// 
			// label18
			// 
			this->label18->Location = System::Drawing::Point(8, 184);
			this->label18->Name = S"label18";
			this->label18->Size = System::Drawing::Size(56, 16);
			this->label18->TabIndex = 33;
			this->label18->Text = S"Channel 8";
			// 
			// label19
			// 
			this->label19->Location = System::Drawing::Point(8, 208);
			this->label19->Name = S"label19";
			this->label19->Size = System::Drawing::Size(56, 16);
			this->label19->TabIndex = 34;
			this->label19->Text = S"Channel 9";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += new System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label20
			// 
			this->label20->Image = (__try_cast<System::Drawing::Image*  >(resources->GetObject(S"label20.Image")));
			this->label20->Location = System::Drawing::Point(304, 632);
			this->label20->Name = S"label20";
			this->label20->Size = System::Drawing::Size(16, 16);
			this->label20->TabIndex = 35;
			// 
			// label21
			// 
			this->label21->Image = (__try_cast<System::Drawing::Image*  >(resources->GetObject(S"label21.Image")));
			this->label21->Location = System::Drawing::Point(304, 632);
			this->label21->Name = S"label21";
			this->label21->Size = System::Drawing::Size(16, 16);
			this->label21->TabIndex = 36;
			// 
			// label24
			// 
			this->label24->Location = System::Drawing::Point(8, 376);
			this->label24->Name = S"label24";
			this->label24->Size = System::Drawing::Size(64, 16);
			this->label24->TabIndex = 61;
			this->label24->Text = S"Channel 16";
			// 
			// label25
			// 
			this->label25->Location = System::Drawing::Point(8, 352);
			this->label25->Name = S"label25";
			this->label25->Size = System::Drawing::Size(64, 16);
			this->label25->TabIndex = 60;
			this->label25->Text = S"Channel 15";
			// 
			// label26
			// 
			this->label26->Location = System::Drawing::Point(8, 328);
			this->label26->Name = S"label26";
			this->label26->Size = System::Drawing::Size(64, 16);
			this->label26->TabIndex = 59;
			this->label26->Text = S"Channel 14";
			// 
			// label27
			// 
			this->label27->Location = System::Drawing::Point(8, 304);
			this->label27->Name = S"label27";
			this->label27->Size = System::Drawing::Size(64, 16);
			this->label27->TabIndex = 58;
			this->label27->Text = S"Channel 13";
			// 
			// label28
			// 
			this->label28->Location = System::Drawing::Point(8, 280);
			this->label28->Name = S"label28";
			this->label28->Size = System::Drawing::Size(64, 16);
			this->label28->TabIndex = 57;
			this->label28->Text = S"Channel 12";
			// 
			// label29
			// 
			this->label29->Location = System::Drawing::Point(8, 256);
			this->label29->Name = S"label29";
			this->label29->Size = System::Drawing::Size(64, 16);
			this->label29->TabIndex = 56;
			this->label29->Text = S"Channel 11";
			// 
			// label30
			// 
			this->label30->Location = System::Drawing::Point(8, 232);
			this->label30->Name = S"label30";
			this->label30->Size = System::Drawing::Size(64, 16);
			this->label30->TabIndex = 55;
			this->label30->Text = S"Channel 10";
			// 
			// hScrollBar11
			// 
			this->hScrollBar11->LargeChange = 4;
			this->hScrollBar11->Location = System::Drawing::Point(128, 256);
			this->hScrollBar11->Maximum = 1023;
			this->hScrollBar11->Name = S"hScrollBar11";
			this->hScrollBar11->Size = System::Drawing::Size(288, 16);
			this->hScrollBar11->TabIndex = 51;
			this->hScrollBar11->Value = 511;
			this->hScrollBar11->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar11_Scroll);
			// 
			// label33
			// 
			this->label33->Location = System::Drawing::Point(80, 232);
			this->label33->Name = S"label33";
			this->label33->Size = System::Drawing::Size(40, 16);
			this->label33->TabIndex = 50;
			this->label33->Text = S"511";
			// 
			// hScrollBar12
			// 
			this->hScrollBar12->LargeChange = 4;
			this->hScrollBar12->Location = System::Drawing::Point(128, 280);
			this->hScrollBar12->Maximum = 1023;
			this->hScrollBar12->Name = S"hScrollBar12";
			this->hScrollBar12->Size = System::Drawing::Size(288, 16);
			this->hScrollBar12->TabIndex = 49;
			this->hScrollBar12->Value = 511;
			this->hScrollBar12->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar12_Scroll);
			// 
			// label34
			// 
			this->label34->Location = System::Drawing::Point(80, 256);
			this->label34->Name = S"label34";
			this->label34->Size = System::Drawing::Size(40, 16);
			this->label34->TabIndex = 48;
			this->label34->Text = S"511";
			// 
			// hScrollBar13
			// 
			this->hScrollBar13->LargeChange = 4;
			this->hScrollBar13->Location = System::Drawing::Point(128, 304);
			this->hScrollBar13->Maximum = 1023;
			this->hScrollBar13->Name = S"hScrollBar13";
			this->hScrollBar13->Size = System::Drawing::Size(288, 16);
			this->hScrollBar13->TabIndex = 47;
			this->hScrollBar13->Value = 511;
			this->hScrollBar13->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar13_Scroll);
			// 
			// label35
			// 
			this->label35->Location = System::Drawing::Point(80, 280);
			this->label35->Name = S"label35";
			this->label35->Size = System::Drawing::Size(40, 16);
			this->label35->TabIndex = 46;
			this->label35->Text = S"511";
			// 
			// label36
			// 
			this->label36->Location = System::Drawing::Point(80, 304);
			this->label36->Name = S"label36";
			this->label36->Size = System::Drawing::Size(40, 16);
			this->label36->TabIndex = 44;
			this->label36->Text = S"511";
			// 
			// hScrollBar15
			// 
			this->hScrollBar15->LargeChange = 4;
			this->hScrollBar15->Location = System::Drawing::Point(128, 352);
			this->hScrollBar15->Maximum = 1023;
			this->hScrollBar15->Name = S"hScrollBar15";
			this->hScrollBar15->Size = System::Drawing::Size(288, 16);
			this->hScrollBar15->TabIndex = 43;
			this->hScrollBar15->Value = 511;
			this->hScrollBar15->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar15_Scroll);
			// 
			// label37
			// 
			this->label37->Location = System::Drawing::Point(80, 328);
			this->label37->Name = S"label37";
			this->label37->Size = System::Drawing::Size(40, 16);
			this->label37->TabIndex = 42;
			this->label37->Text = S"511";
			// 
			// hScrollBar16
			// 
			this->hScrollBar16->LargeChange = 4;
			this->hScrollBar16->Location = System::Drawing::Point(128, 376);
			this->hScrollBar16->Maximum = 1023;
			this->hScrollBar16->Name = S"hScrollBar16";
			this->hScrollBar16->Size = System::Drawing::Size(288, 16);
			this->hScrollBar16->TabIndex = 41;
			this->hScrollBar16->Value = 511;
			this->hScrollBar16->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar16_Scroll);
			// 
			// label38
			// 
			this->label38->Location = System::Drawing::Point(80, 352);
			this->label38->Name = S"label38";
			this->label38->Size = System::Drawing::Size(40, 16);
			this->label38->TabIndex = 40;
			this->label38->Text = S"511";
			// 
			// hScrollBar17
			// 
			this->hScrollBar17->LargeChange = 4;
			this->hScrollBar17->Location = System::Drawing::Point(128, 400);
			this->hScrollBar17->Maximum = 1023;
			this->hScrollBar17->Name = S"hScrollBar17";
			this->hScrollBar17->Size = System::Drawing::Size(288, 16);
			this->hScrollBar17->TabIndex = 39;
			this->hScrollBar17->Value = 511;
			this->hScrollBar17->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar17_Scroll);
			// 
			// label39
			// 
			this->label39->Location = System::Drawing::Point(80, 376);
			this->label39->Name = S"label39";
			this->label39->Size = System::Drawing::Size(40, 16);
			this->label39->TabIndex = 38;
			this->label39->Text = S"511";
			// 
			// hScrollBar18
			// 
			this->hScrollBar18->LargeChange = 4;
			this->hScrollBar18->Location = System::Drawing::Point(128, 424);
			this->hScrollBar18->Maximum = 1023;
			this->hScrollBar18->Name = S"hScrollBar18";
			this->hScrollBar18->Size = System::Drawing::Size(288, 16);
			this->hScrollBar18->TabIndex = 37;
			this->hScrollBar18->Value = 511;
			this->hScrollBar18->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar18_Scroll);
			// 
			// label22
			// 
			this->label22->Location = System::Drawing::Point(336, 632);
			this->label22->Name = S"label22";
			this->label22->Size = System::Drawing::Size(80, 13);
			this->label22->TabIndex = 62;
			this->label22->Text = S"Not Connected";
			// 
			// hScrollBar10
			// 
			this->hScrollBar10->LargeChange = 4;
			this->hScrollBar10->Location = System::Drawing::Point(128, 232);
			this->hScrollBar10->Maximum = 1023;
			this->hScrollBar10->Name = S"hScrollBar10";
			this->hScrollBar10->Size = System::Drawing::Size(288, 16);
			this->hScrollBar10->TabIndex = 63;
			this->hScrollBar10->Value = 511;
			this->hScrollBar10->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar10_Scroll);
			// 
			// hScrollBar14
			// 
			this->hScrollBar14->LargeChange = 4;
			this->hScrollBar14->Location = System::Drawing::Point(128, 328);
			this->hScrollBar14->Maximum = 1023;
			this->hScrollBar14->Name = S"hScrollBar14";
			this->hScrollBar14->Size = System::Drawing::Size(288, 16);
			this->hScrollBar14->TabIndex = 64;
			this->hScrollBar14->Value = 511;
			this->hScrollBar14->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar14_Scroll);
			// 
			// hScrollBar19
			// 
			this->hScrollBar19->LargeChange = 4;
			this->hScrollBar19->Location = System::Drawing::Point(128, 448);
			this->hScrollBar19->Maximum = 1023;
			this->hScrollBar19->Name = S"hScrollBar19";
			this->hScrollBar19->Size = System::Drawing::Size(288, 16);
			this->hScrollBar19->TabIndex = 65;
			this->hScrollBar19->Value = 511;
			this->hScrollBar19->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar19_Scroll);
			// 
			// hScrollBar20
			// 
			this->hScrollBar20->LargeChange = 4;
			this->hScrollBar20->Location = System::Drawing::Point(128, 472);
			this->hScrollBar20->Maximum = 1023;
			this->hScrollBar20->Name = S"hScrollBar20";
			this->hScrollBar20->Size = System::Drawing::Size(288, 16);
			this->hScrollBar20->TabIndex = 66;
			this->hScrollBar20->Value = 511;
			this->hScrollBar20->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar20_Scroll);
			// 
			// hScrollBar21
			// 
			this->hScrollBar21->LargeChange = 4;
			this->hScrollBar21->Location = System::Drawing::Point(128, 496);
			this->hScrollBar21->Maximum = 1023;
			this->hScrollBar21->Name = S"hScrollBar21";
			this->hScrollBar21->Size = System::Drawing::Size(288, 16);
			this->hScrollBar21->TabIndex = 67;
			this->hScrollBar21->Value = 511;
			this->hScrollBar21->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar21_Scroll);
			// 
			// hScrollBar22
			// 
			this->hScrollBar22->LargeChange = 4;
			this->hScrollBar22->Location = System::Drawing::Point(128, 520);
			this->hScrollBar22->Maximum = 1023;
			this->hScrollBar22->Name = S"hScrollBar22";
			this->hScrollBar22->Size = System::Drawing::Size(288, 16);
			this->hScrollBar22->TabIndex = 68;
			this->hScrollBar22->Value = 511;
			this->hScrollBar22->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar22_Scroll);
			// 
			// hScrollBar23
			// 
			this->hScrollBar23->LargeChange = 4;
			this->hScrollBar23->Location = System::Drawing::Point(128, 544);
			this->hScrollBar23->Maximum = 1023;
			this->hScrollBar23->Name = S"hScrollBar23";
			this->hScrollBar23->Size = System::Drawing::Size(288, 16);
			this->hScrollBar23->TabIndex = 69;
			this->hScrollBar23->Value = 511;
			this->hScrollBar23->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar23_Scroll);
			// 
			// hScrollBar24
			// 
			this->hScrollBar24->LargeChange = 4;
			this->hScrollBar24->Location = System::Drawing::Point(128, 568);
			this->hScrollBar24->Maximum = 1023;
			this->hScrollBar24->Name = S"hScrollBar24";
			this->hScrollBar24->Size = System::Drawing::Size(288, 16);
			this->hScrollBar24->TabIndex = 70;
			this->hScrollBar24->Value = 511;
			this->hScrollBar24->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar24_Scroll);
			// 
			// hScrollBar25
			// 
			this->hScrollBar25->LargeChange = 4;
			this->hScrollBar25->Location = System::Drawing::Point(128, 592);
			this->hScrollBar25->Maximum = 1023;
			this->hScrollBar25->Name = S"hScrollBar25";
			this->hScrollBar25->Size = System::Drawing::Size(288, 16);
			this->hScrollBar25->TabIndex = 71;
			this->hScrollBar25->Value = 511;
			this->hScrollBar25->Scroll += new System::Windows::Forms::ScrollEventHandler(this, &Form1::hScrollBar25_Scroll);
			// 
			// label23
			// 
			this->label23->Location = System::Drawing::Point(8, 592);
			this->label23->Name = S"label23";
			this->label23->Size = System::Drawing::Size(64, 16);
			this->label23->TabIndex = 89;
			this->label23->Text = S"Channel 25";
			// 
			// label31
			// 
			this->label31->Location = System::Drawing::Point(8, 568);
			this->label31->Name = S"label31";
			this->label31->Size = System::Drawing::Size(64, 16);
			this->label31->TabIndex = 88;
			this->label31->Text = S"Channel 24";
			// 
			// label32
			// 
			this->label32->Location = System::Drawing::Point(8, 544);
			this->label32->Name = S"label32";
			this->label32->Size = System::Drawing::Size(64, 16);
			this->label32->TabIndex = 87;
			this->label32->Text = S"Channel 23";
			// 
			// label40
			// 
			this->label40->Location = System::Drawing::Point(8, 520);
			this->label40->Name = S"label40";
			this->label40->Size = System::Drawing::Size(64, 16);
			this->label40->TabIndex = 86;
			this->label40->Text = S"Channel 22";
			// 
			// label41
			// 
			this->label41->Location = System::Drawing::Point(8, 496);
			this->label41->Name = S"label41";
			this->label41->Size = System::Drawing::Size(64, 16);
			this->label41->TabIndex = 85;
			this->label41->Text = S"Channel 21";
			// 
			// label42
			// 
			this->label42->Location = System::Drawing::Point(8, 472);
			this->label42->Name = S"label42";
			this->label42->Size = System::Drawing::Size(64, 16);
			this->label42->TabIndex = 84;
			this->label42->Text = S"Channel 20";
			// 
			// label43
			// 
			this->label43->Location = System::Drawing::Point(8, 448);
			this->label43->Name = S"label43";
			this->label43->Size = System::Drawing::Size(64, 16);
			this->label43->TabIndex = 83;
			this->label43->Text = S"Channel 19";
			// 
			// label44
			// 
			this->label44->Location = System::Drawing::Point(8, 424);
			this->label44->Name = S"label44";
			this->label44->Size = System::Drawing::Size(64, 16);
			this->label44->TabIndex = 82;
			this->label44->Text = S"Channel 18";
			// 
			// label45
			// 
			this->label45->Location = System::Drawing::Point(8, 400);
			this->label45->Name = S"label45";
			this->label45->Size = System::Drawing::Size(64, 16);
			this->label45->TabIndex = 81;
			this->label45->Text = S"Channel 17";
			// 
			// label46
			// 
			this->label46->Location = System::Drawing::Point(80, 400);
			this->label46->Name = S"label46";
			this->label46->Size = System::Drawing::Size(40, 16);
			this->label46->TabIndex = 80;
			this->label46->Text = S"511";
			// 
			// label47
			// 
			this->label47->Location = System::Drawing::Point(80, 424);
			this->label47->Name = S"label47";
			this->label47->Size = System::Drawing::Size(40, 16);
			this->label47->TabIndex = 79;
			this->label47->Text = S"511";
			// 
			// label48
			// 
			this->label48->Location = System::Drawing::Point(80, 448);
			this->label48->Name = S"label48";
			this->label48->Size = System::Drawing::Size(40, 16);
			this->label48->TabIndex = 78;
			this->label48->Text = S"511";
			// 
			// label49
			// 
			this->label49->Location = System::Drawing::Point(80, 472);
			this->label49->Name = S"label49";
			this->label49->Size = System::Drawing::Size(40, 16);
			this->label49->TabIndex = 77;
			this->label49->Text = S"511";
			// 
			// label50
			// 
			this->label50->Location = System::Drawing::Point(80, 496);
			this->label50->Name = S"label50";
			this->label50->Size = System::Drawing::Size(40, 16);
			this->label50->TabIndex = 76;
			this->label50->Text = S"511";
			// 
			// label51
			// 
			this->label51->Location = System::Drawing::Point(80, 520);
			this->label51->Name = S"label51";
			this->label51->Size = System::Drawing::Size(40, 16);
			this->label51->TabIndex = 75;
			this->label51->Text = S"511";
			// 
			// label52
			// 
			this->label52->Location = System::Drawing::Point(80, 544);
			this->label52->Name = S"label52";
			this->label52->Size = System::Drawing::Size(40, 16);
			this->label52->TabIndex = 74;
			this->label52->Text = S"511";
			// 
			// label53
			// 
			this->label53->Location = System::Drawing::Point(80, 568);
			this->label53->Name = S"label53";
			this->label53->Size = System::Drawing::Size(40, 16);
			this->label53->TabIndex = 73;
			this->label53->Text = S"511";
			// 
			// label54
			// 
			this->label54->Location = System::Drawing::Point(80, 592);
			this->label54->Name = S"label54";
			this->label54->Size = System::Drawing::Size(40, 16);
			this->label54->TabIndex = 72;
			this->label54->Text = S"511";
			// 
			// Form1
			// 
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->ClientSize = System::Drawing::Size(432, 661);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->hScrollBar25);
			this->Controls->Add(this->hScrollBar24);
			this->Controls->Add(this->hScrollBar23);
			this->Controls->Add(this->hScrollBar22);
			this->Controls->Add(this->hScrollBar21);
			this->Controls->Add(this->hScrollBar20);
			this->Controls->Add(this->hScrollBar19);
			this->Controls->Add(this->hScrollBar14);
			this->Controls->Add(this->hScrollBar10);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->hScrollBar11);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->hScrollBar12);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->hScrollBar13);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->hScrollBar15);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->hScrollBar16);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->hScrollBar17);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->hScrollBar18);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->hScrollBar9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->hScrollBar5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->hScrollBar6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->hScrollBar7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->hScrollBar8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->hScrollBar4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->hScrollBar3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->hScrollBar2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->hScrollBar1);
			this->Name = S"Form1";
			this->Text = S"Endurance R/C - 25 Channel Controller Sample";
			this->Load += new System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}	

	private: System::Void Form1_Load(System::Object *  sender, System::EventArgs *  e)
			 {
				 c = new controller();	//create a new PCTx controller
				 values = new int[25];	//place to store channel values

				 if(c->connected == true) {
					label22->Text = "Connected";
/*
					//Initial servo values
					hScrollBar1->Value = 150;
					hScrollBar2->Value = 150;
					hScrollBar3->Value = 150;
					hScrollBar4->Value = 150;
					hScrollBar5->Value = 150;
					hScrollBar6->Value = 150;
					hScrollBar7->Value = 150;
					hScrollBar8->Value = 150;
					hScrollBar9->Value = 150;
					hScrollBar18->Value = 150;
					hScrollBar17->Value = 150;
					hScrollBar16->Value = 150;
					hScrollBar15->Value = 150;
					hScrollBar11->Value = 150;
					hScrollBar13->Value = 150;
					hScrollBar12->Value = 150;
*/
					this->timer1->Enabled = true;  //start the timer
				}
			 }

//called on a timer tick
private: bool update()
		 {
			 int ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10, ch11, ch12, ch13, ch14, ch15,
				 ch16, ch17, ch18, ch19, ch20, ch21, ch22, ch23, ch24, ch25, ch26, ch27, ch28, ch29,
				 ch30, ch31, ch32, ch33, ch34, ch35, ch36, ch37, ch38, ch39, ch40, ch41, ch42, ch43, 
				 ch44, ch45, ch46, ch47, ch48, ch49, ch50;

			 ch1 = 1;
			 ch2 = 1;
			 ch3 = 1;
			 ch4 = 1;
			 ch5 = 1;
			 ch6 = 1;
			 ch7 = 1;
			 ch8 = 1;
			 ch9 = 1;
			 ch10 = 1;
			 ch11 = 1;
			 ch12 = 1;
			 ch13 = 1;
			 ch14 = 1;
			 ch15 = 1;
			 ch16 = 1;
			 ch17 = 1;
			 ch18 = 1;
			 ch19 = 1;
			 ch20 = 1;
			 ch21 = 1;
			 ch22 = 1;
			 ch23 = 1;
			 ch24 = 1;
			 ch25 = 1;
			 ch26 = 1;
			 ch27 = 1;
			 ch28 = 1;
			 ch29 = 1;
			 ch30 = 1;
			 ch31 = 1;
			 ch32 = 1;
			 ch33 = 1;
			 ch34 = 1;
			 ch35 = 1;
			 ch36 = 1;
			 ch37 = 1;
			 ch38 = 1;
			 ch39 = 1;
			 ch40 = 1;
			 ch41 = 1;
			 ch42 = 1;
			 ch43 = 1;
			 ch44 = 1;
			 ch45 = 1;
			 ch46 = 1;
			 ch47 = 1;
			 ch48 = 1;
			 ch49 = 1;
			 ch50 = 1;
/*
			 ch1 = hScrollBar1->Value;
			 ch2 = hScrollBar2->Value;
			 ch3 = hScrollBar3->Value;
			 ch4 = hScrollBar4->Value;
			 ch5 = hScrollBar5->Value;
			 ch6 = hScrollBar6->Value;
			 ch7 = hScrollBar7->Value;
			 ch8 = hScrollBar8->Value;
			 ch9 = hScrollBar9->Value;
			 ch10 = hScrollBar10->Value;
			 ch11 = hScrollBar11->Value;
			 ch12 = hScrollBar12->Value;
			 ch13 = hScrollBar13->Value;
			 ch14 = hScrollBar14->Value;
			 ch15 = hScrollBar15->Value;
			 ch16 = hScrollBar16->Value;
			 ch17 = hScrollBar17->Value;
			 ch18 = hScrollBar18->Value;
			 ch19 = hScrollBar19->Value;
			 ch20 = hScrollBar20->Value;
			 ch21 = hScrollBar21->Value;
			 ch22 = hScrollBar22->Value;
			 ch23 = hScrollBar23->Value;
			 ch24 = hScrollBar24->Value;
			 ch25 = hScrollBar25->Value;


			 ch26 = hScrollBar1->Value;
			 ch27 = hScrollBar2->Value;
			 ch28 = hScrollBar3->Value;
			 ch29 = hScrollBar4->Value;
			 ch30 = hScrollBar5->Value;
			 ch31 = hScrollBar6->Value;
			 ch32 = hScrollBar7->Value;
			 ch33 = hScrollBar8->Value;
			 ch34 = hScrollBar9->Value;
			 ch35 = hScrollBar10->Value;
			 ch36 = hScrollBar11->Value;
			 ch37 = hScrollBar12->Value;
			 ch38 = hScrollBar13->Value;
			 ch39 = hScrollBar14->Value;
			 ch40 = hScrollBar15->Value;
			 ch41 = hScrollBar16->Value;
			 ch42 = hScrollBar17->Value;
			 ch43 = hScrollBar18->Value;
			 ch44 = hScrollBar19->Value;
			 ch45 = hScrollBar20->Value;
			 ch46 = hScrollBar21->Value;
			 ch47 = hScrollBar22->Value;
			 ch48 = hScrollBar23->Value;
			 ch49 = hScrollBar24->Value;
			 ch50 = hScrollBar25->Value;
*/


			 ch1 = hScrollBar1->Value % 256;
			 ch2 = hScrollBar1->Value / 256;
			 ch3 = hScrollBar2->Value % 256;
			 ch4 = hScrollBar2->Value / 256;
			 ch5 = hScrollBar3->Value % 256;
			 ch6 = hScrollBar3->Value / 256;
			 ch7 = hScrollBar4->Value % 256;
			 ch8 = hScrollBar4->Value / 256;
			 ch9 = hScrollBar5->Value % 256;
			 ch10 = hScrollBar5->Value / 256;
			 ch11 = hScrollBar6->Value % 256;
			 ch12 = hScrollBar6->Value / 256;
			 ch13 = hScrollBar7->Value % 256;
			 ch14 = hScrollBar7->Value / 256;
			 ch15 = hScrollBar8->Value % 256;
			 ch16 = hScrollBar8->Value / 256;
			 ch17 = hScrollBar9->Value % 256;
			 ch18 = hScrollBar9->Value / 256;
			 ch19 = hScrollBar10->Value % 256;
			 ch20 = hScrollBar10->Value / 256;
			 ch21 = hScrollBar11->Value % 256;
			 ch22 = hScrollBar11->Value / 256;
			 ch23 = hScrollBar12->Value % 256;
			 ch24 = hScrollBar12->Value / 256;
			 ch25 = hScrollBar13->Value % 256;
			 ch26 = hScrollBar13->Value / 256;
			 ch27 = hScrollBar14->Value % 256;
			 ch28 = hScrollBar14->Value / 256;
			 ch29 = hScrollBar15->Value % 256;
			 ch30 = hScrollBar15->Value / 256;
			 ch31 = hScrollBar16->Value % 256;
			 ch32 = hScrollBar16->Value / 256;
			 ch33 = hScrollBar17->Value % 256;
			 ch34 = hScrollBar17->Value / 256;
			 ch35 = hScrollBar18->Value % 256;
			 ch36 = hScrollBar18->Value / 256;
			 ch37 = hScrollBar19->Value % 256;
			 ch38 = hScrollBar19->Value / 256;
			 ch39 = hScrollBar20->Value % 256;
			 ch40 = hScrollBar20->Value / 256;
			 ch41 = hScrollBar21->Value % 256;
			 ch42 = hScrollBar21->Value / 256;
			 ch43 = hScrollBar22->Value % 256;
			 ch44 = hScrollBar22->Value / 256;
			 ch45 = hScrollBar23->Value % 256;
			 ch46 = hScrollBar23->Value / 256;
			 ch47 = hScrollBar24->Value % 256;
			 ch48 = hScrollBar24->Value / 256;
			 ch49 = hScrollBar25->Value % 256;
			 ch50 = hScrollBar25->Value / 256;


/*
			 if(hScrollBar1->Value > 255) {
				 ch1 = 255;

				 if(hScrollBar1->Value > 510) {
					 ch1 = 255;
					 ch2 = 255;

					if(hScrollBar1->Value > 765) {
						ch1 = 255;
						ch2 = 255;
						ch3 = 255;
						if(hScrollBar1->Value > 1020){
							ch4 = 255;
						}
						else {
							ch4 = hScrollBar1->Value - 765;
						}
					}
					else {
						ch3 = hScrollBar1->Value - 510;
					}
				 }
				 else {
					 ch2 = hScrollBar1->Value - 255;
				 }
			 }
			 else {
				 ch1 = hScrollBar1->Value;
			 }
*/

//			 return c->send(hScrollBar1->Value,hScrollBar2->Value,hScrollBar3->Value,hScrollBar4->Value,
			 return c->send(ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10, ch11, ch12, ch13, ch14, ch15,
				 ch16, ch17, ch18, ch19, ch20, ch21, ch22, ch23, ch24, ch25, ch26, ch27, ch28, ch29,
				 ch30, ch31, ch32, ch33, ch34, ch35, ch36, ch37, ch38, ch39, ch40, ch41, ch42, ch43, 
				 ch44, ch45, ch46, ch47, ch48, ch49, ch50);
		 }

private: System::Void timer1_Tick(System::Object *  sender, System::EventArgs *  e)
		 {
				if(update()){
					label22->Text = "Connected";
					label21->Visible = true;
				}
				else {
					if(c->connect()){
						label22->Text = "Connected";
						label21->Visible = true;
					}
					else {
						label22->Text = "Not Connected";
						label21->Visible = false;
					}
				}
		 }

private: System::Void hScrollBar1_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
			{
				label2->Text = hScrollBar1->Value.ToString();
			}

private: System::Void hScrollBar2_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				 label3->Text = hScrollBar2->Value.ToString();
		 }

private: System::Void hScrollBar3_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				 label4->Text = hScrollBar3->Value.ToString();
		 }

private: System::Void hScrollBar4_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				 label5->Text = hScrollBar4->Value.ToString();
		 }

private: System::Void hScrollBar5_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				 label6->Text = hScrollBar5->Value.ToString();
		 }

private: System::Void hScrollBar6_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				 label7->Text = hScrollBar6->Value.ToString();
		 }

private: System::Void hScrollBar7_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				 label8->Text = hScrollBar7->Value.ToString();
		 }

private: System::Void hScrollBar8_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				 label9->Text = hScrollBar8->Value.ToString();
		 }

private: System::Void hScrollBar9_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				 label10->Text = hScrollBar9->Value.ToString();
		 }

private: System::Void hScrollBar18_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				 label47->Text = hScrollBar18->Value.ToString();
		 }

private: System::Void hScrollBar17_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				 label46->Text = hScrollBar17->Value.ToString();
		 }

private: System::Void hScrollBar16_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				 label39->Text = hScrollBar16->Value.ToString();
		 }

private: System::Void hScrollBar15_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				 label38->Text = hScrollBar15->Value.ToString();
		 }

private: System::Void hScrollBar10_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
			 label33->Text = hScrollBar10->Value.ToString();
		 }

private: System::Void hScrollBar11_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				 label34->Text = hScrollBar11->Value.ToString();
		 }

private: System::Void hScrollBar13_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				 label36->Text = hScrollBar13->Value.ToString();
		 }

private: System::Void hScrollBar12_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				 label35->Text = hScrollBar12->Value.ToString();
		 }

private: System::Void hScrollBar14_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				label37->Text = hScrollBar14->Value.ToString();
		 }

private: System::Void hScrollBar19_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
			 label48->Text = hScrollBar19->Value.ToString();
		 }

private: System::Void hScrollBar20_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
			 label49->Text = hScrollBar20->Value.ToString();
		 }

private: System::Void hScrollBar21_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				label50->Text = hScrollBar21->Value.ToString();
		 }

private: System::Void hScrollBar22_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				label51->Text = hScrollBar22->Value.ToString();
		 }

private: System::Void hScrollBar23_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				label52->Text = hScrollBar23->Value.ToString();
		 }

private: System::Void hScrollBar24_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
			 	label53->Text = hScrollBar24->Value.ToString();
		 }

private: System::Void hScrollBar25_Scroll(System::Object *  sender, System::Windows::Forms::ScrollEventArgs *  e)
		 {
				label54->Text = hScrollBar25->Value.ToString();
		 }

};
}