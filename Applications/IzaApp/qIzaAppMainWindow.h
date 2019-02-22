/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file LICENSE.  */

#ifndef __qIzaAppMainWindow_h
#define __qIzaAppMainWindow_h

// Iza includes
#include "qIzaAppExport.h"
class qIzaAppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_IZA_APP_EXPORT qIzaAppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qIzaAppMainWindow(QWidget *parent=0);
  virtual ~qIzaAppMainWindow();

public:
  virtual void show();

public slots:
  void on_HelpAboutIzaAppAction_triggered();

protected:
  qIzaAppMainWindow(qIzaAppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qIzaAppMainWindow);
  Q_DISABLE_COPY(qIzaAppMainWindow);
};

#endif
