
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicComboBoxRenderer__
#define __javax_swing_plaf_basic_BasicComboBoxRenderer__

#pragma interface

#include <javax/swing/JLabel.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Dimension;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class JList;
      namespace border
      {
          class Border;
      }
      namespace plaf
      {
        namespace basic
        {
            class BasicComboBoxRenderer;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicComboBoxRenderer : public ::javax::swing::JLabel
{

public:
  BasicComboBoxRenderer();
  virtual ::java::awt::Dimension * getPreferredSize();
  virtual ::java::awt::Component * getListCellRendererComponent(::javax::swing::JList *, ::java::lang::Object *, jint, jboolean, jboolean);
public: // actually protected
  static ::javax::swing::border::Border * noFocusBorder;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicComboBoxRenderer__
