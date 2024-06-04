#pragma once

namespace cppwinforms {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ btn_exit;
    private: System::Windows::Forms::Label^ label_result;
    private: System::Windows::Forms::Button^ btn_ac;

    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ btn_plus_minus;

    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button11;


    private: System::Windows::Forms::Button^ btn_plus;

    private: System::Windows::Forms::Button^ btn_min;

    private: System::Windows::Forms::Button^ btn_mult;

    private: System::Windows::Forms::Button^ btn_divide;
    private: System::Windows::Forms::Button^ btn_equals;




    private: System::Windows::Forms::Button^ button20;

    private: float first_num;
    private:char user_action=' ';
    private: bool is_equal = false;




    protected:

    protected:
    private:



        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->btn_exit = (gcnew System::Windows::Forms::Button());
            this->label_result = (gcnew System::Windows::Forms::Label());
            this->btn_ac = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->btn_plus_minus = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->btn_plus = (gcnew System::Windows::Forms::Button());
            this->btn_min = (gcnew System::Windows::Forms::Button());
            this->btn_mult = (gcnew System::Windows::Forms::Button());
            this->btn_divide = (gcnew System::Windows::Forms::Button());
            this->btn_equals = (gcnew System::Windows::Forms::Button());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // btn_exit
            // 
            this->btn_exit->BackColor = System::Drawing::Color::Red;
            this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_exit->Location = System::Drawing::Point(13, 23);
            this->btn_exit->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
            this->btn_exit->Name = L"btn_exit";
            this->btn_exit->Size = System::Drawing::Size(27, 27);
            this->btn_exit->TabIndex = 0;
            this->btn_exit->Text = L"X";
            this->btn_exit->UseVisualStyleBackColor = false;
            this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
            // 
            // label_result
            // 
            this->label_result->Font = (gcnew System::Drawing::Font(L"Arial", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->label_result->Location = System::Drawing::Point(65, 23);
            this->label_result->Name = L"label_result";
            this->label_result->Size = System::Drawing::Size(206, 40);
            this->label_result->TabIndex = 0;
            this->label_result->Text = L"0";
            this->label_result->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            // 
            // btn_ac
            // 
            this->btn_ac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(56)),
                static_cast<System::Int32>(static_cast<System::Byte>(56)));
            this->btn_ac->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btn_ac->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->btn_ac->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btn_ac->Location = System::Drawing::Point(13, 85);
            this->btn_ac->Name = L"btn_ac";
            this->btn_ac->Size = System::Drawing::Size(126, 60);
            this->btn_ac->TabIndex = 1;
            this->btn_ac->Text = L"AC";
            this->btn_ac->UseVisualStyleBackColor = false;
            this->btn_ac->Click += gcnew System::EventHandler(this, &MyForm::btn_ac_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::Gray;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->button2->Location = System::Drawing::Point(13, 151);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(60, 60);
            this->button2->TabIndex = 2;
            this->button2->Text = L"7";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::Gray;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button3->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->button3->Location = System::Drawing::Point(12, 217);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(60, 60);
            this->button3->TabIndex = 3;
            this->button3->Text = L"4";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::Gray;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button4->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->button4->Location = System::Drawing::Point(12, 283);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(60, 60);
            this->button4->TabIndex = 4;
            this->button4->Text = L"1";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::Gray;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button5->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->button5->Location = System::Drawing::Point(78, 283);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(60, 60);
            this->button5->TabIndex = 8;
            this->button5->Text = L"2";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::Gray;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button6->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->button6->Location = System::Drawing::Point(78, 217);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(60, 60);
            this->button6->TabIndex = 7;
            this->button6->Text = L"5";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::Gray;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button7->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->button7->Location = System::Drawing::Point(79, 151);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(60, 60);
            this->button7->TabIndex = 6;
            this->button7->Text = L"8";
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
            // 
            // btn_plus_minus
            // 
            this->btn_plus_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(56)),
                static_cast<System::Int32>(static_cast<System::Byte>(56)));
            this->btn_plus_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btn_plus_minus->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->btn_plus_minus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btn_plus_minus->Location = System::Drawing::Point(144, 85);
            this->btn_plus_minus->Name = L"btn_plus_minus";
            this->btn_plus_minus->Size = System::Drawing::Size(60, 60);
            this->btn_plus_minus->TabIndex = 5;
            this->btn_plus_minus->Text = L"+/-";
            this->btn_plus_minus->UseVisualStyleBackColor = false;
            this->btn_plus_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_minus_Click);
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::Color::Gray;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button9->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->button9->Location = System::Drawing::Point(144, 283);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(60, 60);
            this->button9->TabIndex = 12;
            this->button9->Text = L"3";
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
            // 
            // button10
            // 
            this->button10->BackColor = System::Drawing::Color::Gray;
            this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button10->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->button10->Location = System::Drawing::Point(144, 217);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(60, 60);
            this->button10->TabIndex = 11;
            this->button10->Text = L"6";
            this->button10->UseVisualStyleBackColor = false;
            this->button10->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
            // 
            // button11
            // 
            this->button11->BackColor = System::Drawing::Color::Gray;
            this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button11->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->button11->Location = System::Drawing::Point(145, 151);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(60, 60);
            this->button11->TabIndex = 10;
            this->button11->Text = L"9";
            this->button11->UseVisualStyleBackColor = false;
            this->button11->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
            // 
            // btn_plus
            // 
            this->btn_plus->BackColor = System::Drawing::Color::Goldenrod;
            this->btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btn_plus->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->btn_plus->Location = System::Drawing::Point(210, 283);
            this->btn_plus->Name = L"btn_plus";
            this->btn_plus->Size = System::Drawing::Size(60, 60);
            this->btn_plus->TabIndex = 16;
            this->btn_plus->Text = L"+";
            this->btn_plus->UseVisualStyleBackColor = false;
            this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
            // 
            // btn_min
            // 
            this->btn_min->BackColor = System::Drawing::Color::Goldenrod;
            this->btn_min->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btn_min->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->btn_min->Location = System::Drawing::Point(210, 217);
            this->btn_min->Name = L"btn_min";
            this->btn_min->Size = System::Drawing::Size(60, 60);
            this->btn_min->TabIndex = 15;
            this->btn_min->Text = L"-";
            this->btn_min->UseVisualStyleBackColor = false;
            this->btn_min->Click += gcnew System::EventHandler(this, &MyForm::btn_min_Click);
            // 
            // btn_mult
            // 
            this->btn_mult->BackColor = System::Drawing::Color::Goldenrod;
            this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btn_mult->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->btn_mult->Location = System::Drawing::Point(211, 151);
            this->btn_mult->Name = L"btn_mult";
            this->btn_mult->Size = System::Drawing::Size(60, 60);
            this->btn_mult->TabIndex = 14;
            this->btn_mult->Text = L"*";
            this->btn_mult->UseVisualStyleBackColor = false;
            this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
            // 
            // btn_divide
            // 
            this->btn_divide->BackColor = System::Drawing::Color::Goldenrod;
            this->btn_divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btn_divide->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->btn_divide->Location = System::Drawing::Point(211, 85);
            this->btn_divide->Name = L"btn_divide";
            this->btn_divide->Size = System::Drawing::Size(60, 60);
            this->btn_divide->TabIndex = 13;
            this->btn_divide->Text = L"/";
            this->btn_divide->UseVisualStyleBackColor = false;
            this->btn_divide->Click += gcnew System::EventHandler(this, &MyForm::btn_divide_Click);
            // 
            // btn_equals
            // 
            this->btn_equals->BackColor = System::Drawing::Color::Goldenrod;
            this->btn_equals->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btn_equals->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->btn_equals->Location = System::Drawing::Point(144, 349);
            this->btn_equals->Name = L"btn_equals";
            this->btn_equals->Size = System::Drawing::Size(126, 60);
            this->btn_equals->TabIndex = 20;
            this->btn_equals->Text = L"=";
            this->btn_equals->UseVisualStyleBackColor = false;
            this->btn_equals->Click += gcnew System::EventHandler(this, &MyForm::btn_equals_Click);
            // 
            // button20
            // 
            this->button20->BackColor = System::Drawing::Color::Gray;
            this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button20->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->button20->Location = System::Drawing::Point(12, 349);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(126, 60);
            this->button20->TabIndex = 17;
            this->button20->Text = L"0";
            this->button20->UseVisualStyleBackColor = false;
            this->button20->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(56)),
                static_cast<System::Int32>(static_cast<System::Byte>(56)));
            this->ClientSize = System::Drawing::Size(283, 420);
            this->Controls->Add(this->btn_equals);
            this->Controls->Add(this->button20);
            this->Controls->Add(this->btn_plus);
            this->Controls->Add(this->btn_min);
            this->Controls->Add(this->btn_mult);
            this->Controls->Add(this->btn_divide);
            this->Controls->Add(this->button9);
            this->Controls->Add(this->button10);
            this->Controls->Add(this->button11);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->button6);
            this->Controls->Add(this->button7);
            this->Controls->Add(this->btn_plus_minus);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->btn_ac);
            this->Controls->Add(this->label_result);
            this->Controls->Add(this->btn_exit);
            this->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(136)));
            this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Calc";
            this->ResumeLayout(false);

        }
    private:
      
 
    private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
    // ^ collect rubbish
    private: System::Void btn_num_Click(System::Object^ sender, System::EventArgs^ e) {
        Button^ button = safe_cast<Button^>(sender);


        

        if (this->label_result->Text == "0" || is_equal) {
            this->label_result->Text = button->Text;
            is_equal = false;
        }
        else {
            this->label_result->Text += button->Text;
        }


    }
    
private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
    math_action('+');
}
private: System::Void btn_min_Click(System::Object^ sender, System::EventArgs^ e) {
    math_action('-');
}
private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) {
    math_action('*');
}
private: System::Void btn_divide_Click(System::Object^ sender, System::EventArgs^ e) {
    math_action('/');
}

private: System::Void math_action(char action) {
    this->first_num = System::Convert::ToDouble(this->label_result->Text);
    this->user_action = action;
    this->label_result->Text = "0";
}

private: System::Void btn_equals_Click(System::Object^ sender, System::EventArgs^ e) {
    if (user_action == ' ') {
        return;
    }

    float second_num = System::Convert::ToDouble(this->label_result->Text);
    float res = 0; // Initialize res to a default value
    switch (this->user_action) {
    case '+':
        res = this->first_num + second_num;
        break;
    case '-':
        res = this->first_num - second_num;
        break;
    case '*':
        res = this->first_num * second_num;
        break;
    case '/':
        if (second_num == 0) {
            res = 0;
            MessageBox::Show(this, "Division by zero is not allowed.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            res = this->first_num / second_num;
        }
        break;
    }

    is_equal = true;
    this->label_result->Text = System::Convert::ToString(res);
}




private: System::Void btn_ac_Click(System::Object^ sender, System::EventArgs^ e) {
    this->label_result->Text = "0";
    this->first_num = 0;
    this->user_action = ' ';
    is_equal = false;
}
private: System::Void btn_plus_minus_Click(System::Object^ sender, System::EventArgs^ e) {
    int num = System::Convert::ToDouble(this->label_result->Text);
    num *= -1;
    this->label_result->Text = System::Convert::ToString(num);
}



};
}
