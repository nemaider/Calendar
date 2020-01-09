object Form3: TForm3
  Left = 804
  Top = 353
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'Sign up'
  ClientHeight = 409
  ClientWidth = 388
  Color = clAppWorkSpace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnKeyPress = FormKeyPress
  PixelsPerInch = 96
  TextHeight = 13
  object login: TEdit
    Left = 88
    Top = 40
    Width = 193
    Height = 21
    TabOrder = 0
    Text = 'login'
  end
  object password: TEdit
    Left = 88
    Top = 80
    Width = 193
    Height = 21
    TabOrder = 1
    Text = 'password'
  end
  object repassword: TEdit
    Left = 88
    Top = 120
    Width = 193
    Height = 21
    TabOrder = 2
    Text = 'repassword'
  end
  object Button1: TButton
    Left = 88
    Top = 160
    Width = 193
    Height = 49
    Caption = 'Sign up'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 88
    Top = 232
    Width = 193
    Height = 49
    Caption = 'Log in'
    TabOrder = 4
    OnClick = Button2Click
  end
end
