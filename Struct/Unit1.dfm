object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1050#1085#1080#1075#1080
  ClientHeight = 230
  ClientWidth = 653
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 32
    Top = 40
    Width = 31
    Height = 13
    Caption = #1040#1074#1090#1086#1088
  end
  object Label2: TLabel
    Left = 32
    Top = 72
    Width = 48
    Height = 13
    Caption = #1053#1072#1079#1074#1072#1085#1080#1077
  end
  object Label3: TLabel
    Left = 32
    Top = 104
    Width = 64
    Height = 13
    Caption = #1043#1086#1076' '#1080#1079#1076#1072#1085#1080#1103
  end
  object Label4: TLabel
    Left = 32
    Top = 136
    Width = 79
    Height = 13
    Caption = #1050#1086#1083'-'#1074#1086' '#1089#1090#1088#1072#1085#1080#1094
  end
  object Edit1: TEdit
    Left = 117
    Top = 37
    Width = 121
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 117
    Top = 69
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 117
    Top = 101
    Width = 121
    Height = 21
    TabOrder = 2
    Text = 'Edit3'
  end
  object Edit4: TEdit
    Left = 117
    Top = 133
    Width = 121
    Height = 21
    TabOrder = 3
    Text = 'Edit4'
  end
  object Memo1: TMemo
    Left = 328
    Top = 37
    Width = 273
    Height = 117
    Lines.Strings = (
      'Memo1')
    TabOrder = 4
  end
  object addBook: TButton
    Left = 32
    Top = 184
    Width = 113
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1082#1085#1080#1075#1091
    TabOrder = 5
    OnClick = addBookClick
  end
  object info: TButton
    Left = 176
    Top = 184
    Width = 145
    Height = 25
    Caption = #1055#1088#1086#1089#1084#1086#1090#1088' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1080
    TabOrder = 6
    OnClick = infoClick
  end
  object maxButton: TButton
    Left = 344
    Top = 184
    Width = 121
    Height = 25
    Caption = #1052#1072#1082#1089' '#1082#1086#1083'-'#1074#1086' '#1089#1090#1088'.'
    TabOrder = 7
    OnClick = maxButtonClick
  end
end
