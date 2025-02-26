
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2025 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQHoverEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QHoverEvent>
#include <QEventPoint>
#include <QInputDevice>
#include <QObject>
#include <QPoint>
#include <QPointF>
#include <QPointingDevice>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QHoverEvent

// bool QHoverEvent::isUpdateEvent()


static void _init_f_isUpdateEvent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isUpdateEvent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QHoverEvent *)cls)->isUpdateEvent ());
}


// QPoint QHoverEvent::oldPos()


static void _init_f_oldPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_oldPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QHoverEvent *)cls)->oldPos ());
}


// QPointF QHoverEvent::oldPosF()


static void _init_f_oldPosF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_oldPosF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QHoverEvent *)cls)->oldPosF ());
}


// QPoint QHoverEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QHoverEvent *)cls)->pos ());
}


// QPointF QHoverEvent::posF()


static void _init_f_posF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_posF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QHoverEvent *)cls)->posF ());
}


namespace gsi
{

static gsi::Methods methods_QHoverEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("isUpdateEvent?", "@brief Method bool QHoverEvent::isUpdateEvent()\nThis is a reimplementation of QSinglePointEvent::isUpdateEvent", true, &_init_f_isUpdateEvent_c0, &_call_f_isUpdateEvent_c0);
  methods += new qt_gsi::GenericMethod ("oldPos", "@brief Method QPoint QHoverEvent::oldPos()\n", true, &_init_f_oldPos_c0, &_call_f_oldPos_c0);
  methods += new qt_gsi::GenericMethod ("oldPosF", "@brief Method QPointF QHoverEvent::oldPosF()\n", true, &_init_f_oldPosF_c0, &_call_f_oldPosF_c0);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method QPoint QHoverEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod ("posF", "@brief Method QPointF QHoverEvent::posF()\n", true, &_init_f_posF_c0, &_call_f_posF_c0);
  return methods;
}

gsi::Class<QSinglePointEvent> &qtdecl_QSinglePointEvent ();

gsi::Class<QHoverEvent> decl_QHoverEvent (qtdecl_QSinglePointEvent (), "QtGui", "QHoverEvent_Native",
  methods_QHoverEvent (),
  "@hide\n@alias QHoverEvent");

GSI_QTGUI_PUBLIC gsi::Class<QHoverEvent> &qtdecl_QHoverEvent () { return decl_QHoverEvent; }

}


class QHoverEvent_Adaptor : public QHoverEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QHoverEvent_Adaptor();

  //  [adaptor ctor] QHoverEvent::QHoverEvent(QEvent::Type type, const QPointF &pos, const QPointF &oldPos, QFlags<Qt::KeyboardModifier> modifiers, const QPointingDevice *device)
  QHoverEvent_Adaptor(QEvent::Type type, const QPointF &pos, const QPointF &oldPos) : QHoverEvent(type, pos, oldPos)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QHoverEvent::QHoverEvent(QEvent::Type type, const QPointF &pos, const QPointF &oldPos, QFlags<Qt::KeyboardModifier> modifiers, const QPointingDevice *device)
  QHoverEvent_Adaptor(QEvent::Type type, const QPointF &pos, const QPointF &oldPos, QFlags<Qt::KeyboardModifier> modifiers) : QHoverEvent(type, pos, oldPos, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QHoverEvent::QHoverEvent(QEvent::Type type, const QPointF &pos, const QPointF &oldPos, QFlags<Qt::KeyboardModifier> modifiers, const QPointingDevice *device)
  QHoverEvent_Adaptor(QEvent::Type type, const QPointF &pos, const QPointF &oldPos, QFlags<Qt::KeyboardModifier> modifiers, const QPointingDevice *device) : QHoverEvent(type, pos, oldPos, modifiers, device)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] bool QHoverEvent::isBeginEvent()
  bool cbs_isBeginEvent_c0_0() const
  {
    return QHoverEvent::isBeginEvent();
  }

  virtual bool isBeginEvent() const
  {
    if (cb_isBeginEvent_c0_0.can_issue()) {
      return cb_isBeginEvent_c0_0.issue<QHoverEvent_Adaptor, bool>(&QHoverEvent_Adaptor::cbs_isBeginEvent_c0_0);
    } else {
      return QHoverEvent::isBeginEvent();
    }
  }

  //  [adaptor impl] bool QHoverEvent::isEndEvent()
  bool cbs_isEndEvent_c0_0() const
  {
    return QHoverEvent::isEndEvent();
  }

  virtual bool isEndEvent() const
  {
    if (cb_isEndEvent_c0_0.can_issue()) {
      return cb_isEndEvent_c0_0.issue<QHoverEvent_Adaptor, bool>(&QHoverEvent_Adaptor::cbs_isEndEvent_c0_0);
    } else {
      return QHoverEvent::isEndEvent();
    }
  }

  //  [adaptor impl] bool QHoverEvent::isUpdateEvent()
  bool cbs_isUpdateEvent_c0_0() const
  {
    return QHoverEvent::isUpdateEvent();
  }

  virtual bool isUpdateEvent() const
  {
    if (cb_isUpdateEvent_c0_0.can_issue()) {
      return cb_isUpdateEvent_c0_0.issue<QHoverEvent_Adaptor, bool>(&QHoverEvent_Adaptor::cbs_isUpdateEvent_c0_0);
    } else {
      return QHoverEvent::isUpdateEvent();
    }
  }

  //  [adaptor impl] void QHoverEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QHoverEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QHoverEvent_Adaptor, bool>(&QHoverEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QHoverEvent::setAccepted(accepted);
    }
  }

  //  [adaptor impl] void QHoverEvent::setTimestamp(quint64 timestamp)
  void cbs_setTimestamp_1103_0(quint64 timestamp)
  {
    QHoverEvent::setTimestamp(timestamp);
  }

  virtual void setTimestamp(quint64 timestamp)
  {
    if (cb_setTimestamp_1103_0.can_issue()) {
      cb_setTimestamp_1103_0.issue<QHoverEvent_Adaptor, quint64>(&QHoverEvent_Adaptor::cbs_setTimestamp_1103_0, timestamp);
    } else {
      QHoverEvent::setTimestamp(timestamp);
    }
  }

  gsi::Callback cb_isBeginEvent_c0_0;
  gsi::Callback cb_isEndEvent_c0_0;
  gsi::Callback cb_isUpdateEvent_c0_0;
  gsi::Callback cb_setAccepted_864_0;
  gsi::Callback cb_setTimestamp_1103_0;
};

QHoverEvent_Adaptor::~QHoverEvent_Adaptor() { }

//  Constructor QHoverEvent::QHoverEvent(QEvent::Type type, const QPointF &pos, const QPointF &oldPos, QFlags<Qt::KeyboardModifier> modifiers, const QPointingDevice *device) (adaptor class)

static void _init_ctor_QHoverEvent_Adaptor_11012 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pos");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("oldPos");
  decl->add_arg<const QPointF & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("modifiers", true, "Qt::NoModifier");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("device", true, "QPointingDevice::primaryPointingDevice()");
  decl->add_arg<const QPointingDevice * > (argspec_4);
  decl->set_return_new<QHoverEvent_Adaptor> ();
}

static void _call_ctor_QHoverEvent_Adaptor_11012 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg3 = gsi::arg_reader<const QPointF & >() (args, heap);
  QFlags<Qt::KeyboardModifier> arg4 = args ? gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap) : gsi::arg_maker<QFlags<Qt::KeyboardModifier> >() (Qt::NoModifier, heap);
  const QPointingDevice *arg5 = args ? gsi::arg_reader<const QPointingDevice * >() (args, heap) : gsi::arg_maker<const QPointingDevice * >() (QPointingDevice::primaryPointingDevice(), heap);
  ret.write<QHoverEvent_Adaptor *> (new QHoverEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2, arg3, arg4, arg5));
}


// bool QHoverEvent::isBeginEvent()

static void _init_cbs_isBeginEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isBeginEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QHoverEvent_Adaptor *)cls)->cbs_isBeginEvent_c0_0 ());
}

static void _set_callback_cbs_isBeginEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QHoverEvent_Adaptor *)cls)->cb_isBeginEvent_c0_0 = cb;
}


// bool QHoverEvent::isEndEvent()

static void _init_cbs_isEndEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isEndEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QHoverEvent_Adaptor *)cls)->cbs_isEndEvent_c0_0 ());
}

static void _set_callback_cbs_isEndEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QHoverEvent_Adaptor *)cls)->cb_isEndEvent_c0_0 = cb;
}


// bool QHoverEvent::isUpdateEvent()

static void _init_cbs_isUpdateEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isUpdateEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QHoverEvent_Adaptor *)cls)->cbs_isUpdateEvent_c0_0 ());
}

static void _set_callback_cbs_isUpdateEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QHoverEvent_Adaptor *)cls)->cb_isUpdateEvent_c0_0 = cb;
}


// void QHoverEvent::setAccepted(bool accepted)

static void _init_cbs_setAccepted_864_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setAccepted_864_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHoverEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QHoverEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


// void QHoverEvent::setTimestamp(quint64 timestamp)

static void _init_cbs_setTimestamp_1103_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timestamp");
  decl->add_arg<quint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setTimestamp_1103_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  quint64 arg1 = args.read<quint64 > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHoverEvent_Adaptor *)cls)->cbs_setTimestamp_1103_0 (arg1);
}

static void _set_callback_cbs_setTimestamp_1103_0 (void *cls, const gsi::Callback &cb)
{
  ((QHoverEvent_Adaptor *)cls)->cb_setTimestamp_1103_0 = cb;
}


namespace gsi
{

gsi::Class<QHoverEvent> &qtdecl_QHoverEvent ();

static gsi::Methods methods_QHoverEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHoverEvent::QHoverEvent(QEvent::Type type, const QPointF &pos, const QPointF &oldPos, QFlags<Qt::KeyboardModifier> modifiers, const QPointingDevice *device)\nThis method creates an object of class QHoverEvent.", &_init_ctor_QHoverEvent_Adaptor_11012, &_call_ctor_QHoverEvent_Adaptor_11012);
  methods += new qt_gsi::GenericMethod ("isBeginEvent", "@brief Virtual method bool QHoverEvent::isBeginEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isBeginEvent_c0_0, &_call_cbs_isBeginEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isBeginEvent", "@hide", true, &_init_cbs_isBeginEvent_c0_0, &_call_cbs_isBeginEvent_c0_0, &_set_callback_cbs_isBeginEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isEndEvent", "@brief Virtual method bool QHoverEvent::isEndEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isEndEvent_c0_0, &_call_cbs_isEndEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isEndEvent", "@hide", true, &_init_cbs_isEndEvent_c0_0, &_call_cbs_isEndEvent_c0_0, &_set_callback_cbs_isEndEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent", "@brief Virtual method bool QHoverEvent::isUpdateEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isUpdateEvent_c0_0, &_call_cbs_isUpdateEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent", "@hide", true, &_init_cbs_isUpdateEvent_c0_0, &_call_cbs_isUpdateEvent_c0_0, &_set_callback_cbs_isUpdateEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QHoverEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@brief Virtual method void QHoverEvent::setTimestamp(quint64 timestamp)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@hide", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0, &_set_callback_cbs_setTimestamp_1103_0);
  return methods;
}

gsi::Class<QHoverEvent_Adaptor> decl_QHoverEvent_Adaptor (qtdecl_QHoverEvent (), "QtGui", "QHoverEvent",
  methods_QHoverEvent_Adaptor (),
  "@qt\n@brief Binding of QHoverEvent");

}

