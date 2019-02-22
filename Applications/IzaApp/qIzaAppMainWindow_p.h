/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file LICENSE.  */

#ifndef __qIzaAppMainWindow_p_h
#define __qIzaAppMainWindow_p_h

// Iza includes
#include "qIzaAppMainWindow.h"

// Slicer includes
#include "qSlicerMainWindow_p.h"

//-----------------------------------------------------------------------------
class Q_IZA_APP_EXPORT qIzaAppMainWindowPrivate
  : public qSlicerMainWindowPrivate
{
  Q_DECLARE_PUBLIC(qIzaAppMainWindow);
public:
  typedef qSlicerMainWindowPrivate Superclass;
  qIzaAppMainWindowPrivate(qIzaAppMainWindow& object);
  virtual ~qIzaAppMainWindowPrivate();

  virtual void init();
  /// Reimplemented for custom behavior
  virtual void setupUi(QMainWindow * mainWindow);
};

#endif
