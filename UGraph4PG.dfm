object frmGraph4PG: TfrmGraph4PG
  Left = 342
  Top = 243
  BorderStyle = bsDialog
  Caption = 'Graph : Dry tuber yield (Potential Growth)'
  ClientHeight = 460
  ClientWidth = 761
  Color = 140
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object tch1: TChart
    Left = 8
    Top = 41
    Width = 745
    Height = 408
    BottomWall.Color = 8454143
    Legend.Bevel = bvRaised
    Legend.CheckBoxes = True
    Legend.Color = 4473992
    Legend.CustomPosition = True
    Legend.Font.Style = [fsBold]
    Legend.FontSeriesColor = True
    Legend.Frame.Width = 2
    Legend.Left = 525
    Legend.ResizeChart = False
    Legend.Top = 41
    MarginLeft = 1
    MarginRight = 31
    Title.Brush.Color = clWhite
    Title.Color = 23737
    Title.Font.Color = clYellow
    Title.Font.Height = -16
    Title.Font.Style = [fsBold]
    Title.Font.Shadow.Color = clBlack
    Title.Text.Strings = (
      'DRY TUBER YIELD (Potential Growth)')
    Title.Transparent = False
    BottomAxis.Axis.Color = clWhite
    BottomAxis.LabelsFont.Color = clWhite
    BottomAxis.LabelsFont.Style = [fsBold]
    BottomAxis.LabelStyle = talValue
    BottomAxis.Title.Caption = 'days'
    BottomAxis.Title.Font.Color = clLime
    BottomAxis.Title.Font.Height = -13
    BottomAxis.Title.Font.Style = [fsBold]
    LeftAxis.Automatic = False
    LeftAxis.AutomaticMaximum = False
    LeftAxis.Axis.Color = clWhite
    LeftAxis.LabelsFont.Color = clWhite
    LeftAxis.LabelsFont.Style = [fsBold]
    LeftAxis.Maximum = 435
    LeftAxis.Title.Caption = 't / ha'
    LeftAxis.Title.Font.Color = clLime
    LeftAxis.Title.Font.Height = -13
    LeftAxis.Title.Font.Style = [fsBold]
    View3D = False
    Zoom.Animated = True
    Color = 3421287
    TabOrder = 2
    PrintMargins = (
      15
      24
      15
      24)
    object Label1: TLabel
      Left = 554
      Top = 200
      Width = 49
      Height = 13
      Caption = 'Last day'
      Color = 3421287
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentColor = False
      ParentFont = False
      Visible = False
    end
    object Label2: TLabel
      Left = 554
      Top = 226
      Width = 76
      Height = 13
      Caption = 'Total dry matter '
      Color = 3421287
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
      Visible = False
    end
    object Label4: TLabel
      Left = 689
      Top = 226
      Width = 26
      Height = 13
      Caption = 't / ha'
      Color = 3421287
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
      Visible = False
    end
    object Label5: TLabel
      Left = 689
      Top = 252
      Width = 26
      Height = 13
      Caption = 't / ha'
      Color = 3421287
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
      Visible = False
    end
    object Label3: TLabel
      Left = 554
      Top = 252
      Width = 80
      Height = 13
      Caption = 'Tuber dry matter '
      Color = 3421287
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
      Visible = False
    end
    object Label6: TLabel
      Left = 554
      Top = 276
      Width = 89
      Height = 13
      Caption = 'Tuber fresh matter '
      Color = 3421287
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
      Visible = False
    end
    object Label7: TLabel
      Left = 689
      Top = 276
      Width = 26
      Height = 13
      Caption = 't / ha'
      Color = 3421287
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
      Visible = False
    end
    object Edit4: TEdit
      Left = 644
      Top = 276
      Width = 41
      Height = 21
      TabStop = False
      ReadOnly = True
      TabOrder = 4
      Visible = False
    end
    object Edit3: TEdit
      Left = 644
      Top = 250
      Width = 41
      Height = 21
      TabStop = False
      ReadOnly = True
      TabOrder = 3
      Visible = False
    end
    object Edit2: TEdit
      Left = 644
      Top = 224
      Width = 41
      Height = 21
      TabStop = False
      ReadOnly = True
      TabOrder = 2
      Visible = False
    end
    object Edit1: TEdit
      Left = 644
      Top = 197
      Width = 41
      Height = 21
      TabStop = False
      ReadOnly = True
      TabOrder = 1
      Visible = False
    end
    object GroupBox1: TGroupBox
      Left = 528
      Top = 127
      Width = 182
      Height = 82
      Color = 3421287
      ParentColor = False
      TabOrder = 0
      object RichEdit7: TRichEdit
        Left = 12
        Top = 5
        Width = 89
        Height = 22
        TabStop = False
        Alignment = taCenter
        BiDiMode = bdLeftToRight
        BorderStyle = bsNone
        Color = clBlack
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clMaroon
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentBiDiMode = False
        ParentFont = False
        ReadOnly = True
        TabOrder = 1
      end
      object RichEdit6: TRichEdit
        Left = 8
        Top = 0
        Width = 89
        Height = 22
        TabStop = False
        Alignment = taCenter
        BiDiMode = bdLeftToRight
        Color = 12713983
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clMaroon
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        Lines.Strings = (
          'Show values')
        ParentBiDiMode = False
        ParentFont = False
        ReadOnly = True
        TabOrder = 0
      end
      object chbCC: TCheckBox
        Left = 16
        Top = 40
        Width = 161
        Height = 17
        Caption = 'Dry tuber yield potential'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWhite
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
        OnClick = chbCCClick
      end
    end
    object Series1: TLineSeries
      Marks.Callout.Brush.Color = clBlack
      Marks.DrawEvery = 20
      Marks.Style = smsValue
      Marks.Visible = False
      SeriesColor = clYellow
      Title = 'Dry tuber yield potential'
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      Pointer.Visible = False
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
      Data = {
        0019000000000000000000364000000000000051400000000000C05040000000
        00004066400000000000004D4000000000000052400000000000804940000000
        00000042400000000000804F4000000000000051400000000000805740000000
        0000804940000000000040574000000000004067400000000000507340000000
        0000E074400000000000D076400000000000D074400000000000307B40000000
        0000607840000000000020714000000000007077400000000000607440000000
        00007075400000000000107740}
    end
  end
  object GroupBox2: TGroupBox
    Left = 664
    Top = 360
    Width = 78
    Height = 75
    Caption = 'GroupBox2'
    Color = 3421287
    ParentColor = False
    TabOrder = 0
    object SpeedButton4: TSpeedButton
      Left = 22
      Top = 30
      Width = 35
      Height = 35
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000120B0000120B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00330000000000
        03333377777777777F333301BBBBBBBB033333773F3333337F3333011BBBBBBB
        0333337F73F333337F33330111BBBBBB0333337F373F33337F333301110BBBBB
        0333337F337F33337F333301110BBBBB0333337F337F33337F333301110BBBBB
        0333337F337F33337F333301110BBBBB0333337F337F33337F333301110BBBBB
        0333337F337F33337F333301110BBBBB0333337F337FF3337F33330111B0BBBB
        0333337F337733337F333301110BBBBB0333337F337F33337F333301110BBBBB
        0333337F3F7F33337F333301E10BBBBB0333337F7F7F33337F333301EE0BBBBB
        0333337F777FFFFF7F3333000000000003333377777777777333}
      NumGlyphs = 2
      ParentFont = False
      OnClick = SpeedButton4Click
    end
    object RichEdit2: TRichEdit
      Left = 12
      Top = 5
      Width = 57
      Height = 22
      TabStop = False
      Alignment = taCenter
      BiDiMode = bdLeftToRight
      BorderStyle = bsNone
      Color = clBlack
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clMaroon
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentBiDiMode = False
      ParentFont = False
      ReadOnly = True
      TabOrder = 1
    end
    object RichEdit1: TRichEdit
      Left = 8
      Top = 0
      Width = 57
      Height = 22
      TabStop = False
      Alignment = taCenter
      BiDiMode = bdLeftToRight
      Color = 12713983
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clMaroon
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      Lines.Strings = (
        'Close')
      ParentBiDiMode = False
      ParentFont = False
      ReadOnly = True
      TabOrder = 0
    end
  end
  object tc1: TTeeCommander
    Left = 8
    Top = 8
    Width = 745
    Height = 33
    Panel = tch1
    Color = 4868757
    ParentShowHint = False
    TabOrder = 1
  end
  object GroupBox3: TGroupBox
    Left = 576
    Top = 360
    Width = 78
    Height = 75
    Caption = 'GroupBox2'
    Color = 3421287
    ParentColor = False
    TabOrder = 3
    object sbSave: TSpeedButton
      Left = 22
      Top = 30
      Width = 35
      Height = 35
      Hint = 'Save conditions'
      Glyph.Data = {
        76020000424D7602000000000000760000002800000020000000200000000100
        0400000000000002000000000000000000001000000000000000000000000000
        80000080000000808000800000008000800080800000C0C0C000808080000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00777777777800
        0087777777777777777777777777870000087777777777777777777777788000
        0000877777777777777777777788880000000877777777777777777778888880
        0000008777777777777777778888888800000008777777777777777880888888
        8000000087777777777777880008888800007000087000000007788800008880
        0007770000873333333087088000880000777770000877B7B730000088088000
        077777FF00008B7B7B3000000888000077777FFFF0F007B7B730000000800007
        7777FFFFFF000B7B7B30000000000077777FFFFFFFF007B7B730700000000777
        77FFFFFFFF707B7B7B307700000077777FFFFFFFF787B7B7B730778000077777
        FFFFFFFF787B7B7B7B30778F0000777FFFFFFFF787B7B7B7B730778F700007FF
        FFFFFF787B7B7B7B7B30778FB70000FFFFFFF787B7B7B7B7B730778F7B70000F
        FFFF787B7B7B7B7B7B30778FB7B70000FFF787B7B7B7B7B7B730778F7B7B7008
        0F787B7B7B7B7B7B7B30778FB7B7B7000007B7B7B7B7B7B7B730778F7B7B7B70
        007B7B7B7B7B7B7B7B30778FB7B7B7B7B7B7B7B7B7B7B7B7B730778FFFFFFFFF
        FFFFFFFFFFFFFFFFFF00778777777777777777888888888888077778FB7B7B7B
        7B7B787777777777777777778FB7B7B7B7B78777777777777777777778FFFFFF
        FFF8777777777777777777777788888888877777777777777777}
      ParentShowHint = False
      ShowHint = True
      OnClick = sbSaveClick
    end
    object RichEdit3: TRichEdit
      Left = 12
      Top = 5
      Width = 57
      Height = 22
      TabStop = False
      Alignment = taCenter
      BiDiMode = bdLeftToRight
      BorderStyle = bsNone
      Color = clBlack
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clMaroon
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentBiDiMode = False
      ParentFont = False
      ReadOnly = True
      TabOrder = 1
    end
    object RichEdit4: TRichEdit
      Left = 8
      Top = 0
      Width = 57
      Height = 22
      TabStop = False
      Alignment = taCenter
      BiDiMode = bdLeftToRight
      Color = 12713983
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clMaroon
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      Lines.Strings = (
        'Save')
      ParentBiDiMode = False
      ParentFont = False
      ReadOnly = True
      TabOrder = 0
    end
  end
  object SeriesTextSource1: TSeriesTextSource
    Fields = <>
    FieldSeparator = ','
  end
  object sdSave: TSaveDialog
    DefaultExt = 'txt'
    Filter = 
      'Formatted text (Space delimited) (*.txt)|*.txt|CSV (Comma delimi' +
      'ted) (*.csv)|*.csv'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofNoChangeDir, ofExtensionDifferent, ofEnableSizing]
    Title = 'Save information'
    OnSelectionChange = sdSaveSelectionChange
    Left = 696
    Top = 8
  end
end
