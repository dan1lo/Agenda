object frmatual: Tfrmatual
  Left = 192
  Top = 114
  Width = 1080
  Height = 340
  Caption = 'Atualizar contato'
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -15
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 18
  object Label1: TLabel
    Left = 24
    Top = 16
    Width = 61
    Height = 18
    Caption = 'Pesquisa:'
  end
  object Label2: TLabel
    Left = 384
    Top = 240
    Width = 5
    Height = 18
  end
  object DBGrid1: TDBGrid
    Left = 344
    Top = 8
    Width = 721
    Height = 185
    Hint = 'Usu'#225'rios encontrados na pesquisa r'#225'pida'
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = ANSI_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -15
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object edtnome: TEdit
    Left = 96
    Top = 8
    Width = 217
    Height = 26
    Hint = 'Fa'#231'a uma pesquisa r'#225'pida aqui'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    OnChange = edtnomeChange
  end
  object rgatual: TRadioGroup
    Left = 8
    Top = 56
    Width = 137
    Height = 121
    Hint = 'Tipo de dado a ser atualizado do contato'
    Caption = 'Tipo de atualiza'#231#227'o'
    Items.Strings = (
      'Nome'
      'Endere'#231'o'
      'Telefone'
      'E-Mail')
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    OnClick = rgatualClick
  end
  object edtdado: TEdit
    Left = 160
    Top = 88
    Width = 153
    Height = 26
    Hint = 'Insira a informa'#231#227'o a ser utilizada'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
    Visible = False
  end
  object txstdado: TStaticText
    Left = 160
    Top = 64
    Width = 150
    Height = 22
    Caption = 'Dado a ser atualizado:'
    TabOrder = 4
    Visible = False
  end
  object brtatualizar: TButton
    Left = 160
    Top = 120
    Width = 153
    Height = 25
    Hint = 'click aqui para atualizar o contato'
    Caption = 'Atualizar'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 5
    Visible = False
    OnClick = brtatualizarClick
  end
  object brtsair: TButton
    Left = 160
    Top = 152
    Width = 153
    Height = 25
    Hint = 'Click aqui para sair do aplicativo'
    Caption = 'Sair'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 6
    OnClick = brtsairClick
  end
  object DataSource1: TDataSource
    DataSet = Query1
    Left = 232
    Top = 40
  end
  object Query1: TQuery
    DatabaseName = 'cesar'
    Left = 280
    Top = 40
  end
end
