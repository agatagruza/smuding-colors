object FSmugi: TFSmugi
  Left = 346
  Top = 69
  Width = 123
  Height = 90
  AutoSize = True
  Caption = 'Smugi'
  Color = clRed
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object TimerZegar: TTimer
    Interval = 100
    OnTimer = TimerZegarTimer
    Left = 43
    Top = 14
  end
end
