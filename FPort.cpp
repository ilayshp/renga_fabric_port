#include "FPort.h"

#include <RengaAPI/RengaAPI.h>
#include <RengaAPI/UIControls.h>
#include <RengaAPI/ToolButtonGroup.h>
#include <RengaAPI/String.h>
#include <RengaAPI/Image.h>

#include <iostream>
#include <fstream>
#include <vector>

#include "CanvasMainWindow.h"
#include <FTL/CStrRef.h>
#include <FTL/Path.h>
#include <FabricCore.h>
#include <string> 
#include <Windows.h>

#include <QtGui/QApplication>
#include <QtGui/QMainWindow>

rengaapi::Image loadImage(const wchar_t* imagePath)
{
  std::ifstream iconStream(imagePath, std::ios::in | std::ios::binary);

  std::streampos streamBegin = iconStream.tellg();
  iconStream.seekg(0, std::ios::end);
  std::streampos streamEnd = iconStream.tellg();
  iconStream.seekg(0, std::ios::beg);

  std::streamoff dataSize = streamEnd - streamBegin;

  std::vector<char> pngData(dataSize);
  iconStream.read(&pngData[0], dataSize);

  rengaapi::Image image;
  image.loadFromData(&pngData[0], dataSize, rengaapi::Image::Format::PNG);

  return image;
}


ExamplePlugin::ExamplePlugin()
{
}

bool ExamplePlugin::initialize(const wchar_t* pluginDir)
{
  rengaapi::ToolButtonGroup buttonGroup;
  rengaapi::ToolButton toolButton;
  
  std::wstring iconPath = std::wstring(pluginDir) + L"\\icons\\canvas.png";

  m_pButtonClickHandler.reset(new ButtonClickHandler());

  toolButton.setClickHandler(m_pButtonClickHandler.get());
  toolButton.setToolTip(rengaapi::String::fromStdWString(L"Load Fabric Canvas"));
  rengaapi::Image image = loadImage(iconPath.c_str());
  toolButton.setImage(image);
  buttonGroup.add(toolButton);

  rengaapi::UIControls::addButtonGroupToMainToolBar(buttonGroup);
  return true;
}


void ExamplePlugin::stop()
{
}


ButtonClickHandler::ButtonClickHandler() 
{
}

void ButtonClickHandler::invoke()
{
  AllocConsole();
  freopen("CONIN$", "r", stdin);
  freopen("CONOUT$", "w", stdout);
  freopen("CONOUT$", "w", stderr);

  std::cout << "Plugin button has been pressed" << "\n";

  std::cout << "Canvas loading" << "\n";

  int argc = 0;

  QApplication app(argc, NULL);

  QSettings settings;

  try
  {

	  bool unguarded = false;

	  MainWindow mainWin(&settings, unguarded);

	  if (!mainWin.isVisible())
	  {
		  mainWin.show();
		  app.exec();
		  while (mainWin.isVisible())
		  {
			  app.processEvents();
		  }
	  }
  }
  catch (FabricCore::Exception e)
  {
	  printf("Error loading Canvas Standalone: %s\n", e.getDesc_cstr());
	  std::cout << "Error loading Canvas Standalone: %s\n" << e.getDesc_cstr() << "\n";
  }
}