#pragma once

#include "FileSerializer.hpp"
#include <wx/wx.h>

class MainWindow : public wxFrame {
public:
  MainWindow();
  ~MainWindow();

private:
  void OnSave(wxCommandEvent &event);
  void OnOpen(wxCommandEvent &event);
  void OnAbout(wxCommandEvent &event);
  void OnExit(wxCommandEvent &event);

  void UpdatePresence(wxCommandEvent &event);
  void LaunchPresence(wxCommandEvent &event);

  wxTextCtrl **m_textFields;

  wxDECLARE_EVENT_TABLE();
};
