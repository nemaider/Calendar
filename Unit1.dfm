object Form1: TForm1
  Left = 430
  Top = 122
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'Calendar'
  ClientHeight = 731
  ClientWidth = 987
  Color = clAppWorkSpace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Month: TLabel
    Left = 88
    Top = 35
    Width = 121
    Height = 30
    Alignment = taCenter
    AutoSize = False
    Caption = 'miesiac'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Year: TLabel
    Left = 328
    Top = 35
    Width = 121
    Height = 29
    Alignment = taCenter
    AutoSize = False
    Caption = 'rok'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label1: TLabel
    Left = 664
    Top = 112
    Width = 185
    Height = 33
    Alignment = taCenter
    AutoSize = False
    Caption = 'dzien'
    Color = clAppWorkSpace
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    Visible = False
  end
  object Label2: TLabel
    Left = 664
    Top = 32
    Width = 40
    Height = 16
    Caption = 'Dzie'#324
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 716
    Top = 32
    Width = 55
    Height = 16
    Caption = 'Miesi'#261'c'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 800
    Top = 32
    Width = 29
    Height = 16
    Caption = 'Rok'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 16
    Top = 104
    Width = 91
    Height = 16
    Caption = 'Poniedzia'#322'ek'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label6: TLabel
    Left = 116
    Top = 104
    Width = 50
    Height = 16
    Caption = 'Wtorek'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label7: TLabel
    Left = 196
    Top = 104
    Width = 43
    Height = 16
    Caption = #346'roda'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label8: TLabel
    Left = 266
    Top = 104
    Width = 63
    Height = 16
    Caption = 'Czwartek'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label9: TLabel
    Left = 356
    Top = 104
    Width = 45
    Height = 16
    Caption = 'Pi'#261'tek'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label10: TLabel
    Left = 432
    Top = 104
    Width = 51
    Height = 16
    Caption = 'Sobota'
    Color = clAppWorkSpace
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clScrollBar
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object Label11: TLabel
    Left = 504
    Top = 104
    Width = 67
    Height = 16
    Caption = 'Niedziela'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label12: TLabel
    Left = 662
    Top = 192
    Width = 3
    Height = 13
    Color = clAppWorkSpace
    ParentColor = False
  end
  object Label13: TLabel
    Left = 792
    Top = 160
    Width = 3
    Height = 13
    Color = clAppWorkSpace
    ParentColor = False
  end
  object Label14: TLabel
    Left = 728
    Top = 160
    Width = 3
    Height = 13
    Color = clAppWorkSpace
    ParentColor = False
  end
  object Label15: TLabel
    Left = 672
    Top = 160
    Width = 3
    Height = 13
    Color = clAppWorkSpace
    ParentColor = False
  end
  object Label16: TLabel
    Left = 608
    Top = 558
    Width = 47
    Height = 13
    Caption = 'Godzina'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
  end
  object Label17: TLabel
    Left = 618
    Top = 524
    Width = 26
    Height = 13
    Caption = 'Opis'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
  end
  object Label18: TLabel
    Left = 616
    Top = 586
    Width = 39
    Height = 13
    Caption = 'Minuta'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
  end
  object Label19: TLabel
    Left = 648
    Top = 192
    Width = 3
    Height = 13
    Color = clAppWorkSpace
    ParentColor = False
  end
  object Label20: TLabel
    Left = 56
    Top = 616
    Width = 102
    Height = 29
    Caption = 'Welcome'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object user: TLabel
    Left = 32
    Top = 648
    Width = 153
    Height = 25
    Alignment = taCenter
    AutoSize = False
    Caption = 'siema'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button1: TButton
    Left = 24
    Top = 128
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 104
    Top = 128
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 184
    Top = 128
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 264
    Top = 128
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 344
    Top = 128
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 424
    Top = 128
    Width = 73
    Height = 73
    Cancel = True
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 504
    Top = 128
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 24
    Top = 208
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 7
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 104
    Top = 208
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 8
    OnClick = Button9Click
  end
  object Button10: TButton
    Left = 184
    Top = 208
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 9
    OnClick = Button10Click
  end
  object Button11: TButton
    Left = 264
    Top = 208
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 10
    OnClick = Button11Click
  end
  object Button12: TButton
    Left = 344
    Top = 208
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 11
    OnClick = Button12Click
  end
  object Button13: TButton
    Left = 424
    Top = 208
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 12
    OnClick = Button13Click
  end
  object Button14: TButton
    Left = 504
    Top = 208
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 13
    OnClick = Button14Click
  end
  object Button15: TButton
    Left = 24
    Top = 288
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 14
    OnClick = Button15Click
  end
  object Button16: TButton
    Left = 104
    Top = 288
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 15
    OnClick = Button16Click
  end
  object Button17: TButton
    Left = 184
    Top = 288
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 16
    OnClick = Button17Click
  end
  object Button18: TButton
    Left = 264
    Top = 288
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 17
    OnClick = Button18Click
  end
  object Button19: TButton
    Left = 344
    Top = 288
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 18
    OnClick = Button19Click
  end
  object Button20: TButton
    Left = 424
    Top = 288
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 19
    OnClick = Button20Click
  end
  object Button21: TButton
    Left = 504
    Top = 288
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 20
    OnClick = Button21Click
  end
  object Button22: TButton
    Left = 24
    Top = 368
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 21
    OnClick = Button22Click
  end
  object Button23: TButton
    Left = 104
    Top = 368
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 22
    OnClick = Button23Click
  end
  object Button24: TButton
    Left = 184
    Top = 368
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 23
    OnClick = Button24Click
  end
  object Button25: TButton
    Left = 264
    Top = 368
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 24
    OnClick = Button25Click
  end
  object Button26: TButton
    Left = 344
    Top = 368
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 25
    OnClick = Button26Click
  end
  object Button27: TButton
    Left = 424
    Top = 368
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 26
    OnClick = Button27Click
  end
  object Button28: TButton
    Left = 504
    Top = 368
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 27
    OnClick = Button28Click
  end
  object Button29: TButton
    Left = 24
    Top = 448
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 28
    OnClick = Button29Click
  end
  object Button30: TButton
    Left = 104
    Top = 448
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 29
    OnClick = Button30Click
  end
  object Button31: TButton
    Left = 184
    Top = 448
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 30
    OnClick = Button31Click
  end
  object Button32: TButton
    Left = 264
    Top = 448
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 31
    OnClick = Button32Click
  end
  object Button33: TButton
    Left = 344
    Top = 448
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 32
    OnClick = Button33Click
  end
  object Button34: TButton
    Left = 424
    Top = 448
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 33
    OnClick = Button34Click
  end
  object Button35: TButton
    Left = 504
    Top = 448
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 34
    OnClick = Button35Click
  end
  object Button36: TButton
    Left = 24
    Top = 528
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 35
    OnClick = Button36Click
  end
  object Button37: TButton
    Left = 104
    Top = 528
    Width = 73
    Height = 73
    Caption = 'Button1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 36
    OnClick = Button37Click
  end
  object Button38: TButton
    Left = 40
    Top = 40
    Width = 33
    Height = 25
    Caption = '<'
    TabOrder = 37
    OnClick = Button38Click
  end
  object Button39: TButton
    Left = 224
    Top = 40
    Width = 33
    Height = 25
    Caption = '>'
    TabOrder = 38
    OnClick = Button39Click
  end
  object Calculate_date: TButton
    Left = 664
    Top = 80
    Width = 185
    Height = 25
    Caption = 'Oblicz dzie'#324' tygodnia'
    TabOrder = 39
    OnClick = Calculate_dateClick
  end
  object Dzien: TEdit
    Left = 664
    Top = 48
    Width = 41
    Height = 21
    HelpType = htKeyword
    Color = clWhite
    TabOrder = 40
  end
  object Miesiac: TEdit
    Left = 712
    Top = 48
    Width = 65
    Height = 21
    TabOrder = 41
  end
  object Rok: TEdit
    Left = 784
    Top = 48
    Width = 65
    Height = 21
    TabOrder = 42
  end
  object Button40: TButton
    Left = 320
    Top = 40
    Width = 33
    Height = 25
    Caption = '<'
    TabOrder = 43
    OnClick = Button40Click
  end
  object Button41: TButton
    Left = 424
    Top = 40
    Width = 33
    Height = 25
    Caption = '>'
    TabOrder = 44
    OnClick = Button41Click
  end
  object Button42: TButton
    Left = 664
    Top = 480
    Width = 185
    Height = 33
    Caption = 'Dodaj wydarzenie'
    TabOrder = 45
    Visible = False
    OnClick = Button42Click
  end
  object Edit1: TEdit
    Left = 664
    Top = 520
    Width = 185
    Height = 21
    TabOrder = 46
    Visible = False
  end
  object Edit2: TEdit
    Left = 664
    Top = 552
    Width = 65
    Height = 21
    TabOrder = 47
    Visible = False
  end
  object Edit3: TEdit
    Left = 664
    Top = 584
    Width = 65
    Height = 21
    TabOrder = 48
    Visible = False
  end
  object Button43: TButton
    Left = 664
    Top = 448
    Width = 57
    Height = 25
    Caption = 'Dodaj'
    TabOrder = 49
    Visible = False
    OnClick = Button43Click
  end
  object Button44: TButton
    Left = 728
    Top = 448
    Width = 49
    Height = 25
    Caption = 'Usu'#324
    TabOrder = 50
    Visible = False
    OnClick = Button44Click
  end
  object Button45: TButton
    Left = 784
    Top = 448
    Width = 65
    Height = 25
    Caption = 'Edytuj'
    TabOrder = 51
    Visible = False
  end
  object Button46: TButton
    Left = 784
    Top = 584
    Width = 67
    Height = 25
    Caption = 'Cofnij'
    TabOrder = 52
    Visible = False
    OnClick = Button46Click
  end
  object Button47: TButton
    Left = 32
    Top = 680
    Width = 153
    Height = 33
    Caption = 'Sign out'
    TabOrder = 53
    OnClick = Button47Click
  end
  object Button48: TButton
    Left = 664
    Top = 552
    Width = 185
    Height = 25
    Caption = 'Dodaj godzine'
    TabOrder = 54
    Visible = False
    OnClick = Button48Click
  end
end
