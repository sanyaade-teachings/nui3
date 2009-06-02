/*
  NUI3 - C++ cross-platform GUI framework for OpenGL based applications
  Copyright (C) 2002-2003 Sebastien Metrot

  licence: see nui3/LICENCE.TXT
*/

#ifndef __nuiModalConatiner_h__
#define __nuiModalConatiner_h__

//#include "nui.h"
#include "nuiContainer.h"

class NUI_API nuiModalContainer : public nuiSimpleContainer
{
  friend class nuiWidget;
public:
  nuiModalContainer(nuiContainerPtr pParent=NULL);
  virtual bool Load(const nuiXMLNode* pNode);
  virtual ~nuiModalContainer();

  virtual void InitParent(nuiContainerPtr pParent); ///< retrieves nuiTopLevel from pParent, and adds this nuiModalContainer to its Children

  void SetModal(bool enable_modal=true);

  virtual bool DispatchMouseClick(const nglMouseInfo& rInfo);
  virtual bool DispatchMouseUnclick(const nglMouseInfo& rInfo);
  virtual nuiWidgetPtr DispatchMouseMove(const nglMouseInfo& rInfo);
  
  virtual bool DispatchTextInput(const nglString& rUnicodeText);
  virtual bool DispatchKeyDown(const nglKeyEvent& rEvent);
  virtual bool DispatchKeyUp(const nglKeyEvent& rEvent);

  void DoModal();
  void ExitModal();
  virtual void OnTrash();
  
private:
  bool mIsModal;
  bool mInModalState;
  nuiWidget* mpPreviousFocus;
  nuiEventSink<nuiModalContainer> mModalEventSink;
  bool OnPreviousFocusTrashed(const nuiEvent& rEvent);
};

void Alert(nuiContainer* pParent, const nglString& rTitle, const nglString& rMessage);

#endif // __nuiModalConatiner_h__
