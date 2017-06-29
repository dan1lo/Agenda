object frmloginuse: Tfrmloginuse
  Left = 192
  Top = 114
  Width = 300
  Height = 138
  BorderIcons = []
  Caption = 'Login'
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -15
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 18
  object lbluse: TLabel
    Left = 16
    Top = 16
    Width = 48
    Height = 18
    Caption = 'Usu'#225'rio'
  end
  object lblsenha: TLabel
    Left = 16
    Top = 48
    Width = 40
    Height = 18
    Caption = 'Senha'
  end
  object edtuse: TEdit
    Left = 72
    Top = 8
    Width = 121
    Height = 26
    TabOrder = 0
  end
  object edtsenha: TEdit
    Left = 72
    Top = 40
    Width = 121
    Height = 26
    TabOrder = 1
  end
  object brtok: TBitBtn
    Left = 208
    Top = 8
    Width = 73
    Height = 25
    Caption = 'Ok'
    TabOrder = 2
    OnClick = brtokClick
  end
  object brtsair: TButton
    Left = 208
    Top = 40
    Width = 75
    Height = 25
    Caption = 'Sair'
    TabOrder = 3
    OnClick = brtsairClick
  end
  object brtcadastrar: TButton
    Left = 8
    Top = 72
    Width = 185
    Height = 25
    Caption = 'Cadastrar novo usu'#225'rio'
    TabOrder = 4
    Visible = False
    OnClick = brtcadastrarClick
  end
  object brtcancela: TButton
    Left = 200
    Top = 72
    Width = 81
    Height = 25
    Caption = 'Cancelar'
    TabOrder = 5
    Visible = False
    OnClick = brtcancelaClick
  end
end
