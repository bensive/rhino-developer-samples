
/** This sample demonstrates how to create an RDK Material with a custom user interface.

	For an example of how to create a standard user interface, see SampleRdkMaterialStandardUI
	For an example of how to create an automatic user interface, see SampleRdkMaterialAutoUI

*/

#include "stdafx.h"
#include "SampleRdkMaterialCustomUIApp.h"

//	Note!
//
//    A Rhino plug-in is an MFC DLL.
//
//		If this DLL is dynamically linked against the MFC
//		DLLs, any functions exported from this DLL which
//		call into MFC must have the AFX_MANAGE_STATE macro
//		added at the very beginning of the function.
//
//		For example:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// normal function body here
//		}
//
//		It is very important that this macro appear in each
//		function, prior to any calls into MFC.  This means that
//		it must appear as the first statement within the 
//		function, even before any object variable declarations
//		as their constructors may generate calls into the MFC
//		DLL.
//
//		Please see MFC Technical Notes 33 and 58 for additional
//		details.
//

// CSampleRdkMaterialCustomUIApp

BEGIN_MESSAGE_MAP(CSampleRdkMaterialCustomUIApp, CWinApp)
END_MESSAGE_MAP()

// The one and only CSampleRdkMaterialCustomUIApp object
CSampleRdkMaterialCustomUIApp theApp;

// CSampleRdkMaterialCustomUIApp initialization

BOOL CSampleRdkMaterialCustomUIApp::InitInstance()
{
  // CRITICAL: DO NOT CALL RHINO SDK FUNCTIONS HERE!
  // Only standard MFC DLL instance initialization belongs here. 
  // All other significant initialization should take place in
  // CSampleRdkMaterialCustomUIPlugIn::OnLoadPlugIn().

	CWinApp::InitInstance();

	return TRUE;
}

int CSampleRdkMaterialCustomUIApp::ExitInstance()
{
  // CRITICAL: DO NOT CALL RHINO SDK FUNCTIONS HERE!
  // Only standard MFC DLL instance clean up belongs here. 
  // All other significant cleanup should take place in either
  // CSampleRdkMaterialCustomUIPlugIn::OnSaveAllSettings() or
  // CSampleRdkMaterialCustomUIPlugIn::OnUnloadPlugIn().
  return CWinApp::ExitInstance();
}
