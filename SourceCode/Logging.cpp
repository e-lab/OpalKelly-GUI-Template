/**
 * @file
 * Contains the class that constructs the protocol controls.
 */
#include "Logging.h"


Logging::Logging (wxWindow* owner) : wxPanel (owner)
{
	wxBoxSizer* mysizer = new wxBoxSizer (wxVERTICAL);
	this->SetSizer (mysizer);
	textLog = new wxTextCtrl (this, TEXTBOX1, wxT (""), wxPoint (0, 250), wxSize (100, 50), wxTE_MULTILINE);

	wxLog::SetActiveTarget (new wxLogTextCtrl (textLog));

	mysizer->Add (textLog, 1, wxEXPAND | wxALL, 5);
}

Logging::~Logging()
{
	delete textLog;
	textLog = (wxTextCtrl*) NULL;
}
