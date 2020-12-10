<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="17008000">
	<Item Name="我的电脑" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">我的电脑/VI服务器</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">我的电脑/VI服务器</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="DB测试.vi" Type="VI" URL="../../SIEMENS VI/DB测试.vi"/>
		<Item Name="独立测试.vi" Type="VI" URL="../独立测试.vi"/>
		<Item Name="上位机.vi" Type="VI" URL="../上位机.vi"/>
		<Item Name="依赖关系" Type="Dependencies">
			<Item Name="DB6000.I读取.vi" Type="VI" URL="../../SIEMENS VI/DB6000.I读取.vi"/>
			<Item Name="HslCommunication.dll" Type="Document" URL="../HslCommunication.dll"/>
			<Item Name="初始化SIEMENS.vi" Type="VI" URL="../../SIEMENS VI/初始化SIEMENS.vi"/>
			<Item Name="关闭SIEMENS.vi" Type="VI" URL="../../SIEMENS VI/关闭SIEMENS.vi"/>
		</Item>
		<Item Name="程序生成规范" Type="Build"/>
	</Item>
</Project>
