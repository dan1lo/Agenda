object frmexcluir: Tfrmexcluir
  Left = 195
  Top = 121
  Width = 704
  Height = 166
  Caption = 'Excluir contato'
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 19
  object lblnome: TLabel
    Left = 16
    Top = 16
    Width = 48
    Height = 19
    Caption = 'Nome:'
  end
  object lblnumero: TLabel
    Left = 0
    Top = 48
    Width = 67
    Height = 19
    Caption = 'Telefone:'
    Visible = False
  end
  object edtnome: TEdit
    Left = 72
    Top = 16
    Width = 185
    Height = 27
    Hint = 'Nome do contato'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
    Text = 'Digite aqui'
    OnChange = edtnomeChange
  end
  object edtnumero: TEdit
    Left = 72
    Top = 48
    Width = 121
    Height = 27
    Hint = 'Telefone do contato a ser exclu'#237'do'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    Text = 'Digite aqui'
    Visible = False
  end
  object brtexcluir: TButton
    Left = 16
    Top = 88
    Width = 241
    Height = 25
    Hint = 'Exclui o contato'
    Caption = 'Excluir contato'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    Visible = False
    OnClick = brtexcluirClick
  end
  object DBGrid1: TDBGrid
    Left = 280
    Top = 8
    Width = 409
    Height = 120
    Hint = 'Contatos pesquisados'
    DataSource = DataSource1
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
    TitleFont.Charset = ANSI_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Query1: TQuery
    DatabaseName = 'cesar'
    Left = 240
    Top = 48
  end
  object DataSource1: TDataSource
    DataSet = Query1
    Left = 208
    Top = 48
  end
end
