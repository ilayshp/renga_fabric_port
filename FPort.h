/*
 *  Description:
 *
 *  Simple Renga PlugIn application illustrating how to add plugin specific
 *  tool buttons to Renga main toolbar and how to process plugin tool button
 *  click.
 *
 *  Copyright Notice:
 *
 *  Copyright: LLC "ASCON - Design Systems", 2015.
 *  All rights reserved.
 */

#pragma once

#include <IPlugin.h>
#include <RengaAPI/IInvokable.h>
#include <memory>

class ButtonClickHandler;

class ExamplePlugin: public plugins::IPlugin
{
public:
  ExamplePlugin();

  bool initialize(const wchar_t* pluginDir);
  void stop();

private:
  std::unique_ptr<ButtonClickHandler> m_pButtonClickHandler; 
};

class ButtonClickHandler : public rengaapi::IInvokable
{
public:
  ButtonClickHandler();

  void invoke();
};

EXPORT_PLUGIN(ExamplePlugin);
