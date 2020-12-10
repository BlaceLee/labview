<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="17008000">
	<Property Name="SMProvider.SMVersion" Type="Int">201310</Property>
	<Property Name="varPersistentID:{03A66755-7BA7-4353-9187-02AF633CAF59}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑一序号</Property>
	<Property Name="varPersistentID:{1EEA119A-2DE9-4542-97F4-E50EF05E2C37}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑二压力表打印运行状态</Property>
	<Property Name="varPersistentID:{22CE5C99-A3B3-4A26-82C8-4E9EC1CABFE4}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑一穿管检测状态</Property>
	<Property Name="varPersistentID:{2D340585-D54B-42A5-9DC5-9AC146905633}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑一工单号</Property>
	<Property Name="varPersistentID:{2FC64899-F0B2-441C-BEC2-934F15DFC04E}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑一表面检测图像处理状态</Property>
	<Property Name="varPersistentID:{36408809-A93D-447D-A3DE-B28701A6E66C}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑二压力表检测运行状态</Property>
	<Property Name="varPersistentID:{385D7037-0D19-409A-A8C2-8239D8BF6489}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑二字符检测运行状态</Property>
	<Property Name="varPersistentID:{5BA381FE-A23E-46D7-B555-22640F67FA0E}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑一穿管压力获取状态</Property>
	<Property Name="varPersistentID:{5D852BA4-6D76-4DAA-8A3C-68374703AF78}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑一新返工1</Property>
	<Property Name="varPersistentID:{686918E9-6036-487B-913E-3EE0BE7137AB}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑一条码枪扫码状态</Property>
	<Property Name="varPersistentID:{9058465C-EEB3-4998-945B-39E6568EB328}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑一CCD读字符状态</Property>
	<Property Name="varPersistentID:{AA92498E-D1A5-45E2-913A-9B3C88DAB19B}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑一表面检测图像获取状态</Property>
	<Property Name="varPersistentID:{AD76B615-3306-4D97-9E9E-41739947D6F6}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑一模板类型</Property>
	<Property Name="varPersistentID:{AF3C2FD8-925A-460B-9EEA-92233F37F75A}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑一运行状态字符串</Property>
	<Property Name="varPersistentID:{DB689FFB-1D0C-47D1-9573-97B203697AE7}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑二标签检测运行状态</Property>
	<Property Name="varPersistentID:{E5889018-8278-4325-A854-9343C8B2A1B8}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑二标签打印运行状态</Property>
	<Property Name="varPersistentID:{E973277F-888A-42BD-B84C-6685FB0860CA}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑一检测信息</Property>
	<Property Name="varPersistentID:{F0268E1C-68C8-43CB-9116-D3BDABAB17D8}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑一工单数量</Property>
	<Property Name="varPersistentID:{F45106C6-6266-48AB-88D9-5862388A3D24}" Type="Ref">/我的电脑/网络共享变量库.lvlib/电脑二封口检测运行状态</Property>
	<Item Name="我的电脑" Type="My Computer">
		<Property Name="IOScan.Faults" Type="Str"></Property>
		<Property Name="IOScan.NetVarPeriod" Type="UInt">100</Property>
		<Property Name="IOScan.NetWatchdogEnabled" Type="Bool">false</Property>
		<Property Name="IOScan.Period" Type="UInt">10000</Property>
		<Property Name="IOScan.PowerupMode" Type="UInt">0</Property>
		<Property Name="IOScan.Priority" Type="UInt">9</Property>
		<Property Name="IOScan.ReportModeConflict" Type="Bool">true</Property>
		<Property Name="IOScan.StartEngineOnDeploy" Type="Bool">false</Property>
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">我的电脑/VI服务器</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">我的电脑/VI服务器</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="DB5000.X写.vi" Type="VI" URL="../SubVIs/西门子通信/LABVIEW与西门子NET《网口》/SIEMENS VI/DB5000.X写.vi"/>
		<Item Name="LabVIEW Function Structure.vi" Type="VI" URL="../LabVIEW Function Structure.vi"/>
		<Item Name="mess返回值解析.vi" Type="VI" URL="../SubVIs/MESS/mess返回值解析.vi"/>
		<Item Name="产品信息解析.vi" Type="VI" URL="../../../Inspect System -2/Source Code/SubVIs/CCD/产品信息解析.vi"/>
		<Item Name="衬丝头检测结果数据库判定.vi" Type="VI" URL="../SubVIs/衬丝头检测结果数据库判定.vi"/>
		<Item Name="网络共享变量库.lvlib" Type="Library" URL="../网络共享变量库.lvlib"/>
		<Item Name="依赖关系" Type="Dependencies">
			<Item Name="user.lib" Type="Folder">
				<Item Name="ADO Connection Close.vi" Type="VI" URL="/&lt;userlib&gt;/LabSQL/LabSQL ADO functions/Connection/ADO Connection Close.vi"/>
				<Item Name="ADO Connection Create.vi" Type="VI" URL="/&lt;userlib&gt;/LabSQL/LabSQL ADO functions/Connection/ADO Connection Create.vi"/>
				<Item Name="ADO Connection Execute.vi" Type="VI" URL="/&lt;userlib&gt;/LabSQL/LabSQL ADO functions/Connection/ADO Connection Execute.vi"/>
				<Item Name="ADO Connection Open.vi" Type="VI" URL="/&lt;userlib&gt;/LabSQL/LabSQL ADO functions/Connection/ADO Connection Open.vi"/>
				<Item Name="ADO Recordset Destroy.vi" Type="VI" URL="/&lt;userlib&gt;/LabSQL/LabSQL ADO functions/Recordset/ADO Recordset Destroy.vi"/>
				<Item Name="ADO Recordset GetString.vi" Type="VI" URL="/&lt;userlib&gt;/LabSQL/LabSQL ADO functions/Recordset/ADO Recordset GetString.vi"/>
				<Item Name="PLT Create Channel (DI-Digital Input).vi" Type="VI" URL="/&lt;userlib&gt;/DAQPilot/create/channels.llb/PLT Create Channel (DI-Digital Input).vi"/>
				<Item Name="PLT Create Channel (DO-Digital Output).vi" Type="VI" URL="/&lt;userlib&gt;/DAQPilot/create/channels.llb/PLT Create Channel (DO-Digital Output).vi"/>
				<Item Name="PLT Create Virtual Channel.vi" Type="VI" URL="/&lt;userlib&gt;/DAQPilot/create/channels.llb/PLT Create Virtual Channel.vi"/>
				<Item Name="PLT Read (Digital 1D Bool 1Chan 1Samp).vi" Type="VI" URL="/&lt;userlib&gt;/DAQPilot/read.llb/PLT Read (Digital 1D Bool 1Chan 1Samp).vi"/>
				<Item Name="PLT Read.vi" Type="VI" URL="/&lt;userlib&gt;/DAQPilot/read.llb/PLT Read.vi"/>
				<Item Name="PLT Start Task.vi" Type="VI" URL="/&lt;userlib&gt;/DAQPilot/configure/task.llb/PLT Start Task.vi"/>
				<Item Name="PLT Write (Digital 1D Bool 1Chan 1Samp).vi" Type="VI" URL="/&lt;userlib&gt;/DAQPilot/write.llb/PLT Write (Digital 1D Bool 1Chan 1Samp).vi"/>
				<Item Name="PLT Write.vi" Type="VI" URL="/&lt;userlib&gt;/DAQPilot/write.llb/PLT Write.vi"/>
				<Item Name="SQL Execute.vi" Type="VI" URL="/&lt;userlib&gt;/LabSQL/LabSQL ADO functions/SQL Execute.vi"/>
				<Item Name="SQL Fetch Data (GetString).vi" Type="VI" URL="/&lt;userlib&gt;/LabSQL/LabSQL ADO functions/SQL Fetch Data (GetString).vi"/>
			</Item>
			<Item Name="vi.lib" Type="Folder">
				<Item Name="8.6CompatibleGlobalVar.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/config.llb/8.6CompatibleGlobalVar.vi"/>
				<Item Name="Acquire Semaphore.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Acquire Semaphore.vi"/>
				<Item Name="AddNamedSemaphorePrefix.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/AddNamedSemaphorePrefix.vi"/>
				<Item Name="BuildHelpPath.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/BuildHelpPath.vi"/>
				<Item Name="Cell Filter Mode.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Instrument.llb/Cell Filter Mode.ctl"/>
				<Item Name="Cell Sample Size.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Instrument.llb/Cell Sample Size.ctl"/>
				<Item Name="Check if File or Folder Exists.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/libraryn.llb/Check if File or Folder Exists.vi"/>
				<Item Name="Check Special Tags.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Check Special Tags.vi"/>
				<Item Name="Clear Errors.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Clear Errors.vi"/>
				<Item Name="Close File+.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Close File+.vi"/>
				<Item Name="Close Registry Key.vi" Type="VI" URL="/&lt;vilib&gt;/registry/registry.llb/Close Registry Key.vi"/>
				<Item Name="Color to RGB.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/colorconv.llb/Color to RGB.vi"/>
				<Item Name="compatCalcOffset.vi" Type="VI" URL="/&lt;vilib&gt;/_oldvers/_oldvers.llb/compatCalcOffset.vi"/>
				<Item Name="compatFileDialog.vi" Type="VI" URL="/&lt;vilib&gt;/_oldvers/_oldvers.llb/compatFileDialog.vi"/>
				<Item Name="compatOpenFileOperation.vi" Type="VI" URL="/&lt;vilib&gt;/_oldvers/_oldvers.llb/compatOpenFileOperation.vi"/>
				<Item Name="compatReadText.vi" Type="VI" URL="/&lt;vilib&gt;/_oldvers/_oldvers.llb/compatReadText.vi"/>
				<Item Name="Convert property node font to graphics font.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Convert property node font to graphics font.vi"/>
				<Item Name="Create Registry Key.vi" Type="VI" URL="/&lt;vilib&gt;/registry/registry.llb/Create Registry Key.vi"/>
				<Item Name="Data Matrix Polarity.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Instrument.llb/Data Matrix Polarity.ctl"/>
				<Item Name="Demodulation Mode.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Instrument.llb/Demodulation Mode.ctl"/>
				<Item Name="Details Display Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Details Display Dialog.vi"/>
				<Item Name="DialogType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogType.ctl"/>
				<Item Name="DialogTypeEnum.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogTypeEnum.ctl"/>
				<Item Name="Dynamic To Waveform Array.vi" Type="VI" URL="/&lt;vilib&gt;/express/express shared/transition.llb/Dynamic To Waveform Array.vi"/>
				<Item Name="Edge New.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Measure.llb/Edge New.ctl"/>
				<Item Name="Edge Options.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Measure.llb/Edge Options.ctl"/>
				<Item Name="Edge Polarity Type.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Clamp.llb/Edge Polarity Type.ctl"/>
				<Item Name="Edge Polarity.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Measure.llb/Edge Polarity.ctl"/>
				<Item Name="Error Cluster From Error Code.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Cluster From Error Code.vi"/>
				<Item Name="Error Code Database.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Code Database.vi"/>
				<Item Name="ErrWarn.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/ErrWarn.ctl"/>
				<Item Name="eventvkey.ctl" Type="VI" URL="/&lt;vilib&gt;/event_ctls.llb/eventvkey.ctl"/>
				<Item Name="ex_CorrectErrorChain.vi" Type="VI" URL="/&lt;vilib&gt;/express/express shared/ex_CorrectErrorChain.vi"/>
				<Item Name="Find First Error.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Find First Error.vi"/>
				<Item Name="Find Tag.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Find Tag.vi"/>
				<Item Name="FindCloseTagByName.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/xml.llb/FindCloseTagByName.vi"/>
				<Item Name="FindElement.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/xml.llb/FindElement.vi"/>
				<Item Name="FindElementStartByName.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/xml.llb/FindElementStartByName.vi"/>
				<Item Name="FindEmptyElement.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/xml.llb/FindEmptyElement.vi"/>
				<Item Name="FindFirstTag.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/xml.llb/FindFirstTag.vi"/>
				<Item Name="FindMatchingCloseTag.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/xml.llb/FindMatchingCloseTag.vi"/>
				<Item Name="Format Message String.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Format Message String.vi"/>
				<Item Name="General Error Handler Core CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler Core CORE.vi"/>
				<Item Name="General Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler.vi"/>
				<Item Name="Get String Text Bounds.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Get String Text Bounds.vi"/>
				<Item Name="Get Text Rect.vi" Type="VI" URL="/&lt;vilib&gt;/picture/picture.llb/Get Text Rect.vi"/>
				<Item Name="GetHelpDir.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetHelpDir.vi"/>
				<Item Name="GetNamedSemaphorePrefix.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/GetNamedSemaphorePrefix.vi"/>
				<Item Name="GetRTHostConnectedProp.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetRTHostConnectedProp.vi"/>
				<Item Name="Image Type" Type="VI" URL="/&lt;vilib&gt;/vision/Image Controls.llb/Image Type"/>
				<Item Name="Image Unit" Type="VI" URL="/&lt;vilib&gt;/vision/Image Controls.llb/Image Unit"/>
				<Item Name="IMAQ Clear Overlay" Type="VI" URL="/&lt;vilib&gt;/vision/Overlay.llb/IMAQ Clear Overlay"/>
				<Item Name="IMAQ Convert From Matches Internal" Type="VI" URL="/&lt;vilib&gt;/vision/Pattern Matching.llb/IMAQ Convert From Matches Internal"/>
				<Item Name="IMAQ Convert Line to ROI" Type="VI" URL="/&lt;vilib&gt;/vision/ROI Conversion.llb/IMAQ Convert Line to ROI"/>
				<Item Name="IMAQ Convert Rectangle to ROI" Type="VI" URL="/&lt;vilib&gt;/vision/ROI Conversion.llb/IMAQ Convert Rectangle to ROI"/>
				<Item Name="IMAQ Convert Rectangle to ROI (Polygon)" Type="VI" URL="/&lt;vilib&gt;/vision/ROI Conversion.llb/IMAQ Convert Rectangle to ROI (Polygon)"/>
				<Item Name="IMAQ Convert ROI to Line" Type="VI" URL="/&lt;vilib&gt;/vision/ROI Conversion.llb/IMAQ Convert ROI to Line"/>
				<Item Name="IMAQ Convert ROI to Rectangle" Type="VI" URL="/&lt;vilib&gt;/vision/ROI Conversion.llb/IMAQ Convert ROI to Rectangle"/>
				<Item Name="IMAQ Convert To Curve Parameters Internal" Type="VI" URL="/&lt;vilib&gt;/vision/Pattern Matching.llb/IMAQ Convert To Curve Parameters Internal"/>
				<Item Name="IMAQ Coordinate System" Type="VI" URL="/&lt;vilib&gt;/vision/Image Controls.llb/IMAQ Coordinate System"/>
				<Item Name="IMAQ Copy" Type="VI" URL="/&lt;vilib&gt;/vision/Management.llb/IMAQ Copy"/>
				<Item Name="IMAQ Create" Type="VI" URL="/&lt;vilib&gt;/vision/Basics.llb/IMAQ Create"/>
				<Item Name="IMAQ Curve Parameters Internal.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Pattern Matching.llb/IMAQ Curve Parameters Internal.ctl"/>
				<Item Name="IMAQ Curve Parameters.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Pattern Matching.llb/IMAQ Curve Parameters.ctl"/>
				<Item Name="Imaq Dispose" Type="VI" URL="/&lt;vilib&gt;/vision/Basics.llb/Imaq Dispose"/>
				<Item Name="IMAQ GetFileInfo" Type="VI" URL="/&lt;vilib&gt;/vision/Files.llb/IMAQ GetFileInfo"/>
				<Item Name="Imaq GetImageInfo" Type="VI" URL="/&lt;vilib&gt;/vision/Basics.llb/Imaq GetImageInfo"/>
				<Item Name="IMAQ GetImageSize" Type="VI" URL="/&lt;vilib&gt;/vision/Basics.llb/IMAQ GetImageSize"/>
				<Item Name="IMAQ GM Match Report Internal.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Pattern Matching.llb/IMAQ GM Match Report Internal.ctl"/>
				<Item Name="IMAQ GM Match Report.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Pattern Matching.llb/IMAQ GM Match Report.ctl"/>
				<Item Name="IMAQ Image.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Image Controls.llb/IMAQ Image.ctl"/>
				<Item Name="IMAQ Line" Type="VI" URL="/&lt;vilib&gt;/vision/Image Controls.llb/IMAQ Line"/>
				<Item Name="IMAQ Match Range Setting.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Pattern Matching.llb/IMAQ Match Range Setting.ctl"/>
				<Item Name="IMAQ Merge Overlay" Type="VI" URL="/&lt;vilib&gt;/vision/Overlay.llb/IMAQ Merge Overlay"/>
				<Item Name="IMAQ Overlay Line" Type="VI" URL="/&lt;vilib&gt;/vision/Overlay.llb/IMAQ Overlay Line"/>
				<Item Name="IMAQ Overlay Multiple Lines" Type="VI" URL="/&lt;vilib&gt;/vision/Overlay.llb/IMAQ Overlay Multiple Lines"/>
				<Item Name="IMAQ Overlay Multiple Lines 2" Type="VI" URL="/&lt;vilib&gt;/vision/Overlay.llb/IMAQ Overlay Multiple Lines 2"/>
				<Item Name="IMAQ Overlay Oval" Type="VI" URL="/&lt;vilib&gt;/vision/Overlay.llb/IMAQ Overlay Oval"/>
				<Item Name="IMAQ Overlay Points" Type="VI" URL="/&lt;vilib&gt;/vision/Overlay.llb/IMAQ Overlay Points"/>
				<Item Name="IMAQ Overlay Rectangle" Type="VI" URL="/&lt;vilib&gt;/vision/Overlay.llb/IMAQ Overlay Rectangle"/>
				<Item Name="IMAQ Overlay ROI" Type="VI" URL="/&lt;vilib&gt;/vision/Overlay.llb/IMAQ Overlay ROI"/>
				<Item Name="IMAQ Overlay Text" Type="VI" URL="/&lt;vilib&gt;/vision/Overlay.llb/IMAQ Overlay Text"/>
				<Item Name="IMAQ Point" Type="VI" URL="/&lt;vilib&gt;/vision/Image Controls.llb/IMAQ Point"/>
				<Item Name="IMAQ Rake" Type="VI" URL="/&lt;vilib&gt;/vision/Compatibility.llb/IMAQ Rake"/>
				<Item Name="IMAQ Read Image And Vision Info" Type="VI" URL="/&lt;vilib&gt;/vision/Files1.llb/IMAQ Read Image And Vision Info"/>
				<Item Name="IMAQ Read Image And Vision Info 2" Type="VI" URL="/&lt;vilib&gt;/vision/Files1.llb/IMAQ Read Image And Vision Info 2"/>
				<Item Name="IMAQ ReadFile" Type="VI" URL="/&lt;vilib&gt;/vision/Files.llb/IMAQ ReadFile"/>
				<Item Name="IMAQ ReadFile 2" Type="VI" URL="/&lt;vilib&gt;/vision/Files.llb/IMAQ ReadFile 2"/>
				<Item Name="IMAQ Rectangle" Type="VI" URL="/&lt;vilib&gt;/vision/Image Controls.llb/IMAQ Rectangle"/>
				<Item Name="IMAQ SetImageSize" Type="VI" URL="/&lt;vilib&gt;/vision/Basics.llb/IMAQ SetImageSize"/>
				<Item Name="IMAQ Write BMP File 2" Type="VI" URL="/&lt;vilib&gt;/vision/Files.llb/IMAQ Write BMP File 2"/>
				<Item Name="IMAQ Write Custom Data" Type="VI" URL="/&lt;vilib&gt;/vision/Basics.llb/IMAQ Write Custom Data"/>
				<Item Name="IMAQ Write File 2" Type="VI" URL="/&lt;vilib&gt;/vision/Files.llb/IMAQ Write File 2"/>
				<Item Name="IMAQ Write Image And Vision Info File 2" Type="VI" URL="/&lt;vilib&gt;/vision/Files.llb/IMAQ Write Image And Vision Info File 2"/>
				<Item Name="IMAQ Write JPEG File 2" Type="VI" URL="/&lt;vilib&gt;/vision/Files.llb/IMAQ Write JPEG File 2"/>
				<Item Name="IMAQ Write JPEG2000 File 2" Type="VI" URL="/&lt;vilib&gt;/vision/Files.llb/IMAQ Write JPEG2000 File 2"/>
				<Item Name="IMAQ Write PNG File 2" Type="VI" URL="/&lt;vilib&gt;/vision/Files.llb/IMAQ Write PNG File 2"/>
				<Item Name="IMAQ Write TIFF File 2" Type="VI" URL="/&lt;vilib&gt;/vision/Files.llb/IMAQ Write TIFF File 2"/>
				<Item Name="IMAQdx.ctl" Type="VI" URL="/&lt;vilib&gt;/userdefined/High Color/IMAQdx.ctl"/>
				<Item Name="IVA Append VI Name to GUID.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Append VI Name to GUID.vi"/>
				<Item Name="IVA Check Coordinate System Valid 2.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Check Coordinate System Valid 2.vi"/>
				<Item Name="IVA Clear Coordsys Errors.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Clear Coordsys Errors.vi"/>
				<Item Name="IVA Coordinate System Manager 2.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Coordinate System Manager 2.vi"/>
				<Item Name="IVA EdgeDetect - Create Monochrome Image if Needed.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA EdgeDetect - Create Monochrome Image if Needed.vi"/>
				<Item Name="IVA Gauge Algorithm Max.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Gauge Algorithm Max.vi"/>
				<Item Name="IVA Gauge Find Min Max Position.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Gauge Find Min Max Position.vi"/>
				<Item Name="IVA Get Alternate Path.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Get Alternate Path.vi"/>
				<Item Name="IVA Mask from ROI.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Mask from ROI.vi"/>
				<Item Name="IVA Match Geometric Pattern Algorithm 3.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Match Geometric Pattern Algorithm 3.vi"/>
				<Item Name="IVA Result Manager Function.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Result Manager Function.ctl"/>
				<Item Name="IVA Result Manager.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Result Manager.vi"/>
				<Item Name="IVA Store Advanced Edges Results.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Store Advanced Edges Results.vi"/>
				<Item Name="IVA Store Edges Results.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Store Edges Results.vi"/>
				<Item Name="IVA Store Feature Detection Results.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Store Feature Detection Results.vi"/>
				<Item Name="IVA Store Gauge Results.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Store Gauge Results.vi"/>
				<Item Name="IVA Store Gauge2 Results.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Store Gauge2 Results.vi"/>
				<Item Name="IVA Store Match Geometric Pattern Results.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Store Match Geometric Pattern Results.vi"/>
				<Item Name="IVA Store Match Pattern Results 2.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Store Match Pattern Results 2.vi"/>
				<Item Name="IVA Store Straight Edge3 Results.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Vision Assistant Utils.llb/IVA Store Straight Edge3 Results.vi"/>
				<Item Name="List Directory and LLBs.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/libraryn.llb/List Directory and LLBs.vi"/>
				<Item Name="Longest Line Length in Pixels.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Longest Line Length in Pixels.vi"/>
				<Item Name="LVBoundsTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVBoundsTypeDef.ctl"/>
				<Item Name="LVRectTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVRectTypeDef.ctl"/>
				<Item Name="NI_AALPro.lvlib" Type="Library" URL="/&lt;vilib&gt;/Analysis/NI_AALPro.lvlib"/>
				<Item Name="NI_FileType.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/lvfile.llb/NI_FileType.lvlib"/>
				<Item Name="NI_LVConfig.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/config.llb/NI_LVConfig.lvlib"/>
				<Item Name="NI_PackedLibraryUtility.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/LVLibp/NI_PackedLibraryUtility.lvlib"/>
				<Item Name="NI_PtbyPt.lvlib" Type="Library" URL="/&lt;vilib&gt;/ptbypt/NI_PtbyPt.lvlib"/>
				<Item Name="NI_Vision_Acquisition_Software.lvlib" Type="Library" URL="/&lt;vilib&gt;/vision/driver/NI_Vision_Acquisition_Software.lvlib"/>
				<Item Name="NI_Vision_Development_Module.lvlib" Type="Library" URL="/&lt;vilib&gt;/vision/NI_Vision_Development_Module.lvlib"/>
				<Item Name="Not A Semaphore.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Not A Semaphore.vi"/>
				<Item Name="Not Found Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Not Found Dialog.vi"/>
				<Item Name="Obtain Semaphore Reference.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Obtain Semaphore Reference.vi"/>
				<Item Name="Open File+.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Open File+.vi"/>
				<Item Name="Open_Create_Replace File.vi" Type="VI" URL="/&lt;vilib&gt;/_oldvers/_oldvers.llb/Open_Create_Replace File.vi"/>
				<Item Name="Overlay Line with Arrows.vi" Type="VI" URL="/&lt;vilib&gt;/vision/Clamp.llb/Overlay Line with Arrows.vi"/>
				<Item Name="Overlay Results (Clamp).vi" Type="VI" URL="/&lt;vilib&gt;/vision/Clamp.llb/Overlay Results (Clamp).vi"/>
				<Item Name="ParseXMLFragments.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/xml.llb/ParseXMLFragments.vi"/>
				<Item Name="Particle Parameters" Type="VI" URL="/&lt;vilib&gt;/vision/Image Controls.llb/Particle Parameters"/>
				<Item Name="QR Code Description Options.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Instrument.llb/QR Code Description Options.ctl"/>
				<Item Name="QR Code Model Type.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Instrument.llb/QR Code Model Type.ctl"/>
				<Item Name="QR Code Report.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Instrument.llb/QR Code Report.ctl"/>
				<Item Name="QR Code Search Options.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Instrument.llb/QR Code Search Options.ctl"/>
				<Item Name="QR Code Stream Mode Type.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Instrument.llb/QR Code Stream Mode Type.ctl"/>
				<Item Name="Read Delimited Spreadsheet (DBL).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read Delimited Spreadsheet (DBL).vi"/>
				<Item Name="Read Delimited Spreadsheet (I64).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read Delimited Spreadsheet (I64).vi"/>
				<Item Name="Read Delimited Spreadsheet (string).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read Delimited Spreadsheet (string).vi"/>
				<Item Name="Read Delimited Spreadsheet.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read Delimited Spreadsheet.vi"/>
				<Item Name="Read File+ (string).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read File+ (string).vi"/>
				<Item Name="Read From Spreadsheet File (DBL).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read From Spreadsheet File (DBL).vi"/>
				<Item Name="Read From Spreadsheet File (I64).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read From Spreadsheet File (I64).vi"/>
				<Item Name="Read From Spreadsheet File (string).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read From Spreadsheet File (string).vi"/>
				<Item Name="Read From Spreadsheet File.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read From Spreadsheet File.vi"/>
				<Item Name="Read From XML File(array).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/xml.llb/Read From XML File(array).vi"/>
				<Item Name="Read From XML File(string).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/xml.llb/Read From XML File(string).vi"/>
				<Item Name="Read From XML File.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/xml.llb/Read From XML File.vi"/>
				<Item Name="Read Lines From File (with error IO).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read Lines From File (with error IO).vi"/>
				<Item Name="Read Lines From File.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read Lines From File.vi"/>
				<Item Name="Recursive File List.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/libraryn.llb/Recursive File List.vi"/>
				<Item Name="Registry Handle Master.vi" Type="VI" URL="/&lt;vilib&gt;/registry/registry.llb/Registry Handle Master.vi"/>
				<Item Name="Registry refnum.ctl" Type="VI" URL="/&lt;vilib&gt;/registry/registry.llb/Registry refnum.ctl"/>
				<Item Name="Registry RtKey.ctl" Type="VI" URL="/&lt;vilib&gt;/registry/registry.llb/Registry RtKey.ctl"/>
				<Item Name="Registry SAM.ctl" Type="VI" URL="/&lt;vilib&gt;/registry/registry.llb/Registry SAM.ctl"/>
				<Item Name="Registry View.ctl" Type="VI" URL="/&lt;vilib&gt;/registry/registry.llb/Registry View.ctl"/>
				<Item Name="Registry WinErr-LVErr.vi" Type="VI" URL="/&lt;vilib&gt;/registry/registry.llb/Registry WinErr-LVErr.vi"/>
				<Item Name="Release Semaphore Reference.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Release Semaphore Reference.vi"/>
				<Item Name="Release Semaphore.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Release Semaphore.vi"/>
				<Item Name="RemoveNamedSemaphorePrefix.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/RemoveNamedSemaphorePrefix.vi"/>
				<Item Name="ROI Descriptor" Type="VI" URL="/&lt;vilib&gt;/vision/Image Controls.llb/ROI Descriptor"/>
				<Item Name="Search and Replace Pattern.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Search and Replace Pattern.vi"/>
				<Item Name="Semaphore RefNum" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Semaphore RefNum"/>
				<Item Name="Semaphore Refnum Core.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Semaphore Refnum Core.ctl"/>
				<Item Name="Set Bold Text.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set Bold Text.vi"/>
				<Item Name="Set String Value.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set String Value.vi"/>
				<Item Name="Simple Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Simple Error Handler.vi"/>
				<Item Name="Simple Grid Descriptor" Type="VI" URL="/&lt;vilib&gt;/vision/Image Controls.llb/Simple Grid Descriptor"/>
				<Item Name="Space Constant.vi" Type="VI" URL="/&lt;vilib&gt;/dlg_ctls.llb/Space Constant.vi"/>
				<Item Name="Straight Edge Options.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Measure.llb/Straight Edge Options.ctl"/>
				<Item Name="Straight Edge Process.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Measure.llb/Straight Edge Process.ctl"/>
				<Item Name="subBuildXYGraph.vi" Type="VI" URL="/&lt;vilib&gt;/express/express controls/BuildXYGraphBlock.llb/subBuildXYGraph.vi"/>
				<Item Name="subDisplayMessage.vi" Type="VI" URL="/&lt;vilib&gt;/express/express output/DisplayMessageBlock.llb/subDisplayMessage.vi"/>
				<Item Name="subTimeDelay.vi" Type="VI" URL="/&lt;vilib&gt;/express/express execution control/TimeDelayBlock.llb/subTimeDelay.vi"/>
				<Item Name="System Exec.vi" Type="VI" URL="/&lt;vilib&gt;/Platform/system.llb/System Exec.vi"/>
				<Item Name="TagReturnType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/TagReturnType.ctl"/>
				<Item Name="Three Button Dialog CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog CORE.vi"/>
				<Item Name="Three Button Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog.vi"/>
				<Item Name="Trim Whitespace.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Trim Whitespace.vi"/>
				<Item Name="Validate Semaphore Size.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Validate Semaphore Size.vi"/>
				<Item Name="VISA Configure Serial Port" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port"/>
				<Item Name="VISA Configure Serial Port (Instr).vi" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port (Instr).vi"/>
				<Item Name="VISA Configure Serial Port (Serial Instr).vi" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port (Serial Instr).vi"/>
				<Item Name="Vision Info Type" Type="VI" URL="/&lt;vilib&gt;/vision/Image Controls.llb/Vision Info Type"/>
				<Item Name="Vision Info Type2.ctl" Type="VI" URL="/&lt;vilib&gt;/vision/Image Controls.llb/Vision Info Type2.ctl"/>
				<Item Name="Waveform Array To Dynamic.vi" Type="VI" URL="/&lt;vilib&gt;/express/express shared/transition.llb/Waveform Array To Dynamic.vi"/>
				<Item Name="whitespace.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/whitespace.ctl"/>
				<Item Name="Write Delimited Spreadsheet (DBL).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write Delimited Spreadsheet (DBL).vi"/>
				<Item Name="Write Delimited Spreadsheet (I64).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write Delimited Spreadsheet (I64).vi"/>
				<Item Name="Write Delimited Spreadsheet (string).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write Delimited Spreadsheet (string).vi"/>
				<Item Name="Write Delimited Spreadsheet.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write Delimited Spreadsheet.vi"/>
				<Item Name="Write Registry Value DWORD.vi" Type="VI" URL="/&lt;vilib&gt;/registry/registry.llb/Write Registry Value DWORD.vi"/>
				<Item Name="Write Registry Value Simple STR.vi" Type="VI" URL="/&lt;vilib&gt;/registry/registry.llb/Write Registry Value Simple STR.vi"/>
				<Item Name="Write Registry Value Simple U32.vi" Type="VI" URL="/&lt;vilib&gt;/registry/registry.llb/Write Registry Value Simple U32.vi"/>
				<Item Name="Write Registry Value Simple.vi" Type="VI" URL="/&lt;vilib&gt;/registry/registry.llb/Write Registry Value Simple.vi"/>
				<Item Name="Write Registry Value STR.vi" Type="VI" URL="/&lt;vilib&gt;/registry/registry.llb/Write Registry Value STR.vi"/>
				<Item Name="Write Registry Value.vi" Type="VI" URL="/&lt;vilib&gt;/registry/registry.llb/Write Registry Value.vi"/>
				<Item Name="Write Spreadsheet String.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write Spreadsheet String.vi"/>
				<Item Name="Write To Spreadsheet File (DBL).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write To Spreadsheet File (DBL).vi"/>
				<Item Name="Write To Spreadsheet File (I64).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write To Spreadsheet File (I64).vi"/>
				<Item Name="Write To Spreadsheet File (string).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write To Spreadsheet File (string).vi"/>
				<Item Name="Write To Spreadsheet File.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write To Spreadsheet File.vi"/>
				<Item Name="Write to XML File(array).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/xml.llb/Write to XML File(array).vi"/>
				<Item Name="Write to XML File(string).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/xml.llb/Write to XML File(string).vi"/>
				<Item Name="Write to XML File.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/xml.llb/Write to XML File.vi"/>
			</Item>
			<Item Name="3D-ResetTotalNumber.vi" Type="VI" URL="../SubVIs/3D-ResetTotalNumber.vi"/>
			<Item Name="3D-SaveIniConfig.vi" Type="VI" URL="../SubVIs/3D-SaveIniConfig.vi"/>
			<Item Name="3D-SaveOtherParamsConfig.vi" Type="VI" URL="../SubVIs/3D-SaveOtherParamsConfig.vi"/>
			<Item Name="3D-十字标 -正面.vi" Type="VI" URL="../SubVIs/3D-十字标 -正面.vi"/>
			<Item Name="3D-十字标.vi" Type="VI" URL="../SubVIs/3D-十字标.vi"/>
			<Item Name="_WriteConfiguration(Boolean).vi" Type="VI" URL="../SubVIs/General/Config.llb/_WriteConfiguration(Boolean).vi"/>
			<Item Name="_WriteConfiguration(Double).vi" Type="VI" URL="../SubVIs/General/Config.llb/_WriteConfiguration(Double).vi"/>
			<Item Name="_WriteConfiguration(I32).vi" Type="VI" URL="../SubVIs/General/Config.llb/_WriteConfiguration(I32).vi"/>
			<Item Name="_WriteConfiguration(Path).vi" Type="VI" URL="../SubVIs/General/Config.llb/_WriteConfiguration(Path).vi"/>
			<Item Name="_WriteConfiguration(String).vi" Type="VI" URL="../SubVIs/General/Config.llb/_WriteConfiguration(String).vi"/>
			<Item Name="_WriteConfiguration(U32).vi" Type="VI" URL="../SubVIs/General/Config.llb/_WriteConfiguration(U32).vi"/>
			<Item Name="A 侧面 处理函数.vi" Type="VI" URL="../SubVIs/AOI VI/A 侧面 处理函数.vi"/>
			<Item Name="A 侧面 处理函数CCD3.vi" Type="VI" URL="../SubVIs/AOI VI/A 侧面 处理函数CCD3.vi"/>
			<Item Name="A 侧面 处理函数CCD4.vi" Type="VI" URL="../SubVIs/AOI VI/A 侧面 处理函数CCD4.vi"/>
			<Item Name="A 侧面 处理函数CCD5 - 副本.vi" Type="VI" URL="../SubVIs/AOI VI/A 侧面 处理函数CCD5 - 副本.vi"/>
			<Item Name="A 侧面 处理函数CCD5.vi" Type="VI" URL="../SubVIs/AOI VI/A 侧面 处理函数CCD5.vi"/>
			<Item Name="A 侧面 处理函数CCD6.vi" Type="VI" URL="../SubVIs/AOI VI/A 侧面 处理函数CCD6.vi"/>
			<Item Name="A 侧面 处理函数衬丝检测.vi" Type="VI" URL="../SubVIs/AOI VI/A 侧面 处理函数衬丝检测.vi"/>
			<Item Name="adlink7230ReadAndWriteIO.vi" Type="VI" URL="../SubVIs/ADLink 7230/adlink7230ReadAndWriteIO.vi"/>
			<Item Name="Advapi32.dll" Type="Document" URL="Advapi32.dll">
				<Property Name="NI.PreserveRelativePath" Type="Bool">true</Property>
			</Item>
			<Item Name="AMX-CCD 自动处理图像.vi" Type="VI" URL="../SubVIs/CCD/AMX-CCD 自动处理图像.vi"/>
			<Item Name="AMX-CCD1获取图像.vi" Type="VI" URL="../SubVIs/CCD/AMX-CCD1获取图像.vi"/>
			<Item Name="AMX-CCD2 自动处理图像.vi" Type="VI" URL="../SubVIs/CCD/AMX-CCD2 自动处理图像.vi"/>
			<Item Name="AMX-CCD2获取图像.vi" Type="VI" URL="../SubVIs/CCD/AMX-CCD2获取图像.vi"/>
			<Item Name="AMX-CCD3 自动处理图像 - 副本.vi" Type="VI" URL="../SubVIs/AMX-CCD3 自动处理图像 - 副本.vi"/>
			<Item Name="AMX-CCDA获取图像.vi" Type="VI" URL="../SubVIs/CCD/AMX-CCDA获取图像.vi"/>
			<Item Name="AMX-SaveImage - 衬丝检测.vi" Type="VI" URL="../SubVIs/CCD/AMX-SaveImage - 衬丝检测.vi"/>
			<Item Name="AMX-SaveImage.vi" Type="VI" URL="../SubVIs/CCD/AMX-SaveImage.vi"/>
			<Item Name="AMX-电源头正面标签1检测参数读取.vi" Type="VI" URL="../SubVIs/CCD/AMX-电源头正面标签1检测参数读取.vi"/>
			<Item Name="AMX-电源头正面标签2检测参数读取.vi" Type="VI" URL="../SubVIs/CCD/AMX-电源头正面标签2检测参数读取.vi"/>
			<Item Name="AMX-电源正面标签1处理函数.vi" Type="VI" URL="../SubVIs/CCD/AMX-电源正面标签1处理函数.vi"/>
			<Item Name="AMX-电源正面标签2处理函数.vi" Type="VI" URL="../SubVIs/CCD/AMX-电源正面标签2处理函数.vi"/>
			<Item Name="Andafa.IO.Helper.dll" Type="Document" URL="../Andafa.IO.Helper.dll"/>
			<Item Name="BeforeStart.vi" Type="VI" URL="../SubVIs/BeforeStart.vi"/>
			<Item Name="CheckSpecialTags.vi" Type="VI" URL="../SubVIs/General/Error Handler.llb/CheckSpecialTags.vi"/>
			<Item Name="ClearErr.vi" Type="VI" URL="../SubVIs/ClearErr.vi"/>
			<Item Name="CombineArrayElementWithRegular.vi" Type="VI" URL="../SubVIs/General/Config.llb/CombineArrayElementWithRegular.vi"/>
			<Item Name="CR-CCD表面检测获取图像.vi" Type="VI" URL="../SubVIs/CCD/CR-CCD表面检测获取图像.vi"/>
			<Item Name="CR-Initial CameraCCD6.vi" Type="VI" URL="../SubVIs/CCD/CR-Initial CameraCCD6.vi"/>
			<Item Name="CR-Initial CameraCCD12.vi" Type="VI" URL="../SubVIs/CCD/CR-Initial CameraCCD12.vi"/>
			<Item Name="CR-Initial CameraCCD345.vi" Type="VI" URL="../SubVIs/CCD/CR-Initial CameraCCD345.vi"/>
			<Item Name="CR-Initial CameraCCDA.vi" Type="VI" URL="../SubVIs/CCD/CR-Initial CameraCCDA.vi"/>
			<Item Name="CR-SaveImage -CCD3NG.vi" Type="VI" URL="../SubVIs/CCD/CR-SaveImage -CCD3NG.vi"/>
			<Item Name="CR-表面检测图像获取.vi" Type="VI" URL="../SubVIs/CR-表面检测图像获取.vi"/>
			<Item Name="CR-衬丝检测参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-衬丝检测参数读取.vi"/>
			<Item Name="CR-衬丝检测处理函数.vi" Type="VI" URL="../SubVIs/CCD/CR-衬丝检测处理函数.vi"/>
			<Item Name="CR-导丝划痕检测1 - 副本.vi" Type="VI" URL="../SubVIs/UI/CR-导丝划痕检测1 - 副本.vi"/>
			<Item Name="CR-导丝划痕检测1.vi" Type="VI" URL="../SubVIs/UI/CR-导丝划痕检测1.vi"/>
			<Item Name="CR-导丝划痕检测1参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝划痕检测1参数读取.vi"/>
			<Item Name="CR-导丝划痕检测1处理函数.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝划痕检测1处理函数.vi"/>
			<Item Name="CR-导丝划痕检测2.vi" Type="VI" URL="../SubVIs/UI/CR-导丝划痕检测2.vi"/>
			<Item Name="CR-导丝划痕检测2参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝划痕检测2参数读取.vi"/>
			<Item Name="CR-导丝划痕检测2处理函数.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝划痕检测2处理函数.vi"/>
			<Item Name="CR-导丝划痕检测3.vi" Type="VI" URL="../SubVIs/UI/CR-导丝划痕检测3.vi"/>
			<Item Name="CR-导丝划痕检测3参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝划痕检测3参数读取.vi"/>
			<Item Name="CR-导丝划痕检测3处理函数.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝划痕检测3处理函数.vi"/>
			<Item Name="CR-导丝颗粒物检测1参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝颗粒物检测1参数读取.vi"/>
			<Item Name="CR-导丝颗粒物检测2.vi" Type="VI" URL="../SubVIs/UI/CR-导丝颗粒物检测2.vi"/>
			<Item Name="CR-导丝颗粒物检测2处理函数.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝颗粒物检测2处理函数.vi"/>
			<Item Name="CR-导丝颗粒物检测3.vi" Type="VI" URL="../SubVIs/UI/CR-导丝颗粒物检测3.vi"/>
			<Item Name="CR-导丝颗粒物检测3参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝颗粒物检测3参数读取.vi"/>
			<Item Name="CR-导丝颗粒物检测3处理函数.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝颗粒物检测3处理函数.vi"/>
			<Item Name="CR-导丝缺损检测1.vi" Type="VI" URL="../SubVIs/UI/CR-导丝缺损检测1.vi"/>
			<Item Name="CR-导丝缺损检测1参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝缺损检测1参数读取.vi"/>
			<Item Name="CR-导丝缺损检测1处理函数.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝缺损检测1处理函数.vi"/>
			<Item Name="CR-导丝缺损检测2.vi" Type="VI" URL="../SubVIs/UI/CR-导丝缺损检测2.vi"/>
			<Item Name="CR-导丝缺损检测2参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝缺损检测2参数读取.vi"/>
			<Item Name="CR-导丝缺损检测2处理函数.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝缺损检测2处理函数.vi"/>
			<Item Name="CR-导丝缺损检测3.vi" Type="VI" URL="../SubVIs/UI/CR-导丝缺损检测3.vi"/>
			<Item Name="CR-导丝缺损检测3参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝缺损检测3参数读取.vi"/>
			<Item Name="CR-导丝缺损检测3处理函数.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝缺损检测3处理函数.vi"/>
			<Item Name="CR-导丝上料一致性处理函数.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝上料一致性处理函数.vi"/>
			<Item Name="CR-导丝上料一致性检测.vi" Type="VI" URL="../SubVIs/UI/CR-导丝上料一致性检测.vi"/>
			<Item Name="CR-导丝上料一致性检测参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝上料一致性检测参数读取.vi"/>
			<Item Name="CR-导丝纤维毛发检测1.vi" Type="VI" URL="../SubVIs/UI/CR-导丝纤维毛发检测1.vi"/>
			<Item Name="CR-导丝纤维毛发检测2.vi" Type="VI" URL="../SubVIs/UI/CR-导丝纤维毛发检测2.vi"/>
			<Item Name="CR-导丝纤维毛发检测2参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝纤维毛发检测2参数读取.vi"/>
			<Item Name="CR-导丝纤维毛发检测2处理函数.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝纤维毛发检测2处理函数.vi"/>
			<Item Name="CR-导丝纤维毛发检测3.vi" Type="VI" URL="../SubVIs/UI/CR-导丝纤维毛发检测3.vi"/>
			<Item Name="CR-导丝纤维毛发检测3参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝纤维毛发检测3参数读取.vi"/>
			<Item Name="CR-导丝纤维毛发检测3处理函数.vi" Type="VI" URL="../SubVIs/CCD/CR-导丝纤维毛发检测3处理函数.vi"/>
			<Item Name="CR-颗粒物检测2参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-颗粒物检测2参数读取.vi"/>
			<Item Name="CR-扫码枪.vi" Type="VI" URL="../SubVIs/UI/CR-扫码枪.vi"/>
			<Item Name="CR-扫码枪参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-扫码枪参数读取.vi"/>
			<Item Name="CR-纤维毛发检测1参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-纤维毛发检测1参数读取.vi"/>
			<Item Name="CR-纤维毛发检测1处理函数.vi" Type="VI" URL="../SubVIs/CCD/CR-纤维毛发检测1处理函数.vi"/>
			<Item Name="CR-字符串检测CCD6.vi" Type="VI" URL="../SubVIs/UI/CR-字符串检测CCD6.vi"/>
			<Item Name="CR-字符串检测衬丝.vi" Type="VI" URL="../SubVIs/UI/CR-字符串检测衬丝.vi"/>
			<Item Name="CR-字符检测参数读取.vi" Type="VI" URL="../SubVIs/CCD/CR-字符检测参数读取.vi"/>
			<Item Name="CR-字符检测处理函数as.vi" Type="VI" URL="../SubVIs/字符检测VI/CR-字符检测处理函数as.vi"/>
			<Item Name="CR-字符图片显示.vi" Type="VI" URL="../SubVIs/字符检测VI/CR-字符图片显示.vi"/>
			<Item Name="CS-相机颗粒物检测1.vi" Type="VI" URL="../SubVIs/CCD/CS-相机颗粒物检测1.vi"/>
			<Item Name="Data and Run Information new.ctl" Type="VI" URL="../Picture/Data and Run Information new.ctl"/>
			<Item Name="DB5000.R读取.vi" Type="VI" URL="../SubVIs/西门子通信/LABVIEW与西门子NET《网口》/SIEMENS VI/DB5000.R读取.vi"/>
			<Item Name="DB5000.W读取.vi" Type="VI" URL="../SubVIs/西门子通信/LABVIEW与西门子NET《网口》/SIEMENS VI/DB5000.W读取.vi"/>
			<Item Name="DB5000.W写.vi" Type="VI" URL="../SubVIs/西门子通信/LABVIEW与西门子NET《网口》/SIEMENS VI/DB5000.W写.vi"/>
			<Item Name="DB5000.X读取.vi" Type="VI" URL="../SubVIs/西门子通信/LABVIEW与西门子NET《网口》/SIEMENS VI/DB5000.X读取.vi"/>
			<Item Name="DB5000.X写 -AllRest.vi" Type="VI" URL="../SubVIs/西门子通信/LABVIEW与西门子NET《网口》/SIEMENS VI/DB5000.X写 -AllRest.vi"/>
			<Item Name="Dequeue Element Array.vi" Type="VI" URL="../SubVIs/General/Queue.llb/Dequeue Element Array.vi"/>
			<Item Name="Dequeue Element.vi" Type="VI" URL="../SubVIs/General/Queue.llb/Dequeue Element.vi"/>
			<Item Name="DetailsDisplayDialog.vi" Type="VI" URL="../SubVIs/General/Error Handler.llb/DetailsDisplayDialog.vi"/>
			<Item Name="Enqueue Element Array.vi" Type="VI" URL="../SubVIs/General/Queue.llb/Enqueue Element Array.vi"/>
			<Item Name="Enqueue Element.vi" Type="VI" URL="../SubVIs/General/Queue.llb/Enqueue Element.vi"/>
			<Item Name="Error Handle Queue.vi" Type="VI" URL="../SubVIs/General/Queue.llb/Error Handle Queue.vi"/>
			<Item Name="ErrorCodeDatabase.vi" Type="VI" URL="../SubVIs/General/Error Handler.llb/ErrorCodeDatabase.vi"/>
			<Item Name="ExitAppMode.vi" Type="VI" URL="../SubVIs/General/Application.llb/ExitAppMode.vi"/>
			<Item Name="FormatMessageString.vi" Type="VI" URL="../SubVIs/General/Error Handler.llb/FormatMessageString.vi"/>
			<Item Name="GeneralErrorHandler.vi" Type="VI" URL="../SubVIs/General/Error Handler.llb/GeneralErrorHandler.vi"/>
			<Item Name="GenerateSection&amp;Key.vi" Type="VI" URL="../SubVIs/General/Config.llb/GenerateSection&amp;Key.vi"/>
			<Item Name="GetSystemTime.vi" Type="VI" URL="../SubVIs/General/Application.llb/GetSystemTime.vi"/>
			<Item Name="Global System.vi" Type="VI" URL="../SubVIs/Global System.vi"/>
			<Item Name="Grab -Main-CCD1 - 2.vi" Type="VI" URL="../SubVIs/医疗导管组装测试/Grab -Main-CCD1 - 2.vi"/>
			<Item Name="Grab -Main-CCD1.vi" Type="VI" URL="../SubVIs/医疗导管组装测试/Grab -Main-CCD1.vi"/>
			<Item Name="Home.ctl" Type="VI" URL="../Picture/Home.ctl"/>
			<Item Name="HslCommunication.dll" Type="Document" URL="../SubVIs/西门子通信/LABVIEW与西门子NET《网口》/SIEMENS与LabVIEW/HslCommunication.dll"/>
			<Item Name="Initial7230.vi" Type="VI" URL="../SubVIs/ADLink 7230/Initial7230.vi"/>
			<Item Name="KB-EMG Input.vi" Type="VI" URL="../SubVIs/KB-EMG Input.vi"/>
			<Item Name="KN-ReadVISAPamams.vi" Type="VI" URL="../SubVIs/KN-ReadVISAPamams.vi"/>
			<Item Name="lvanlys.dll" Type="Document" URL="/&lt;resource&gt;/lvanlys.dll"/>
			<Item Name="LX-runtime.vi" Type="VI" URL="../SubVIs/LX-runtime.vi"/>
			<Item Name="Machine Alarm History.ctl" Type="VI" URL="../Picture/Machine Alarm History.ctl"/>
			<Item Name="Machine Information.ctl" Type="VI" URL="../Picture/Machine Information.ctl"/>
			<Item Name="Machine Paramter and Control.ctl" Type="VI" URL="../Picture/Machine Paramter and Control.ctl"/>
			<Item Name="MergeErrors.vi" Type="VI" URL="../SubVIs/General/Error Handler.llb/MergeErrors.vi"/>
			<Item Name="MESS测试.vi" Type="VI" URL="../SubVIs/MESS/MESS测试.vi"/>
			<Item Name="mess解析.vi" Type="VI" URL="../SubVIs/MESS/mess解析.vi"/>
			<Item Name="mess压力数据上传.vi" Type="VI" URL="../SubVIs/MESS/mess压力数据上传.vi"/>
			<Item Name="niimaqdx.dll" Type="Document" URL="niimaqdx.dll">
				<Property Name="NI.PreserveRelativePath" Type="Bool">true</Property>
			</Item>
			<Item Name="nivision.dll" Type="Document" URL="nivision.dll">
				<Property Name="NI.PreserveRelativePath" Type="Bool">true</Property>
			</Item>
			<Item Name="nivissvc.dll" Type="Document" URL="nivissvc.dll">
				<Property Name="NI.PreserveRelativePath" Type="Bool">true</Property>
			</Item>
			<Item Name="Obtain Queue Array.vi" Type="VI" URL="../SubVIs/General/Queue.llb/Obtain Queue Array.vi"/>
			<Item Name="Obtain Queue.vi" Type="VI" URL="../SubVIs/General/Queue.llb/Obtain Queue.vi"/>
			<Item Name="Open Excel File.ctl" Type="VI" URL="../Picture/Open Excel File.ctl"/>
			<Item Name="Open Image File.ctl" Type="VI" URL="../Picture/Open Image File.ctl"/>
			<Item Name="Pause.ctl" Type="VI" URL="../Picture/Pause.ctl"/>
			<Item Name="Product model selection.vi" Type="VI" URL="../SubVIs/UI/Product model selection.vi"/>
			<Item Name="QR-a.vi" Type="VI" URL="../SubVIs/字符检测VI/QR-a.vi"/>
			<Item Name="Queue Status Array.vi" Type="VI" URL="../SubVIs/General/Queue.llb/Queue Status Array.vi"/>
			<Item Name="Queue Status.vi" Type="VI" URL="../SubVIs/General/Queue.llb/Queue Status.vi"/>
			<Item Name="Read Config InI.vi" Type="VI" URL="../SubVIs/Read Config InI.vi"/>
			<Item Name="Read Config_INI_String.vi" Type="VI" URL="../SubVIs/Read Config_INI_String.vi"/>
			<Item Name="Read Machine Component Models.vi" Type="VI" URL="../SubVIs/Read Machine Component Models.vi"/>
			<Item Name="Read User File Data.vi" Type="VI" URL="../SubVIs/Read User File Data.vi"/>
			<Item Name="Read User Name.vi" Type="VI" URL="../SubVIs/Read User Name.vi"/>
			<Item Name="ReadConfiguration.vi" Type="VI" URL="../SubVIs/General/Config.llb/ReadConfiguration.vi"/>
			<Item Name="ReadSysConfigForStart.vi" Type="VI" URL="../SubVIs/General/Application.llb/ReadSysConfigForStart.vi"/>
			<Item Name="ReadSysParaSetting.vi" Type="VI" URL="../SubVIs/General/Application.llb/ReadSysParaSetting.vi"/>
			<Item Name="Release Queue Array.vi" Type="VI" URL="../SubVIs/General/Queue.llb/Release Queue Array.vi"/>
			<Item Name="SaveButtom.ctl" Type="VI" URL="../Picture/SaveButtom.ctl"/>
			<Item Name="SetTestInfoIndex.vi" Type="VI" URL="../SubVIs/General/Application.llb/SetTestInfoIndex.vi"/>
			<Item Name="SplidStringWithRegular.vi" Type="VI" URL="../SubVIs/General/Config.llb/SplidStringWithRegular.vi"/>
			<Item Name="SQL-清空数据库信息.vi" Type="VI" URL="../SubVIs/SQL-清空数据库信息.vi"/>
			<Item Name="SQL-选择清空数据库.vi" Type="VI" URL="../SubVIs/SQL-选择清空数据库.vi"/>
			<Item Name="SQL表面型号删除.vi" Type="VI" URL="../SubVIs/SQL表面型号删除.vi"/>
			<Item Name="SQL表面型号数据库读取.vi" Type="VI" URL="../SubVIs/SQL表面型号数据库读取.vi"/>
			<Item Name="SQL穿管型号删除.vi" Type="VI" URL="../SubVIs/SQL穿管型号删除.vi"/>
			<Item Name="SQL穿管型号数据库读取.vi" Type="VI" URL="../SubVIs/SQL穿管型号数据库读取.vi"/>
			<Item Name="SQL读取.vi" Type="VI" URL="../SubVIs/SQL读取.vi"/>
			<Item Name="SQL删除.vi" Type="VI" URL="../SubVIs/SQL删除.vi"/>
			<Item Name="SQL写入 - NG.vi" Type="VI" URL="../SubVIs/SQL写入 - NG.vi"/>
			<Item Name="SQL写入 - 表面检测.vi" Type="VI" URL="../SubVIs/SQL写入 - 表面检测.vi"/>
			<Item Name="SQL写入 - 穿管检测.vi" Type="VI" URL="../SubVIs/SQL写入 - 穿管检测.vi"/>
			<Item Name="SQL写入.vi" Type="VI" URL="../SubVIs/SQL写入.vi"/>
			<Item Name="start ROI set-CCD1.vi" Type="VI" URL="../SubVIs/医疗导管组装测试/start ROI set-CCD1.vi"/>
			<Item Name="Start.ctl" Type="VI" URL="../Picture/Start.ctl"/>
			<Item Name="Stop.ctl" Type="VI" URL="../Picture/Stop.ctl"/>
			<Item Name="Trige.vi" Type="VI" URL="../SubVIs/Trige.vi"/>
			<Item Name="TSP-搜索树形列表.vi" Type="VI" URL="../SubVIs/TSP-搜索树形列表.vi"/>
			<Item Name="TSP-搜索树形列表（表格）.vi" Type="VI" URL="../SubVIs/TSP-搜索树形列表（表格）.vi"/>
			<Item Name="UI-BaseParamSet.vi" Type="VI" URL="../SubVIs/UI/UI-BaseParamSet.vi"/>
			<Item Name="UPdataMessage.vi" Type="VI" URL="../SubVIs/UPdataMessage.vi"/>
			<Item Name="User Login.ctl" Type="VI" URL="../Picture/User Login.ctl"/>
			<Item Name="UserLogin.ctl" Type="VI" URL="../Picture/UserLogin.ctl"/>
			<Item Name="Vision Paramter and Control.ctl" Type="VI" URL="../Picture/Vision Paramter and Control.ctl"/>
			<Item Name="Write Data To User File.vi" Type="VI" URL="../SubVIs/Write Data To User File.vi"/>
			<Item Name="Write_Config_INI.vi" Type="VI" URL="../SubVIs/Write_Config_INI.vi"/>
			<Item Name="WriteConfiguration.vi" Type="VI" URL="../SubVIs/General/Config.llb/WriteConfiguration.vi"/>
			<Item Name="保存判定Title文件.vi" Type="VI" URL="../SubVIs/保存判定Title文件.vi"/>
			<Item Name="边沿检测.lvlib" Type="Library" URL="../SubVIs/边沿检测/边沿检测.lvlib"/>
			<Item Name="标签打印.vi" Type="VI" URL="../SubVIs/MESS/标签打印.vi"/>
			<Item Name="布尔字符串转换.vi" Type="VI" URL="../SubVIs/布尔字符串转换.vi"/>
			<Item Name="产品删除.vi" Type="VI" URL="../SubVIs/UI/产品删除.vi"/>
			<Item Name="产品新增.vi" Type="VI" URL="../SubVIs/UI/产品新增.vi"/>
			<Item Name="长度判断.vi" Type="VI" URL="../SubVIs/MESS/长度判断.vi"/>
			<Item Name="初始化SIEMENS.vi" Type="VI" URL="../SubVIs/西门子通信/LABVIEW与西门子NET《网口》/SIEMENS VI/初始化SIEMENS.vi"/>
			<Item Name="登录.vi" Type="VI" URL="../SubVIs/UI/登录.vi"/>
			<Item Name="读取产品参数信息-CCD1CCD2.vi" Type="VI" URL="../SubVIs/读取产品参数信息-CCD1CCD2.vi"/>
			<Item Name="读取产品参数信息-CCD3CCD4.vi" Type="VI" URL="../SubVIs/读取产品参数信息-CCD3CCD4.vi"/>
			<Item Name="读取产品参数信息-CCD6.vi" Type="VI" URL="../SubVIs/读取产品参数信息-CCD6.vi"/>
			<Item Name="读取产品参数信息-CCDA.vi" Type="VI" URL="../SubVIs/读取产品参数信息-CCDA.vi"/>
			<Item Name="读取历史数据.vi" Type="VI" URL="../SubVIs/读取历史数据.vi"/>
			<Item Name="读取扫码枪参数.vi" Type="VI" URL="../SubVIs/读取扫码枪参数.vi"/>
			<Item Name="读取型号检测项.vi" Type="VI" URL="../SubVIs/AOI VI/读取型号检测项.vi"/>
			<Item Name="关闭SIEMENS.vi" Type="VI" URL="../SubVIs/西门子通信/LABVIEW与西门子NET《网口》/SIEMENS VI/关闭SIEMENS.vi"/>
			<Item Name="画箭头 - right.vi" Type="VI" URL="../SubVIs/医疗导管组装测试/画箭头 - right.vi"/>
			<Item Name="画箭头.vi" Type="VI" URL="../SubVIs/医疗导管组装测试/画箭头.vi"/>
			<Item Name="夹爪压力保存.vi" Type="VI" URL="../SubVIs/夹爪压力保存.vi"/>
			<Item Name="军蚁-工具栏按钮操作.vi" Type="VI" URL="../SubVIs/军蚁-工具栏按钮操作.vi"/>
			<Item Name="军蚁-禁用菜单功能.vi" Type="VI" URL="../SubVIs/军蚁-禁用菜单功能.vi"/>
			<Item Name="军蚁-启用菜单功能.vi" Type="VI" URL="../SubVIs/军蚁-启用菜单功能.vi"/>
			<Item Name="拷贝创建文件夹.vi" Type="VI" URL="../SubVIs/AOI VI/拷贝创建文件夹.vi"/>
			<Item Name="三星logo.ctl" Type="VI" URL="../Picture/三星logo.ctl"/>
			<Item Name="扫码触发.vi" Type="VI" URL="../SubVIs/扫码触发.vi"/>
			<Item Name="删除文件夹.vi" Type="VI" URL="../SubVIs/AOI VI/删除文件夹.vi"/>
			<Item Name="设备状态循环显示.vi" Type="VI" URL="../SubVIs/设备状态循环显示.vi"/>
			<Item Name="数据收集.vi" Type="VI" URL="../SubVIs/数据收集.vi"/>
			<Item Name="位置范围设定VI.vi" Type="VI" URL="../SubVIs/衬丝检测/位置范围设定VI.vi"/>
			<Item Name="位置显示.vi" Type="VI" URL="../SubVIs/医疗导管组装测试/位置显示.vi"/>
			<Item Name="相机关闭.vi" Type="VI" URL="../SubVIs/CCD/相机关闭.vi"/>
			<Item Name="循环时状态显示 - 3.vi" Type="VI" URL="../SubVIs/循环时状态显示 - 3.vi"/>
			<Item Name="循环时状态显示.vi" Type="VI" URL="../SubVIs/循环时状态显示.vi"/>
			<Item Name="压力数据保存判定 - 夹爪.vi" Type="VI" URL="../SubVIs/压力数据保存判定 - 夹爪.vi"/>
			<Item Name="压力数据保存判定.vi" Type="VI" URL="../SubVIs/压力数据保存判定.vi"/>
			<Item Name="一致性测试确认.vi" Type="VI" URL="../SubVIs/CCD/一致性测试确认.vi"/>
			<Item Name="一致性范围确认.vi" Type="VI" URL="../SubVIs/CCD/一致性范围确认.vi"/>
			<Item Name="一致性检测VI.vi" Type="VI" URL="../SubVIs/衬丝检测/一致性检测VI.vi"/>
			<Item Name="一致性结果转换.vi" Type="VI" URL="../SubVIs/CCD/一致性结果转换.vi"/>
			<Item Name="右相机穿管检测CCD2.vi" Type="VI" URL="../SubVIs/UI/右相机穿管检测CCD2.vi"/>
			<Item Name="运行菜单.rtm" Type="Document" URL="../SubVIs/运行菜单.rtm"/>
			<Item Name="注册.vi" Type="VI" URL="../SubVIs/注册.vi"/>
			<Item Name="字符检测模板匹配.vi" Type="VI" URL="../SubVIs/字符检测VI/字符检测模板匹配.vi"/>
			<Item Name="字符图片截取.vi" Type="VI" URL="../SubVIs/字符检测VI/字符图片截取.vi"/>
			<Item Name="字符转换C代码.vi" Type="VI" URL="../SubVIs/CCD/字符转换C代码.vi"/>
			<Item Name="左相机穿管检测CCD1.vi" Type="VI" URL="../SubVIs/UI/左相机穿管检测CCD1.vi"/>
		</Item>
		<Item Name="程序生成规范" Type="Build">
			<Item Name="我的应用程序" Type="EXE">
				<Property Name="App_copyErrors" Type="Bool">true</Property>
				<Property Name="App_INI_aliasGUID" Type="Str">{F15BF80F-42FC-4ED5-AAC7-72916185E5F6}</Property>
				<Property Name="App_INI_GUID" Type="Str">{58D7BC67-510E-47A9-8CB9-20EE10B7D09A}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_autoIncrement" Type="Bool">true</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{7B83582F-3EA3-4A88-8CB8-571A07AA6C2A}</Property>
				<Property Name="Bld_buildSpecName" Type="Str">我的应用程序</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">ChineseS</Property>
				<Property Name="Bld_excludeInlineSubVIs" Type="Bool">true</Property>
				<Property Name="Bld_excludeLibraryItems" Type="Bool">true</Property>
				<Property Name="Bld_excludePolymorphicVIs" Type="Bool">true</Property>
				<Property Name="Bld_localDestDir" Type="Path">../builds/NI_AB_PROJECTNAME/我的应用程序</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToCommon</Property>
				<Property Name="Bld_modifyLibraryFile" Type="Bool">true</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{E2110612-8726-4A55-9F35-F971BE44B7A8}</Property>
				<Property Name="Bld_version.build" Type="Int">6</Property>
				<Property Name="Bld_version.major" Type="Int">1</Property>
				<Property Name="Destination[0].destName" Type="Str">应用程序.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../builds/NI_AB_PROJECTNAME/我的应用程序/应用程序.exe</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">支持目录</Property>
				<Property Name="Destination[1].path" Type="Path">../builds/NI_AB_PROJECTNAME/我的应用程序/data</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Exe_iconItemID" Type="Ref"></Property>
				<Property Name="Source[0].itemID" Type="Str">{00C4F18D-EB22-43F1-91F4-BB26210BF510}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/我的电脑/LabVIEW Function Structure.vi</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">2</Property>
				<Property Name="TgtF_fileDescription" Type="Str">我的应用程序</Property>
				<Property Name="TgtF_internalName" Type="Str">我的应用程序</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">版权 2018 </Property>
				<Property Name="TgtF_productName" Type="Str">我的应用程序</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{6EF6E6C0-CF58-49B4-A2B6-3356C1FBEB6C}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">应用程序.exe</Property>
				<Property Name="TgtF_versionIndependent" Type="Bool">true</Property>
			</Item>
		</Item>
	</Item>
</Project>
