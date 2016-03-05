// ChuckyPokerTrainer.cpp : main project file.

#pragma once

#include "stdafx.h"
#include <windows.h>
#include "ChuckyPokerTrainerGUI.h"

using namespace ChuckyPokerTrainer;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew ChuckyPokerTrainerGUI());
	return 0;
}
