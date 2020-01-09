object Form2: TForm2
  Left = 804
  Top = 354
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Login'
  ClientHeight = 409
  ClientWidth = 341
  Color = clAppWorkSpace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  OnKeyPress = FormKeyPress
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 64
    Top = 120
    Width = 217
    Height = 41
    Caption = 'Log in'
    TabOrder = 0
    OnClick = Button1Click
  end
  object login: TEdit
    Left = 64
    Top = 56
    Width = 217
    Height = 21
    TabOrder = 1
    Text = 'login'
  end
  object password: TEdit
    Left = 64
    Top = 88
    Width = 217
    Height = 21
    TabOrder = 2
    Text = 'password'
  end
  object Button2: TButton
    Left = 64
    Top = 168
    Width = 217
    Height = 41
    Caption = 'Sign up'
    TabOrder = 3
    OnClick = Button2Click
  end
end
