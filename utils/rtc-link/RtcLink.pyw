#!/usr/bin/env python2
# -*- coding: utf-8 -*-
#
#  @file RtcLink.pyw
#  @brief rtc-link application launch script for Windows
#  @date $Date: 2005-05-12 09:06:19 $
#  @author Noriaki Ando <n-ando@aist.go.jp>
# 
#  Copyright (C) 2003-2005
#      Task-intelligence Research Group,
#      Intelligent Systems Research Institute,
#      National Institute of
#          Advanced Industrial Science and Technology (AIST), Japan
#      All rights reserved.
# 
#  $Id: RtcLink.pyw 775 2008-07-28 16:14:45Z n-ando $
# 

from wxPython.wx import *
import RtmFrame
import rtimages
import wx


class MyApp(wx.App):
	def OnInit(self):
		wx.InitAllImageHandlers()
		frame = RtmFrame.RtdFrame(NULL, -1, "RTCLink")
		frame.Show(true)
		self.SetTopWindow(frame)
		return true


app = MyApp(0)
app.MainLoop()


