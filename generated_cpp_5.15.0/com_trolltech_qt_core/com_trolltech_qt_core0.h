#include <PythonQt.h>
#include <PythonQtConversion.h>
#include <QObject>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemmodel.h>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qanimationgroup.h>
#include <qbuffer.h>
#include <qbytearraymatcher.h>
#include <qcommandlineparser.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcryptographichash.h>
#include <qdatastream.h>
#include <qdiriterator.h>
#include <qevent.h>
#include <qeventloop.h>
#include <qeventtransition.h>
#include <qfactoryinterface.h>
#include <qfile.h>
#include <qfiledevice.h>
#include <qfileselector.h>
#include <qfilesystemwatcher.h>
#include <qfinalstate.h>
#include <qhistorystate.h>
#include <qidentityproxymodel.h>
#include <qiodevice.h>
#include <qitemselectionmodel.h>
#include <qjsondocument.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qtranslator.h>
#include <qurl.h>



class PythonQtShell_QAbstractAnimation : public QAbstractAnimation
{
public:
    PythonQtShell_QAbstractAnimation(QObject*  parent = nullptr):QAbstractAnimation(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractAnimation();

virtual int  duration() const;
virtual bool  event(QEvent*  event);
virtual void updateCurrentTime(int  currentTime);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractAnimation : public QAbstractAnimation
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_updateCurrentTime(int  currentTime) { this->updateCurrentTime(currentTime); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { this->updateDirection(direction); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline int  py_q_duration() const { return this->duration(); }
inline bool  py_q_event(QEvent*  event) { return QAbstractAnimation::event(event); }
inline void py_q_updateCurrentTime(int  currentTime) { this->updateCurrentTime(currentTime); }
inline void py_q_updateDirection(QAbstractAnimation::Direction  direction) { QAbstractAnimation::updateDirection(direction); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QAbstractAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QAbstractAnimation : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DeletionPolicy )
enum DeletionPolicy{
  KeepWhenStopped = QAbstractAnimation::KeepWhenStopped,   DeleteWhenStopped = QAbstractAnimation::DeleteWhenStopped};
public slots:
QAbstractAnimation* new_QAbstractAnimation(QObject*  parent = nullptr);
void delete_QAbstractAnimation(QAbstractAnimation* obj) { delete obj; } 
   int  currentLoop(QAbstractAnimation* theWrappedObject) const;
   int  currentLoopTime(QAbstractAnimation* theWrappedObject) const;
   int  currentTime(QAbstractAnimation* theWrappedObject) const;
   QAbstractAnimation::Direction  direction(QAbstractAnimation* theWrappedObject) const;
   int  duration(QAbstractAnimation* theWrappedObject) const;
   int  py_q_duration(QAbstractAnimation* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->py_q_duration());}
   bool  event(QAbstractAnimation* theWrappedObject, QEvent*  event);
   bool  py_q_event(QAbstractAnimation* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->py_q_event(event));}
   QAnimationGroup*  group(QAbstractAnimation* theWrappedObject) const;
   int  loopCount(QAbstractAnimation* theWrappedObject) const;
   void setDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction);
   void setLoopCount(QAbstractAnimation* theWrappedObject, int  loopCount);
   QAbstractAnimation::State  state(QAbstractAnimation* theWrappedObject) const;
   int  totalDuration(QAbstractAnimation* theWrappedObject) const;
   void updateCurrentTime(QAbstractAnimation* theWrappedObject, int  currentTime);
   void py_q_updateCurrentTime(QAbstractAnimation* theWrappedObject, int  currentTime){  (((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->py_q_updateCurrentTime(currentTime));}
   void updateDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction);
   void py_q_updateDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction){  (((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->py_q_updateDirection(direction));}
   void updateState(QAbstractAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
   void py_q_updateState(QAbstractAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtShell_QAbstractItemModel : public QAbstractItemModel
{
public:
    PythonQtShell_QAbstractItemModel(QObject*  parent = nullptr):QAbstractItemModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractItemModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual void fetchMore(const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QStringList  mimeTypes() const;
virtual bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual QModelIndex  parent(const QModelIndex&  child) const;
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void revert();
virtual QHash<int , QByteArray >  roleNames() const;
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDragActions() const;
virtual Qt::DropActions  supportedDropActions() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractItemModel : public QAbstractItemModel
{ public:
inline void promoted_beginInsertColumns(const QModelIndex&  parent, int  first, int  last) { this->beginInsertColumns(parent, first, last); }
inline void promoted_beginInsertRows(const QModelIndex&  parent, int  first, int  last) { this->beginInsertRows(parent, first, last); }
inline bool  promoted_beginMoveColumns(const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationColumn) { return this->beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn); }
inline bool  promoted_beginMoveRows(const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationRow) { return this->beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow); }
inline void promoted_beginRemoveColumns(const QModelIndex&  parent, int  first, int  last) { this->beginRemoveColumns(parent, first, last); }
inline void promoted_beginRemoveRows(const QModelIndex&  parent, int  first, int  last) { this->beginRemoveRows(parent, first, last); }
inline void promoted_beginResetModel() { this->beginResetModel(); }
inline void promoted_changePersistentIndex(const QModelIndex&  from, const QModelIndex&  to) { this->changePersistentIndex(from, to); }
inline void promoted_changePersistentIndexList(const QList<QModelIndex >&  from, const QList<QModelIndex >&  to) { this->changePersistentIndexList(from, to); }
inline QModelIndex  promoted_createIndex(int  row, int  column, quintptr  id) const { return this->createIndex(row, column, id); }
inline QModelIndex  promoted_createIndex(int  row, int  column, void*  data = nullptr) const { return this->createIndex(row, column, data); }
inline bool  promoted_decodeData(int  row, int  column, const QModelIndex&  parent, QDataStream&  stream) { return this->decodeData(row, column, parent, stream); }
inline void promoted_encodeData(const QList<QModelIndex >&  indexes, QDataStream&  stream) const { this->encodeData(indexes, stream); }
inline void promoted_endInsertColumns() { this->endInsertColumns(); }
inline void promoted_endInsertRows() { this->endInsertRows(); }
inline void promoted_endMoveColumns() { this->endMoveColumns(); }
inline void promoted_endMoveRows() { this->endMoveRows(); }
inline void promoted_endRemoveColumns() { this->endRemoveColumns(); }
inline void promoted_endRemoveRows() { this->endRemoveRows(); }
inline void promoted_endResetModel() { this->endResetModel(); }
inline QList<QModelIndex >  promoted_persistentIndexList() const { return this->persistentIndexList(); }
inline void promoted_resetInternalData() { this->resetInternalData(); }
inline QModelIndex  py_q_buddy(const QModelIndex&  index) const { return QAbstractItemModel::buddy(index); }
inline bool  py_q_canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const { return QAbstractItemModel::canDropMimeData(data, action, row, column, parent); }
inline bool  py_q_canFetchMore(const QModelIndex&  parent) const { return QAbstractItemModel::canFetchMore(parent); }
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return this->columnCount(parent); }
inline QVariant  py_q_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return this->data(index, role); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractItemModel::dropMimeData(data, action, row, column, parent); }
inline void py_q_fetchMore(const QModelIndex&  parent) { QAbstractItemModel::fetchMore(parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QAbstractItemModel::flags(index); }
inline bool  py_q_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QAbstractItemModel::hasChildren(parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QAbstractItemModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return this->index(row, column, parent); }
inline bool  py_q_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::insertColumns(column, count, parent); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::insertRows(row, count, parent); }
inline QMap<int , QVariant >  py_q_itemData(const QModelIndex&  index) const { return QAbstractItemModel::itemData(index); }
inline QList<QModelIndex >  py_q_match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { return QAbstractItemModel::match(start, role, value, hits, flags); }
inline QMimeData*  py_q_mimeData(const QList<QModelIndex >&  indexes) const { return QAbstractItemModel::mimeData(indexes); }
inline QStringList  py_q_mimeTypes() const { return QAbstractItemModel::mimeTypes(); }
inline bool  py_q_moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild); }
inline bool  py_q_moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild); }
inline QModelIndex  py_q_parent(const QModelIndex&  child) const { return this->parent(child); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::removeColumns(column, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::removeRows(row, count, parent); }
inline void py_q_revert() { QAbstractItemModel::revert(); }
inline QHash<int , QByteArray >  py_q_roleNames() const { return QAbstractItemModel::roleNames(); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return this->rowCount(parent); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractItemModel::setData(index, value, role); }
inline bool  py_q_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractItemModel::setHeaderData(section, orientation, value, role); }
inline bool  py_q_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QAbstractItemModel::setItemData(index, roles); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QAbstractItemModel::sibling(row, column, idx); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QAbstractItemModel::sort(column, order); }
inline QSize  py_q_span(const QModelIndex&  index) const { return QAbstractItemModel::span(index); }
inline bool  py_q_submit() { return QAbstractItemModel::submit(); }
inline Qt::DropActions  py_q_supportedDragActions() const { return QAbstractItemModel::supportedDragActions(); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QAbstractItemModel::supportedDropActions(); }
};

class PythonQtWrapper_QAbstractItemModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractItemModel* new_QAbstractItemModel(QObject*  parent = nullptr);
void delete_QAbstractItemModel(QAbstractItemModel* obj) { delete obj; } 
   void beginInsertColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginInsertRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   bool  beginMoveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationColumn);
   bool  beginMoveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationRow);
   void beginRemoveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginRemoveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginResetModel(QAbstractItemModel* theWrappedObject);
   QModelIndex  buddy(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   QModelIndex  py_q_buddy(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_buddy(index));}
   bool  canDropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
   bool  py_q_canDropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_canDropMimeData(data, action, row, column, parent));}
   bool  canFetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const;
   bool  py_q_canFetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_canFetchMore(parent));}
   void changePersistentIndex(QAbstractItemModel* theWrappedObject, const QModelIndex&  from, const QModelIndex&  to);
   void changePersistentIndexList(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  from, const QList<QModelIndex >&  to);
   int  columnCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   int  py_q_columnCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_columnCount(parent));}
   QModelIndex  createIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, quintptr  id) const;
   QModelIndex  createIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, void*  data = nullptr) const;
   QVariant  data(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const;
   QVariant  py_q_data(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_data(index, role));}
   bool  decodeData(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent, QDataStream&  stream);
   bool  dropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
   bool  py_q_dropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   void encodeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes, QDataStream&  stream) const;
   void endInsertColumns(QAbstractItemModel* theWrappedObject);
   void endInsertRows(QAbstractItemModel* theWrappedObject);
   void endMoveColumns(QAbstractItemModel* theWrappedObject);
   void endMoveRows(QAbstractItemModel* theWrappedObject);
   void endRemoveColumns(QAbstractItemModel* theWrappedObject);
   void endRemoveRows(QAbstractItemModel* theWrappedObject);
   void endResetModel(QAbstractItemModel* theWrappedObject);
   void fetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent);
   void py_q_fetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent){  (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_fetchMore(parent));}
   Qt::ItemFlags  flags(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   Qt::ItemFlags  py_q_flags(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_flags(index));}
   bool  hasChildren(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   bool  py_q_hasChildren(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_hasChildren(parent));}
   bool  hasIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   QVariant  headerData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
   QVariant  py_q_headerData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QModelIndex  index(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   QModelIndex  py_q_index(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_index(row, column, parent));}
   bool  insertColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex());
   bool  insertColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  py_q_insertColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_insertColumns(column, count, parent));}
   bool  insertRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex());
   bool  insertRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   bool  py_q_insertRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   QMap<int , QVariant >  itemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   QMap<int , QVariant >  py_q_itemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_itemData(index));}
   QList<QModelIndex >  match(QAbstractItemModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
   QList<QModelIndex >  py_q_match(QAbstractItemModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_match(start, role, value, hits, flags));}
   PythonQtPassOwnershipToPython<QMimeData*  > mimeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const;
   PythonQtPassOwnershipToPython<QMimeData*  > py_q_mimeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_mimeData(indexes));}
   QStringList  mimeTypes(QAbstractItemModel* theWrappedObject) const;
   QStringList  py_q_mimeTypes(QAbstractItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_mimeTypes());}
   bool  moveColumn(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, const QModelIndex&  destinationParent, int  destinationChild);
   bool  moveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
   bool  py_q_moveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild));}
   bool  moveRow(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, const QModelIndex&  destinationParent, int  destinationChild);
   bool  moveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
   bool  py_q_moveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild));}
   QModelIndex  parent(QAbstractItemModel* theWrappedObject, const QModelIndex&  child) const;
   QModelIndex  py_q_parent(QAbstractItemModel* theWrappedObject, const QModelIndex&  child) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_parent(child));}
   QList<QModelIndex >  persistentIndexList(QAbstractItemModel* theWrappedObject) const;
   bool  removeColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex());
   bool  removeColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  py_q_removeColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   bool  removeRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex());
   bool  removeRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   bool  py_q_removeRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   void py_q_revert(QAbstractItemModel* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_revert());}
   QHash<int , QByteArray >  roleNames(QAbstractItemModel* theWrappedObject) const;
   QHash<int , QByteArray >  py_q_roleNames(QAbstractItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_roleNames());}
   int  rowCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   int  py_q_rowCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_rowCount(parent));}
   bool  setData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
   bool  py_q_setData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_setData(index, value, role));}
   bool  setHeaderData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
   bool  py_q_setHeaderData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_setHeaderData(section, orientation, value, role));}
   bool  setItemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles);
   bool  py_q_setItemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_setItemData(index, roles));}
   QModelIndex  sibling(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const;
   QModelIndex  py_q_sibling(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
   void sort(QAbstractItemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   void py_q_sort(QAbstractItemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_sort(column, order));}
   QSize  span(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   QSize  py_q_span(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_span(index));}
   bool  py_q_submit(QAbstractItemModel* theWrappedObject){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_submit());}
   Qt::DropActions  supportedDragActions(QAbstractItemModel* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDragActions(QAbstractItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_supportedDragActions());}
   Qt::DropActions  supportedDropActions(QAbstractItemModel* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QAbstractItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_supportedDropActions());}
};





class PythonQtShell_QAbstractListModel : public QAbstractListModel
{
public:
    PythonQtShell_QAbstractListModel(QObject*  parent = nullptr):QAbstractListModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractListModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual void fetchMore(const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual QModelIndex  index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QStringList  mimeTypes() const;
virtual bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void revert();
virtual QHash<int , QByteArray >  roleNames() const;
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDragActions() const;
virtual Qt::DropActions  supportedDropActions() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractListModel : public QAbstractListModel
{ public:
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractListModel::dropMimeData(data, action, row, column, parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QAbstractListModel::flags(index); }
inline QModelIndex  py_q_index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const { return QAbstractListModel::index(row, column, parent); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QAbstractListModel::sibling(row, column, idx); }
};

class PythonQtWrapper_QAbstractListModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractListModel* new_QAbstractListModel(QObject*  parent = nullptr);
void delete_QAbstractListModel(QAbstractListModel* obj) { delete obj; } 
   bool  py_q_dropMimeData(QAbstractListModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   Qt::ItemFlags  py_q_flags(QAbstractListModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_flags(index));}
   QModelIndex  py_q_index(QAbstractListModel* theWrappedObject, int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_index(row, column, parent));}
   QModelIndex  py_q_sibling(QAbstractListModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
};





class PythonQtShell_QAbstractState : public QAbstractState
{
public:
    PythonQtShell_QAbstractState(QState*  parent = nullptr):QAbstractState(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractState();

virtual bool  event(QEvent*  e);
virtual void onEntry(QEvent*  event);
virtual void onExit(QEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractState : public QAbstractState
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_onEntry(QEvent*  event) { this->onEntry(event); }
inline void promoted_onExit(QEvent*  event) { this->onExit(event); }
inline bool  py_q_event(QEvent*  e) { return QAbstractState::event(e); }
inline void py_q_onEntry(QEvent*  event) { this->onEntry(event); }
inline void py_q_onExit(QEvent*  event) { this->onExit(event); }
};

class PythonQtWrapper_QAbstractState : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractState* new_QAbstractState(QState*  parent = nullptr);
void delete_QAbstractState(QAbstractState* obj) { delete obj; } 
   bool  active(QAbstractState* theWrappedObject) const;
   bool  event(QAbstractState* theWrappedObject, QEvent*  e);
   bool  py_q_event(QAbstractState* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QAbstractState*)theWrappedObject)->py_q_event(e));}
   QStateMachine*  machine(QAbstractState* theWrappedObject) const;
   void onEntry(QAbstractState* theWrappedObject, QEvent*  event);
   void py_q_onEntry(QAbstractState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QAbstractState*)theWrappedObject)->py_q_onEntry(event));}
   void onExit(QAbstractState* theWrappedObject, QEvent*  event);
   void py_q_onExit(QAbstractState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QAbstractState*)theWrappedObject)->py_q_onExit(event));}
   QState*  parentState(QAbstractState* theWrappedObject) const;
};





class PythonQtShell_QAbstractTransition : public QAbstractTransition
{
public:
    PythonQtShell_QAbstractTransition(QState*  sourceState = nullptr):QAbstractTransition(sourceState),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractTransition();

virtual bool  event(QEvent*  e);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractTransition : public QAbstractTransition
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  promoted_eventTest(QEvent*  event) { return this->eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { this->onTransition(event); }
inline bool  py_q_event(QEvent*  e) { return QAbstractTransition::event(e); }
inline bool  py_q_eventTest(QEvent*  event) { return this->eventTest(event); }
inline void py_q_onTransition(QEvent*  event) { this->onTransition(event); }
};

class PythonQtWrapper_QAbstractTransition : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTransition* new_QAbstractTransition(QState*  sourceState = nullptr);
void delete_QAbstractTransition(QAbstractTransition* obj) { delete obj; } 
   void addAnimation(QAbstractTransition* theWrappedObject, QAbstractAnimation*  animation);
   QList<QAbstractAnimation* >  animations(QAbstractTransition* theWrappedObject) const;
   bool  event(QAbstractTransition* theWrappedObject, QEvent*  e);
   bool  py_q_event(QAbstractTransition* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QAbstractTransition*)theWrappedObject)->py_q_event(e));}
   bool  eventTest(QAbstractTransition* theWrappedObject, QEvent*  event);
   bool  py_q_eventTest(QAbstractTransition* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QAbstractTransition*)theWrappedObject)->py_q_eventTest(event));}
   QStateMachine*  machine(QAbstractTransition* theWrappedObject) const;
   void onTransition(QAbstractTransition* theWrappedObject, QEvent*  event);
   void py_q_onTransition(QAbstractTransition* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QAbstractTransition*)theWrappedObject)->py_q_onTransition(event));}
   void removeAnimation(QAbstractTransition* theWrappedObject, QAbstractAnimation*  animation);
   void setTargetState(QAbstractTransition* theWrappedObject, QAbstractState*  target);
   void setTargetStates(QAbstractTransition* theWrappedObject, const QList<QAbstractState* >&  targets);
   void setTransitionType(QAbstractTransition* theWrappedObject, QAbstractTransition::TransitionType  type);
   QState*  sourceState(QAbstractTransition* theWrappedObject) const;
   QAbstractState*  targetState(QAbstractTransition* theWrappedObject) const;
   QList<QAbstractState* >  targetStates(QAbstractTransition* theWrappedObject) const;
   QAbstractTransition::TransitionType  transitionType(QAbstractTransition* theWrappedObject) const;
};





class PythonQtShell_QAnimationGroup : public QAnimationGroup
{
public:
    PythonQtShell_QAnimationGroup(QObject*  parent = nullptr):QAnimationGroup(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAnimationGroup();

virtual int  duration() const;
virtual bool  event(QEvent*  event);
virtual void updateCurrentTime(int  currentTime);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAnimationGroup : public QAnimationGroup
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  py_q_event(QEvent*  event) { return QAnimationGroup::event(event); }
};

class PythonQtWrapper_QAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QAnimationGroup* new_QAnimationGroup(QObject*  parent = nullptr);
void delete_QAnimationGroup(QAnimationGroup* obj) { delete obj; } 
   void addAnimation(QAnimationGroup* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractAnimation* >  animation);
   QAbstractAnimation*  animationAt(QAnimationGroup* theWrappedObject, int  index) const;
   int  animationCount(QAnimationGroup* theWrappedObject) const;
   void clear(QAnimationGroup* theWrappedObject);
   bool  py_q_event(QAnimationGroup* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QAnimationGroup*)theWrappedObject)->py_q_event(event));}
   int  indexOfAnimation(QAnimationGroup* theWrappedObject, QAbstractAnimation*  animation) const;
   void insertAnimation(QAnimationGroup* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QAbstractAnimation* >  animation);
   void removeAnimation(QAnimationGroup* theWrappedObject, PythonQtPassOwnershipToPython<QAbstractAnimation* >  animation);
   PythonQtPassOwnershipToPython<QAbstractAnimation*  > takeAnimation(QAnimationGroup* theWrappedObject, int  index);
};





class PythonQtWrapper_QApplicationStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QApplicationStateChangeEvent* new_QApplicationStateChangeEvent(Qt::ApplicationState  state);
void delete_QApplicationStateChangeEvent(QApplicationStateChangeEvent* obj) { delete obj; } 
   Qt::ApplicationState  applicationState(QApplicationStateChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QBuffer : public QBuffer
{
public:
    PythonQtShell_QBuffer(QByteArray*  buf, QObject*  parent = nullptr):QBuffer(buf, parent),_wrapper(NULL) {};
    PythonQtShell_QBuffer(QObject*  parent = nullptr):QBuffer(parent),_wrapper(NULL) {};

   ~PythonQtShell_QBuffer();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void close();
virtual void connectNotify(const QMetaMethod&  arg__1);
virtual void disconnectNotify(const QMetaMethod&  arg__1);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  openMode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  off);
virtual qint64  size() const;
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QBuffer : public QBuffer
{ public:
inline void promoted_connectNotify(const QMetaMethod&  arg__1) { this->connectNotify(arg__1); }
inline void promoted_disconnectNotify(const QMetaMethod&  arg__1) { this->disconnectNotify(arg__1); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QBuffer::atEnd(); }
inline bool  py_q_canReadLine() const { return QBuffer::canReadLine(); }
inline void py_q_close() { QBuffer::close(); }
inline void py_q_connectNotify(const QMetaMethod&  arg__1) { QBuffer::connectNotify(arg__1); }
inline void py_q_disconnectNotify(const QMetaMethod&  arg__1) { QBuffer::disconnectNotify(arg__1); }
inline bool  py_q_open(QIODevice::OpenMode  openMode) { return QBuffer::open(openMode); }
inline qint64  py_q_pos() const { return QBuffer::pos(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return QBuffer::readData(data, maxlen); }
inline bool  py_q_seek(qint64  off) { return QBuffer::seek(off); }
inline qint64  py_q_size() const { return QBuffer::size(); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QBuffer::writeData(data, len); }
};

class PythonQtWrapper_QBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QBuffer* new_QBuffer(QByteArray*  buf, QObject*  parent = nullptr);
QBuffer* new_QBuffer(QObject*  parent = nullptr);
void delete_QBuffer(QBuffer* obj) { delete obj; } 
   bool  py_q_atEnd(QBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_atEnd());}
   const QByteArray*  buffer(QBuffer* theWrappedObject) const;
   bool  py_q_canReadLine(QBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_canReadLine());}
   void py_q_close(QBuffer* theWrappedObject){  (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_close());}
   void connectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1);
   void py_q_connectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1){  (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_connectNotify(arg__1));}
   const QByteArray*  data(QBuffer* theWrappedObject) const;
   void disconnectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1);
   void py_q_disconnectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1){  (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_disconnectNotify(arg__1));}
   bool  py_q_open(QBuffer* theWrappedObject, QIODevice::OpenMode  openMode){  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_open(openMode));}
   qint64  py_q_pos(QBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_pos());}
   qint64  py_q_readData(QBuffer* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_readData(data, maxlen));}
   bool  py_q_seek(QBuffer* theWrappedObject, qint64  off){  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_seek(off));}
   void setBuffer(QBuffer* theWrappedObject, QByteArray*  a);
   void setData(QBuffer* theWrappedObject, const QByteArray&  data);
   qint64  py_q_size(QBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_size());}
   qint64  py_q_writeData(QBuffer* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtWrapper_QByteArrayMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QByteArrayMatcher* new_QByteArrayMatcher();
QByteArrayMatcher* new_QByteArrayMatcher(const QByteArray&  pattern);
QByteArrayMatcher* new_QByteArrayMatcher(const QByteArrayMatcher&  other);
QByteArrayMatcher* new_QByteArrayMatcher(const char*  pattern, int  length);
void delete_QByteArrayMatcher(QByteArrayMatcher* obj) { delete obj; } 
   int  indexIn(QByteArrayMatcher* theWrappedObject, const QByteArray&  ba, int  from = 0) const;
   int  indexIn(QByteArrayMatcher* theWrappedObject, const char*  str, int  len, int  from = 0) const;
   QByteArray  pattern(QByteArrayMatcher* theWrappedObject) const;
   void setPattern(QByteArrayMatcher* theWrappedObject, const QByteArray&  pattern);
};





class PythonQtShell_QChildEvent : public QChildEvent
{
public:
    PythonQtShell_QChildEvent(QEvent::Type  type, QObject*  child):QChildEvent(type, child),_wrapper(NULL) {};

   ~PythonQtShell_QChildEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QChildEvent : public QObject
{ Q_OBJECT
public:
public slots:
QChildEvent* new_QChildEvent(QEvent::Type  type, QObject*  child);
void delete_QChildEvent(QChildEvent* obj) { delete obj; } 
   bool  added(QChildEvent* theWrappedObject) const;
   QObject*  child(QChildEvent* theWrappedObject) const;
   bool  polished(QChildEvent* theWrappedObject) const;
   bool  removed(QChildEvent* theWrappedObject) const;
};





class PythonQtWrapper_QCommandLineParser : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OptionsAfterPositionalArgumentsMode SingleDashWordOptionMode )
enum OptionsAfterPositionalArgumentsMode{
  ParseAsOptions = QCommandLineParser::ParseAsOptions,   ParseAsPositionalArguments = QCommandLineParser::ParseAsPositionalArguments};
enum SingleDashWordOptionMode{
  ParseAsCompactedShortOptions = QCommandLineParser::ParseAsCompactedShortOptions,   ParseAsLongOptions = QCommandLineParser::ParseAsLongOptions};
public slots:
void delete_QCommandLineParser(QCommandLineParser* obj) { delete obj; } 
   QCommandLineOption  addHelpOption(QCommandLineParser* theWrappedObject);
   bool  addOption(QCommandLineParser* theWrappedObject, const QCommandLineOption&  commandLineOption);
   bool  addOptions(QCommandLineParser* theWrappedObject, const QList<QCommandLineOption >&  options);
   void addPositionalArgument(QCommandLineParser* theWrappedObject, const QString&  name, const QString&  description, const QString&  syntax = QString());
   QCommandLineOption  addVersionOption(QCommandLineParser* theWrappedObject);
   QString  applicationDescription(QCommandLineParser* theWrappedObject) const;
   void clearPositionalArguments(QCommandLineParser* theWrappedObject);
   QString  errorText(QCommandLineParser* theWrappedObject) const;
   QString  helpText(QCommandLineParser* theWrappedObject) const;
   bool  isSet(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const;
   bool  isSet(QCommandLineParser* theWrappedObject, const QString&  name) const;
   QStringList  optionNames(QCommandLineParser* theWrappedObject) const;
   bool  parse(QCommandLineParser* theWrappedObject, const QStringList&  arguments);
   QStringList  positionalArguments(QCommandLineParser* theWrappedObject) const;
   void process(QCommandLineParser* theWrappedObject, const QCoreApplication&  app);
   void process(QCommandLineParser* theWrappedObject, const QStringList&  arguments);
   void setApplicationDescription(QCommandLineParser* theWrappedObject, const QString&  description);
   void setOptionsAfterPositionalArgumentsMode(QCommandLineParser* theWrappedObject, QCommandLineParser::OptionsAfterPositionalArgumentsMode  mode);
   void setSingleDashWordOptionMode(QCommandLineParser* theWrappedObject, QCommandLineParser::SingleDashWordOptionMode  parsingMode);
   void showHelp(QCommandLineParser* theWrappedObject, int  exitCode = 0);
   void showVersion(QCommandLineParser* theWrappedObject);
   QString  static_QCommandLineParser_tr(const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1);
   QString  static_QCommandLineParser_trUtf8(const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1);
   QStringList  unknownOptionNames(QCommandLineParser* theWrappedObject) const;
   QString  value(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const;
   QString  value(QCommandLineParser* theWrappedObject, const QString&  name) const;
   QStringList  values(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const;
   QStringList  values(QCommandLineParser* theWrappedObject, const QString&  name) const;
};





class PythonQtPublicPromoter_QCoreApplication : public QCoreApplication
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QCoreApplication::event(arg__1); }
inline bool  py_q_notify(QObject*  arg__1, QEvent*  arg__2) { return QCoreApplication::notify(arg__1, arg__2); }
};

class PythonQtWrapper_QCoreApplication : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  ApplicationFlags = QCoreApplication::ApplicationFlags};
public slots:
void delete_QCoreApplication(QCoreApplication* obj) { delete obj; } 
   void static_QCoreApplication_addLibraryPath(const QString&  arg__1);
   QString  static_QCoreApplication_applicationDirPath();
   QString  static_QCoreApplication_applicationFilePath();
   QString  static_QCoreApplication_applicationName();
   qint64  static_QCoreApplication_applicationPid();
   QString  static_QCoreApplication_applicationVersion();
   QStringList  static_QCoreApplication_arguments();
   bool  static_QCoreApplication_closingDown();
   bool  event(QCoreApplication* theWrappedObject, QEvent*  arg__1);
   bool  py_q_event(QCoreApplication* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QCoreApplication*)theWrappedObject)->py_q_event(arg__1));}
   QAbstractEventDispatcher*  static_QCoreApplication_eventDispatcher();
   int  static_QCoreApplication_exec();
   void static_QCoreApplication_exit(int  retcode = 0);
   void static_QCoreApplication_flush();
   bool  static_QCoreApplication_hasPendingEvents();
   bool  static_QCoreApplication_installTranslator(QTranslator*  messageFile);
   QCoreApplication*  static_QCoreApplication_instance();
   bool  static_QCoreApplication_isQuitLockEnabled();
   bool  static_QCoreApplication_isSetuidAllowed();
   QStringList  static_QCoreApplication_libraryPaths();
   bool  notify(QCoreApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   bool  py_q_notify(QCoreApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QCoreApplication*)theWrappedObject)->py_q_notify(arg__1, arg__2));}
   QString  static_QCoreApplication_organizationDomain();
   QString  static_QCoreApplication_organizationName();
   void static_QCoreApplication_postEvent(QObject*  receiver, PythonQtPassOwnershipToCPP<QEvent* >  event, int  priority = Qt::NormalEventPriority);
   void static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags, int  maxtime);
   void static_QCoreApplication_removeLibraryPath(const QString&  arg__1);
   void static_QCoreApplication_removePostedEvents(QObject*  receiver, int  eventType = 0);
   bool  static_QCoreApplication_removeTranslator(QTranslator*  messageFile);
   bool  static_QCoreApplication_sendEvent(QObject*  receiver, QEvent*  event);
   void static_QCoreApplication_sendPostedEvents(QObject*  receiver = nullptr, int  event_type = 0);
   void static_QCoreApplication_setApplicationName(const QString&  application);
   void static_QCoreApplication_setApplicationVersion(const QString&  version);
   void static_QCoreApplication_setAttribute(Qt::ApplicationAttribute  attribute, bool  on = true);
   void static_QCoreApplication_setEventDispatcher(QAbstractEventDispatcher*  eventDispatcher);
   void static_QCoreApplication_setLibraryPaths(const QStringList&  arg__1);
   void static_QCoreApplication_setOrganizationDomain(const QString&  orgDomain);
   void static_QCoreApplication_setOrganizationName(const QString&  orgName);
   void static_QCoreApplication_setQuitLockEnabled(bool  enabled);
   void static_QCoreApplication_setSetuidAllowed(bool  allow);
   bool  static_QCoreApplication_startingUp();
   bool  static_QCoreApplication_testAttribute(Qt::ApplicationAttribute  attribute);
   QString  static_QCoreApplication_translate(const char*  context, const char*  key, const char*  disambiguation = nullptr, int  n = -1);
};





class PythonQtWrapper_QCryptographicHash : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Algorithm )
enum Algorithm{
  Md4 = QCryptographicHash::Md4,   Md5 = QCryptographicHash::Md5,   Sha1 = QCryptographicHash::Sha1,   Sha224 = QCryptographicHash::Sha224,   Sha256 = QCryptographicHash::Sha256,   Sha384 = QCryptographicHash::Sha384,   Sha512 = QCryptographicHash::Sha512,   Keccak_224 = QCryptographicHash::Keccak_224,   Keccak_256 = QCryptographicHash::Keccak_256,   Keccak_384 = QCryptographicHash::Keccak_384,   Keccak_512 = QCryptographicHash::Keccak_512,   RealSha3_224 = QCryptographicHash::RealSha3_224,   RealSha3_256 = QCryptographicHash::RealSha3_256,   RealSha3_384 = QCryptographicHash::RealSha3_384,   RealSha3_512 = QCryptographicHash::RealSha3_512,   Sha3_224 = QCryptographicHash::Sha3_224,   Sha3_256 = QCryptographicHash::Sha3_256,   Sha3_384 = QCryptographicHash::Sha3_384,   Sha3_512 = QCryptographicHash::Sha3_512};
public slots:
void delete_QCryptographicHash(QCryptographicHash* obj) { delete obj; } 
   bool  addData(QCryptographicHash* theWrappedObject, QIODevice*  device);
   void addData(QCryptographicHash* theWrappedObject, const QByteArray&  data);
   QByteArray  static_QCryptographicHash_hash(const QByteArray&  data, QCryptographicHash::Algorithm  method);
   int  static_QCryptographicHash_hashLength(QCryptographicHash::Algorithm  method);
   void reset(QCryptographicHash* theWrappedObject);
   QByteArray  result(QCryptographicHash* theWrappedObject) const;
};





class PythonQtWrapper_QDataStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ByteOrder FloatingPointPrecision Status Version )
enum ByteOrder{
  BigEndian = QDataStream::BigEndian,   LittleEndian = QDataStream::LittleEndian};
enum FloatingPointPrecision{
  SinglePrecision = QDataStream::SinglePrecision,   DoublePrecision = QDataStream::DoublePrecision};
enum Status{
  Ok = QDataStream::Ok,   ReadPastEnd = QDataStream::ReadPastEnd,   ReadCorruptData = QDataStream::ReadCorruptData,   WriteFailed = QDataStream::WriteFailed};
enum Version{
  Qt_1_0 = QDataStream::Qt_1_0,   Qt_2_0 = QDataStream::Qt_2_0,   Qt_2_1 = QDataStream::Qt_2_1,   Qt_3_0 = QDataStream::Qt_3_0,   Qt_3_1 = QDataStream::Qt_3_1,   Qt_3_3 = QDataStream::Qt_3_3,   Qt_4_0 = QDataStream::Qt_4_0,   Qt_4_1 = QDataStream::Qt_4_1,   Qt_4_2 = QDataStream::Qt_4_2,   Qt_4_3 = QDataStream::Qt_4_3,   Qt_4_4 = QDataStream::Qt_4_4,   Qt_4_5 = QDataStream::Qt_4_5,   Qt_4_6 = QDataStream::Qt_4_6,   Qt_4_7 = QDataStream::Qt_4_7,   Qt_4_8 = QDataStream::Qt_4_8,   Qt_4_9 = QDataStream::Qt_4_9,   Qt_5_0 = QDataStream::Qt_5_0,   Qt_5_1 = QDataStream::Qt_5_1,   Qt_5_2 = QDataStream::Qt_5_2,   Qt_5_3 = QDataStream::Qt_5_3,   Qt_5_4 = QDataStream::Qt_5_4,   Qt_5_5 = QDataStream::Qt_5_5,   Qt_5_6 = QDataStream::Qt_5_6,   Qt_5_7 = QDataStream::Qt_5_7,   Qt_5_8 = QDataStream::Qt_5_8,   Qt_5_9 = QDataStream::Qt_5_9,   Qt_5_10 = QDataStream::Qt_5_10,   Qt_5_11 = QDataStream::Qt_5_11,   Qt_5_12 = QDataStream::Qt_5_12,   Qt_5_13 = QDataStream::Qt_5_13,   Qt_5_14 = QDataStream::Qt_5_14,   Qt_5_15 = QDataStream::Qt_5_15,   Qt_DefaultCompiledVersion = QDataStream::Qt_DefaultCompiledVersion};
public slots:
void delete_QDataStream(QDataStream* obj) { delete obj; } 
   void abortTransaction(QDataStream* theWrappedObject);
   bool  atEnd(QDataStream* theWrappedObject) const;
   QDataStream::ByteOrder  byteOrder(QDataStream* theWrappedObject) const;
   bool  commitTransaction(QDataStream* theWrappedObject);
   QIODevice*  device(QDataStream* theWrappedObject) const;
   QDataStream::FloatingPointPrecision  floatingPointPrecision(QDataStream* theWrappedObject) const;
   void resetStatus(QDataStream* theWrappedObject);
   void rollbackTransaction(QDataStream* theWrappedObject);
   void setByteOrder(QDataStream* theWrappedObject, QDataStream::ByteOrder  arg__1);
   void setDevice(QDataStream* theWrappedObject, QIODevice*  arg__1);
   void setFloatingPointPrecision(QDataStream* theWrappedObject, QDataStream::FloatingPointPrecision  precision);
   void setStatus(QDataStream* theWrappedObject, QDataStream::Status  status);
   void setVersion(QDataStream* theWrappedObject, int  arg__1);
   int  skipRawData(QDataStream* theWrappedObject, int  len);
   void startTransaction(QDataStream* theWrappedObject);
   QDataStream::Status  status(QDataStream* theWrappedObject) const;
   void unsetDevice(QDataStream* theWrappedObject);
   int  version(QDataStream* theWrappedObject) const;

   QString readQString(QDataStream* d) { QString r; (*d) >> r; return r; }
   QString readString(QDataStream* d) { QString r; (*d) >> r; return r; }
   QChar readQChar(QDataStream* d) { QChar r; (*d) >> r; return r; }
   QStringList readQStringList(QDataStream* d) { QStringList r; (*d) >> r; return r; }
   QVariant readQVariant(QDataStream* d) { QVariant r; (*d) >> r; return r; }
   bool readBool(QDataStream* d) { bool r; (*d) >> r; return r; }
   qint8 readInt8(QDataStream* d) { qint8 r; (*d) >> r; return r; }
   quint8 readUInt8(QDataStream* d) { quint8 r; (*d) >> r; return r; }
   qint16 readInt16(QDataStream* d) { qint16 r; (*d) >> r; return r; }
   quint16 readUInt16(QDataStream* d) { quint16 r; (*d) >> r; return r; }
   qint32 readInt32(QDataStream* d) { qint32 r; (*d) >> r; return r; }
   quint32 readUInt32(QDataStream* d) { quint32 r; (*d) >> r; return r; }
   qint64 readInt64(QDataStream* d) { qint64 r; (*d) >> r; return r; }
   quint64 readUInt64(QDataStream* d) { quint64 r; (*d) >> r; return r; }
   float readFloat(QDataStream* d) { float r; (*d) >> r; return r; }
   double readDouble(QDataStream* d) { double r; (*d) >> r; return r; }

   void writeQString(QDataStream* d, const QString& v) { (*d) << v; }
   void writeString(QDataStream* d, const QString& v) { (*d) << v; }
   void writeQChar(QDataStream* d, const QChar& v) { (*d) << v; }
   void writeQStringList(QDataStream* d, const QStringList& v) { (*d) << v; }
   void writeQVariant(QDataStream* d, const QVariant& v) { (*d) << v; }
   void writeBool(QDataStream* d, bool v) { (*d) << v; }
   void writeInt8(QDataStream* d, qint8 v) { (*d) << v; }
   void writeUInt8(QDataStream* d, quint8 v) { (*d) << v; }
   void writeInt16(QDataStream* d, qint16 v) { (*d) << v; }
   void writeUInt16(QDataStream* d, quint16 v) { (*d) << v; }
   void writeInt32(QDataStream* d, qint32 v) { (*d) << v; }
   void writeUInt32(QDataStream* d, quint32 v) { (*d) << v; }
   void writeInt64(QDataStream* d, qint64 v) { (*d) << v; }
   void writeUInt64(QDataStream* d, quint64 v) { (*d) << v; }
   void writeFloat(QDataStream* d, float v) { (*d) << v; }
   void writeDouble(QDataStream* d, double v) { (*d) << v; }

   int writeRawData(QDataStream* d, PyObject* o) {
     bool ok;
     QByteArray r = PythonQtConv::PyObjGetBytes(o, false, ok);
     return (*d).writeRawData(r.constData(), r.size());
   }

   PyObject* readRawData(QDataStream* d, int len) {
     QByteArray r;
     r.resize(len);
     int result = d->readRawData(r.data(), r.size());
     if (result>=0) {
       return PyBytes_FromStringAndSize(r.data(), result);
     } else {
       Py_INCREF(Py_None);
       return Py_None;
     }
   }
    
};





class PythonQtWrapper_QDeferredDeleteEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDeferredDeleteEvent* new_QDeferredDeleteEvent();
void delete_QDeferredDeleteEvent(QDeferredDeleteEvent* obj) { delete obj; } 
   int  loopLevel(QDeferredDeleteEvent* theWrappedObject) const;
};





class PythonQtWrapper_QDirIterator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IteratorFlag )
Q_FLAGS(IteratorFlags )
enum IteratorFlag{
  NoIteratorFlags = QDirIterator::NoIteratorFlags,   FollowSymlinks = QDirIterator::FollowSymlinks,   Subdirectories = QDirIterator::Subdirectories};
Q_DECLARE_FLAGS(IteratorFlags, IteratorFlag)
public slots:
void delete_QDirIterator(QDirIterator* obj) { delete obj; } 
   QFileInfo  fileInfo(QDirIterator* theWrappedObject) const;
   QString  fileName(QDirIterator* theWrappedObject) const;
   QString  filePath(QDirIterator* theWrappedObject) const;
   bool  hasNext(QDirIterator* theWrappedObject) const;
   QString  next(QDirIterator* theWrappedObject);
   QString  path(QDirIterator* theWrappedObject) const;
};





class PythonQtWrapper_QDynamicPropertyChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDynamicPropertyChangeEvent* new_QDynamicPropertyChangeEvent(const QByteArray&  name);
void delete_QDynamicPropertyChangeEvent(QDynamicPropertyChangeEvent* obj) { delete obj; } 
   QByteArray  propertyName(QDynamicPropertyChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QEvent : public QEvent
{
public:
    PythonQtShell_QEvent(QEvent::Type  type):QEvent(type),_wrapper(NULL) {};
    PythonQtShell_QEvent(const QEvent&  other):QEvent(other),_wrapper(NULL) {};

   ~PythonQtShell_QEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  None = QEvent::None,   Timer = QEvent::Timer,   MouseButtonPress = QEvent::MouseButtonPress,   MouseButtonRelease = QEvent::MouseButtonRelease,   MouseButtonDblClick = QEvent::MouseButtonDblClick,   MouseMove = QEvent::MouseMove,   KeyPress = QEvent::KeyPress,   KeyRelease = QEvent::KeyRelease,   FocusIn = QEvent::FocusIn,   FocusOut = QEvent::FocusOut,   FocusAboutToChange = QEvent::FocusAboutToChange,   Enter = QEvent::Enter,   Leave = QEvent::Leave,   Paint = QEvent::Paint,   Move = QEvent::Move,   Resize = QEvent::Resize,   Create = QEvent::Create,   Destroy = QEvent::Destroy,   Show = QEvent::Show,   Hide = QEvent::Hide,   Close = QEvent::Close,   Quit = QEvent::Quit,   ParentChange = QEvent::ParentChange,   ParentAboutToChange = QEvent::ParentAboutToChange,   ThreadChange = QEvent::ThreadChange,   WindowActivate = QEvent::WindowActivate,   WindowDeactivate = QEvent::WindowDeactivate,   ShowToParent = QEvent::ShowToParent,   HideToParent = QEvent::HideToParent,   Wheel = QEvent::Wheel,   WindowTitleChange = QEvent::WindowTitleChange,   WindowIconChange = QEvent::WindowIconChange,   ApplicationWindowIconChange = QEvent::ApplicationWindowIconChange,   ApplicationFontChange = QEvent::ApplicationFontChange,   ApplicationLayoutDirectionChange = QEvent::ApplicationLayoutDirectionChange,   ApplicationPaletteChange = QEvent::ApplicationPaletteChange,   PaletteChange = QEvent::PaletteChange,   Clipboard = QEvent::Clipboard,   Speech = QEvent::Speech,   MetaCall = QEvent::MetaCall,   SockAct = QEvent::SockAct,   WinEventAct = QEvent::WinEventAct,   DeferredDelete = QEvent::DeferredDelete,   DragEnter = QEvent::DragEnter,   DragMove = QEvent::DragMove,   DragLeave = QEvent::DragLeave,   Drop = QEvent::Drop,   DragResponse = QEvent::DragResponse,   ChildAdded = QEvent::ChildAdded,   ChildPolished = QEvent::ChildPolished,   ChildRemoved = QEvent::ChildRemoved,   ShowWindowRequest = QEvent::ShowWindowRequest,   PolishRequest = QEvent::PolishRequest,   Polish = QEvent::Polish,   LayoutRequest = QEvent::LayoutRequest,   UpdateRequest = QEvent::UpdateRequest,   UpdateLater = QEvent::UpdateLater,   EmbeddingControl = QEvent::EmbeddingControl,   ActivateControl = QEvent::ActivateControl,   DeactivateControl = QEvent::DeactivateControl,   ContextMenu = QEvent::ContextMenu,   InputMethod = QEvent::InputMethod,   TabletMove = QEvent::TabletMove,   LocaleChange = QEvent::LocaleChange,   LanguageChange = QEvent::LanguageChange,   LayoutDirectionChange = QEvent::LayoutDirectionChange,   Style = QEvent::Style,   TabletPress = QEvent::TabletPress,   TabletRelease = QEvent::TabletRelease,   OkRequest = QEvent::OkRequest,   HelpRequest = QEvent::HelpRequest,   IconDrag = QEvent::IconDrag,   FontChange = QEvent::FontChange,   EnabledChange = QEvent::EnabledChange,   ActivationChange = QEvent::ActivationChange,   StyleChange = QEvent::StyleChange,   IconTextChange = QEvent::IconTextChange,   ModifiedChange = QEvent::ModifiedChange,   MouseTrackingChange = QEvent::MouseTrackingChange,   WindowBlocked = QEvent::WindowBlocked,   WindowUnblocked = QEvent::WindowUnblocked,   WindowStateChange = QEvent::WindowStateChange,   ReadOnlyChange = QEvent::ReadOnlyChange,   ToolTip = QEvent::ToolTip,   WhatsThis = QEvent::WhatsThis,   StatusTip = QEvent::StatusTip,   ActionChanged = QEvent::ActionChanged,   ActionAdded = QEvent::ActionAdded,   ActionRemoved = QEvent::ActionRemoved,   FileOpen = QEvent::FileOpen,   Shortcut = QEvent::Shortcut,   ShortcutOverride = QEvent::ShortcutOverride,   WhatsThisClicked = QEvent::WhatsThisClicked,   ToolBarChange = QEvent::ToolBarChange,   ApplicationActivate = QEvent::ApplicationActivate,   ApplicationActivated = QEvent::ApplicationActivated,   ApplicationDeactivate = QEvent::ApplicationDeactivate,   ApplicationDeactivated = QEvent::ApplicationDeactivated,   QueryWhatsThis = QEvent::QueryWhatsThis,   EnterWhatsThisMode = QEvent::EnterWhatsThisMode,   LeaveWhatsThisMode = QEvent::LeaveWhatsThisMode,   ZOrderChange = QEvent::ZOrderChange,   HoverEnter = QEvent::HoverEnter,   HoverLeave = QEvent::HoverLeave,   HoverMove = QEvent::HoverMove,   AcceptDropsChange = QEvent::AcceptDropsChange,   ZeroTimerEvent = QEvent::ZeroTimerEvent,   GraphicsSceneMouseMove = QEvent::GraphicsSceneMouseMove,   GraphicsSceneMousePress = QEvent::GraphicsSceneMousePress,   GraphicsSceneMouseRelease = QEvent::GraphicsSceneMouseRelease,   GraphicsSceneMouseDoubleClick = QEvent::GraphicsSceneMouseDoubleClick,   GraphicsSceneContextMenu = QEvent::GraphicsSceneContextMenu,   GraphicsSceneHoverEnter = QEvent::GraphicsSceneHoverEnter,   GraphicsSceneHoverMove = QEvent::GraphicsSceneHoverMove,   GraphicsSceneHoverLeave = QEvent::GraphicsSceneHoverLeave,   GraphicsSceneHelp = QEvent::GraphicsSceneHelp,   GraphicsSceneDragEnter = QEvent::GraphicsSceneDragEnter,   GraphicsSceneDragMove = QEvent::GraphicsSceneDragMove,   GraphicsSceneDragLeave = QEvent::GraphicsSceneDragLeave,   GraphicsSceneDrop = QEvent::GraphicsSceneDrop,   GraphicsSceneWheel = QEvent::GraphicsSceneWheel,   KeyboardLayoutChange = QEvent::KeyboardLayoutChange,   DynamicPropertyChange = QEvent::DynamicPropertyChange,   TabletEnterProximity = QEvent::TabletEnterProximity,   TabletLeaveProximity = QEvent::TabletLeaveProximity,   NonClientAreaMouseMove = QEvent::NonClientAreaMouseMove,   NonClientAreaMouseButtonPress = QEvent::NonClientAreaMouseButtonPress,   NonClientAreaMouseButtonRelease = QEvent::NonClientAreaMouseButtonRelease,   NonClientAreaMouseButtonDblClick = QEvent::NonClientAreaMouseButtonDblClick,   MacSizeChange = QEvent::MacSizeChange,   ContentsRectChange = QEvent::ContentsRectChange,   MacGLWindowChange = QEvent::MacGLWindowChange,   FutureCallOut = QEvent::FutureCallOut,   GraphicsSceneResize = QEvent::GraphicsSceneResize,   GraphicsSceneMove = QEvent::GraphicsSceneMove,   CursorChange = QEvent::CursorChange,   ToolTipChange = QEvent::ToolTipChange,   NetworkReplyUpdated = QEvent::NetworkReplyUpdated,   GrabMouse = QEvent::GrabMouse,   UngrabMouse = QEvent::UngrabMouse,   GrabKeyboard = QEvent::GrabKeyboard,   UngrabKeyboard = QEvent::UngrabKeyboard,   MacGLClearDrawable = QEvent::MacGLClearDrawable,   StateMachineSignal = QEvent::StateMachineSignal,   StateMachineWrapped = QEvent::StateMachineWrapped,   TouchBegin = QEvent::TouchBegin,   TouchUpdate = QEvent::TouchUpdate,   TouchEnd = QEvent::TouchEnd,   NativeGesture = QEvent::NativeGesture,   RequestSoftwareInputPanel = QEvent::RequestSoftwareInputPanel,   CloseSoftwareInputPanel = QEvent::CloseSoftwareInputPanel,   WinIdChange = QEvent::WinIdChange,   Gesture = QEvent::Gesture,   GestureOverride = QEvent::GestureOverride,   ScrollPrepare = QEvent::ScrollPrepare,   Scroll = QEvent::Scroll,   Expose = QEvent::Expose,   InputMethodQuery = QEvent::InputMethodQuery,   OrientationChange = QEvent::OrientationChange,   TouchCancel = QEvent::TouchCancel,   ThemeChange = QEvent::ThemeChange,   SockClose = QEvent::SockClose,   PlatformPanel = QEvent::PlatformPanel,   StyleAnimationUpdate = QEvent::StyleAnimationUpdate,   ApplicationStateChange = QEvent::ApplicationStateChange,   WindowChangeInternal = QEvent::WindowChangeInternal,   ScreenChangeInternal = QEvent::ScreenChangeInternal,   PlatformSurface = QEvent::PlatformSurface,   Pointer = QEvent::Pointer,   TabletTrackingChange = QEvent::TabletTrackingChange,   User = QEvent::User,   MaxUser = QEvent::MaxUser};
public slots:
QEvent* new_QEvent(QEvent::Type  type);
QEvent* new_QEvent(const QEvent&  other);
void delete_QEvent(QEvent* obj) { delete obj; } 
   void accept(QEvent* theWrappedObject);
   void ignore(QEvent* theWrappedObject);
   bool  isAccepted(QEvent* theWrappedObject) const;
   QEvent*  operator_assign(QEvent* theWrappedObject, const QEvent&  other);
   void setAccepted(QEvent* theWrappedObject, bool  accepted);
   bool  spontaneous(QEvent* theWrappedObject) const;
   QEvent::Type  type(QEvent* theWrappedObject) const;
    QString py_toString(QEvent*);
};





class PythonQtShell_QEventLoop : public QEventLoop
{
public:
    PythonQtShell_QEventLoop(QObject*  parent = nullptr):QEventLoop(parent),_wrapper(NULL) {};

   ~PythonQtShell_QEventLoop();

virtual bool  event(QEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QEventLoop : public QEventLoop
{ public:
inline bool  py_q_event(QEvent*  event) { return QEventLoop::event(event); }
};

class PythonQtWrapper_QEventLoop : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ProcessEventsFlag )
Q_FLAGS(ProcessEventsFlags )
enum ProcessEventsFlag{
  AllEvents = QEventLoop::AllEvents,   ExcludeUserInputEvents = QEventLoop::ExcludeUserInputEvents,   ExcludeSocketNotifiers = QEventLoop::ExcludeSocketNotifiers,   WaitForMoreEvents = QEventLoop::WaitForMoreEvents,   X11ExcludeTimers = QEventLoop::X11ExcludeTimers,   EventLoopExec = QEventLoop::EventLoopExec,   DialogExec = QEventLoop::DialogExec};
Q_DECLARE_FLAGS(ProcessEventsFlags, ProcessEventsFlag)
public slots:
QEventLoop* new_QEventLoop(QObject*  parent = nullptr);
void delete_QEventLoop(QEventLoop* obj) { delete obj; } 
   bool  event(QEventLoop* theWrappedObject, QEvent*  event);
   bool  py_q_event(QEventLoop* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QEventLoop*)theWrappedObject)->py_q_event(event));}
   int  exec(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void exit(QEventLoop* theWrappedObject, int  returnCode = 0);
   bool  isRunning(QEventLoop* theWrappedObject) const;
   bool  processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags, int  maximumTime);
   void wakeUp(QEventLoop* theWrappedObject);
};





class PythonQtShell_QEventTransition : public QEventTransition
{
public:
    PythonQtShell_QEventTransition(QObject*  object, QEvent::Type  type, QState*  sourceState = nullptr):QEventTransition(object, type, sourceState),_wrapper(NULL) {};
    PythonQtShell_QEventTransition(QState*  sourceState = nullptr):QEventTransition(sourceState),_wrapper(NULL) {};

   ~PythonQtShell_QEventTransition();

virtual bool  event(QEvent*  e);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QEventTransition : public QEventTransition
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  promoted_eventTest(QEvent*  event) { return this->eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { this->onTransition(event); }
inline bool  py_q_event(QEvent*  e) { return QEventTransition::event(e); }
inline bool  py_q_eventTest(QEvent*  event) { return QEventTransition::eventTest(event); }
inline void py_q_onTransition(QEvent*  event) { QEventTransition::onTransition(event); }
};

class PythonQtWrapper_QEventTransition : public QObject
{ Q_OBJECT
public:
public slots:
QEventTransition* new_QEventTransition(QObject*  object, QEvent::Type  type, QState*  sourceState = nullptr);
QEventTransition* new_QEventTransition(QState*  sourceState = nullptr);
void delete_QEventTransition(QEventTransition* obj) { delete obj; } 
   bool  py_q_event(QEventTransition* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QEventTransition*)theWrappedObject)->py_q_event(e));}
   QObject*  eventSource(QEventTransition* theWrappedObject) const;
   bool  py_q_eventTest(QEventTransition* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QEventTransition*)theWrappedObject)->py_q_eventTest(event));}
   QEvent::Type  eventType(QEventTransition* theWrappedObject) const;
   void py_q_onTransition(QEventTransition* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QEventTransition*)theWrappedObject)->py_q_onTransition(event));}
   void setEventSource(QEventTransition* theWrappedObject, QObject*  object);
   void setEventType(QEventTransition* theWrappedObject, QEvent::Type  type);
};





class PythonQtShell_QFactoryInterface : public QFactoryInterface
{
public:
    PythonQtShell_QFactoryInterface():QFactoryInterface(),_wrapper(NULL) {};

   ~PythonQtShell_QFactoryInterface();

virtual QStringList  keys() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFactoryInterface : public QFactoryInterface
{ public:
inline QStringList  py_q_keys() const { return this->keys(); }
};

class PythonQtWrapper_QFactoryInterface : public QObject
{ Q_OBJECT
public:
public slots:
QFactoryInterface* new_QFactoryInterface();
void delete_QFactoryInterface(QFactoryInterface* obj) { delete obj; } 
   QStringList  keys(QFactoryInterface* theWrappedObject) const;
   QStringList  py_q_keys(QFactoryInterface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFactoryInterface*)theWrappedObject)->py_q_keys());}
};





class PythonQtShell_QFile : public QFile
{
public:
    PythonQtShell_QFile():QFile(),_wrapper(NULL) {};
    PythonQtShell_QFile(QObject*  parent):QFile(parent),_wrapper(NULL) {};
    PythonQtShell_QFile(const QString&  name):QFile(name),_wrapper(NULL) {};
    PythonQtShell_QFile(const QString&  name, QObject*  parent):QFile(name, parent),_wrapper(NULL) {};

   ~PythonQtShell_QFile();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void close();
virtual QString  fileName() const;
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  flags);
virtual QFileDevice::Permissions  permissions() const;
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  resize(qint64  sz);
virtual bool  seek(qint64  offset);
virtual bool  setPermissions(QFileDevice::Permissions  permissionSpec);
virtual qint64  size() const;
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFile : public QFile
{ public:
inline QString  py_q_fileName() const { return QFile::fileName(); }
inline bool  py_q_open(QIODevice::OpenMode  flags) { return QFile::open(flags); }
inline QFileDevice::Permissions  py_q_permissions() const { return QFile::permissions(); }
inline bool  py_q_resize(qint64  sz) { return QFile::resize(sz); }
inline bool  py_q_setPermissions(QFileDevice::Permissions  permissionSpec) { return QFile::setPermissions(permissionSpec); }
inline qint64  py_q_size() const { return QFile::size(); }
};

class PythonQtWrapper_QFile : public QObject
{ Q_OBJECT
public:
public slots:
QFile* new_QFile();
QFile* new_QFile(QObject*  parent);
QFile* new_QFile(const QString&  name);
QFile* new_QFile(const QString&  name, QObject*  parent);
void delete_QFile(QFile* obj) { delete obj; } 
   bool  static_QFile_copy(const QString&  fileName, const QString&  newName);
   bool  copy(QFile* theWrappedObject, const QString&  newName);
   QString  static_QFile_decodeName(const QByteArray&  localFileName);
   QByteArray  static_QFile_encodeName(const QString&  fileName);
   bool  exists(QFile* theWrappedObject) const;
   bool  static_QFile_exists(const QString&  fileName);
   QString  py_q_fileName(QFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_fileName());}
   bool  link(QFile* theWrappedObject, const QString&  newName);
   bool  static_QFile_link(const QString&  oldname, const QString&  newName);
   bool  moveToTrash(QFile* theWrappedObject);
   bool  static_QFile_moveToTrash(const QString&  fileName, QString*  pathInTrash = nullptr);
   bool  py_q_open(QFile* theWrappedObject, QIODevice::OpenMode  flags){  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_open(flags));}
   bool  open(QFile* theWrappedObject, int  fd, QIODevice::OpenMode  ioFlags, QFileDevice::FileHandleFlags  handleFlags = QFileDevice::DontCloseHandle);
   QFileDevice::Permissions  py_q_permissions(QFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_permissions());}
   QFileDevice::Permissions  static_QFile_permissions(const QString&  filename);
   bool  remove(QFile* theWrappedObject);
   bool  static_QFile_remove(const QString&  fileName);
   bool  rename(QFile* theWrappedObject, const QString&  newName);
   bool  static_QFile_rename(const QString&  oldName, const QString&  newName);
   bool  static_QFile_resize(const QString&  filename, qint64  sz);
   bool  py_q_resize(QFile* theWrappedObject, qint64  sz){  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_resize(sz));}
   void setFileName(QFile* theWrappedObject, const QString&  name);
   bool  py_q_setPermissions(QFile* theWrappedObject, QFileDevice::Permissions  permissionSpec){  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_setPermissions(permissionSpec));}
   bool  static_QFile_setPermissions(const QString&  filename, QFileDevice::Permissions  permissionSpec);
   qint64  py_q_size(QFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_size());}
   QString  symLinkTarget(QFile* theWrappedObject) const;
   QString  static_QFile_symLinkTarget(const QString&  fileName);
};





class PythonQtShell_QFileDevice : public QFileDevice
{
public:
    PythonQtShell_QFileDevice():QFileDevice(),_wrapper(NULL) {};
    PythonQtShell_QFileDevice(QObject*  parent):QFileDevice(parent),_wrapper(NULL) {};

   ~PythonQtShell_QFileDevice();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void close();
virtual QString  fileName() const;
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual QFileDevice::Permissions  permissions() const;
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  resize(qint64  sz);
virtual bool  seek(qint64  offset);
virtual bool  setPermissions(QFileDevice::Permissions  permissionSpec);
virtual qint64  size() const;
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFileDevice : public QFileDevice
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return this->readLineData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QFileDevice::atEnd(); }
inline void py_q_close() { QFileDevice::close(); }
inline QString  py_q_fileName() const { return QFileDevice::fileName(); }
inline bool  py_q_isSequential() const { return QFileDevice::isSequential(); }
inline QFileDevice::Permissions  py_q_permissions() const { return QFileDevice::permissions(); }
inline qint64  py_q_pos() const { return QFileDevice::pos(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return QFileDevice::readData(data, maxlen); }
inline qint64  py_q_readLineData(char*  data, qint64  maxlen) { return QFileDevice::readLineData(data, maxlen); }
inline bool  py_q_resize(qint64  sz) { return QFileDevice::resize(sz); }
inline bool  py_q_seek(qint64  offset) { return QFileDevice::seek(offset); }
inline bool  py_q_setPermissions(QFileDevice::Permissions  permissionSpec) { return QFileDevice::setPermissions(permissionSpec); }
inline qint64  py_q_size() const { return QFileDevice::size(); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QFileDevice::writeData(data, len); }
};

class PythonQtWrapper_QFileDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FileError FileHandleFlag FileTime MemoryMapFlags Permission )
Q_FLAGS(FileHandleFlags Permissions )
enum FileError{
  NoError = QFileDevice::NoError,   ReadError = QFileDevice::ReadError,   WriteError = QFileDevice::WriteError,   FatalError = QFileDevice::FatalError,   ResourceError = QFileDevice::ResourceError,   OpenError = QFileDevice::OpenError,   AbortError = QFileDevice::AbortError,   TimeOutError = QFileDevice::TimeOutError,   UnspecifiedError = QFileDevice::UnspecifiedError,   RemoveError = QFileDevice::RemoveError,   RenameError = QFileDevice::RenameError,   PositionError = QFileDevice::PositionError,   ResizeError = QFileDevice::ResizeError,   PermissionsError = QFileDevice::PermissionsError,   CopyError = QFileDevice::CopyError};
enum FileHandleFlag{
  AutoCloseHandle = QFileDevice::AutoCloseHandle,   DontCloseHandle = QFileDevice::DontCloseHandle};
enum FileTime{
  FileAccessTime = QFileDevice::FileAccessTime,   FileBirthTime = QFileDevice::FileBirthTime,   FileMetadataChangeTime = QFileDevice::FileMetadataChangeTime,   FileModificationTime = QFileDevice::FileModificationTime};
enum MemoryMapFlags{
  NoOptions = QFileDevice::NoOptions,   MapPrivateOption = QFileDevice::MapPrivateOption};
enum Permission{
  ReadOwner = QFileDevice::ReadOwner,   WriteOwner = QFileDevice::WriteOwner,   ExeOwner = QFileDevice::ExeOwner,   ReadUser = QFileDevice::ReadUser,   WriteUser = QFileDevice::WriteUser,   ExeUser = QFileDevice::ExeUser,   ReadGroup = QFileDevice::ReadGroup,   WriteGroup = QFileDevice::WriteGroup,   ExeGroup = QFileDevice::ExeGroup,   ReadOther = QFileDevice::ReadOther,   WriteOther = QFileDevice::WriteOther,   ExeOther = QFileDevice::ExeOther};
Q_DECLARE_FLAGS(FileHandleFlags, FileHandleFlag)
Q_DECLARE_FLAGS(Permissions, Permission)
public slots:
QFileDevice* new_QFileDevice();
QFileDevice* new_QFileDevice(QObject*  parent);
void delete_QFileDevice(QFileDevice* obj) { delete obj; } 
   bool  py_q_atEnd(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_atEnd());}
   void py_q_close(QFileDevice* theWrappedObject){  (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_close());}
   QFileDevice::FileError  error(QFileDevice* theWrappedObject) const;
   QString  fileName(QFileDevice* theWrappedObject) const;
   QString  py_q_fileName(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_fileName());}
   QDateTime  fileTime(QFileDevice* theWrappedObject, QFileDevice::FileTime  time) const;
   bool  flush(QFileDevice* theWrappedObject);
   int  handle(QFileDevice* theWrappedObject) const;
   bool  py_q_isSequential(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_isSequential());}
   uchar*  map(QFileDevice* theWrappedObject, qint64  offset, qint64  size, QFileDevice::MemoryMapFlags  flags = QFileDevice::NoOptions);
   QFileDevice::Permissions  permissions(QFileDevice* theWrappedObject) const;
   QFileDevice::Permissions  py_q_permissions(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_permissions());}
   qint64  py_q_pos(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_pos());}
   qint64  py_q_readData(QFileDevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_readData(data, maxlen));}
   qint64  py_q_readLineData(QFileDevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_readLineData(data, maxlen));}
   bool  resize(QFileDevice* theWrappedObject, qint64  sz);
   bool  py_q_resize(QFileDevice* theWrappedObject, qint64  sz){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_resize(sz));}
   bool  py_q_seek(QFileDevice* theWrappedObject, qint64  offset){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_seek(offset));}
   bool  setFileTime(QFileDevice* theWrappedObject, const QDateTime&  newDate, QFileDevice::FileTime  fileTime);
   bool  setPermissions(QFileDevice* theWrappedObject, QFileDevice::Permissions  permissionSpec);
   bool  py_q_setPermissions(QFileDevice* theWrappedObject, QFileDevice::Permissions  permissionSpec){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_setPermissions(permissionSpec));}
   qint64  py_q_size(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_size());}
   bool  unmap(QFileDevice* theWrappedObject, uchar*  address);
   void unsetError(QFileDevice* theWrappedObject);
   qint64  py_q_writeData(QFileDevice* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtWrapper_QFileSelector : public QObject
{ Q_OBJECT
public:
public slots:
QFileSelector* new_QFileSelector(QObject*  parent = nullptr);
void delete_QFileSelector(QFileSelector* obj) { delete obj; } 
   QStringList  allSelectors(QFileSelector* theWrappedObject) const;
   QStringList  extraSelectors(QFileSelector* theWrappedObject) const;
   QString  select(QFileSelector* theWrappedObject, const QString&  filePath) const;
   QUrl  select(QFileSelector* theWrappedObject, const QUrl&  filePath) const;
   void setExtraSelectors(QFileSelector* theWrappedObject, const QStringList&  list);
};





class PythonQtWrapper_QFileSystemWatcher : public QObject
{ Q_OBJECT
public:
public slots:
QFileSystemWatcher* new_QFileSystemWatcher(QObject*  parent = nullptr);
QFileSystemWatcher* new_QFileSystemWatcher(const QStringList&  paths, QObject*  parent = nullptr);
void delete_QFileSystemWatcher(QFileSystemWatcher* obj) { delete obj; } 
   bool  addPath(QFileSystemWatcher* theWrappedObject, const QString&  file);
   QStringList  addPaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files);
   QStringList  directories(QFileSystemWatcher* theWrappedObject) const;
   QStringList  files(QFileSystemWatcher* theWrappedObject) const;
   bool  removePath(QFileSystemWatcher* theWrappedObject, const QString&  file);
   QStringList  removePaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files);
};





class PythonQtShell_QFinalState : public QFinalState
{
public:
    PythonQtShell_QFinalState(QState*  parent = nullptr):QFinalState(parent),_wrapper(NULL) {};

   ~PythonQtShell_QFinalState();

virtual bool  event(QEvent*  e);
virtual void onEntry(QEvent*  event);
virtual void onExit(QEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFinalState : public QFinalState
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_onEntry(QEvent*  event) { this->onEntry(event); }
inline void promoted_onExit(QEvent*  event) { this->onExit(event); }
inline bool  py_q_event(QEvent*  e) { return QFinalState::event(e); }
inline void py_q_onEntry(QEvent*  event) { QFinalState::onEntry(event); }
inline void py_q_onExit(QEvent*  event) { QFinalState::onExit(event); }
};

class PythonQtWrapper_QFinalState : public QObject
{ Q_OBJECT
public:
public slots:
QFinalState* new_QFinalState(QState*  parent = nullptr);
void delete_QFinalState(QFinalState* obj) { delete obj; } 
   bool  py_q_event(QFinalState* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QFinalState*)theWrappedObject)->py_q_event(e));}
   void py_q_onEntry(QFinalState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QFinalState*)theWrappedObject)->py_q_onEntry(event));}
   void py_q_onExit(QFinalState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QFinalState*)theWrappedObject)->py_q_onExit(event));}
};





class PythonQtShell_QHistoryState : public QHistoryState
{
public:
    PythonQtShell_QHistoryState(QHistoryState::HistoryType  type, QState*  parent = nullptr):QHistoryState(type, parent),_wrapper(NULL) {};
    PythonQtShell_QHistoryState(QState*  parent = nullptr):QHistoryState(parent),_wrapper(NULL) {};

   ~PythonQtShell_QHistoryState();

virtual bool  event(QEvent*  e);
virtual void onEntry(QEvent*  event);
virtual void onExit(QEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHistoryState : public QHistoryState
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_onEntry(QEvent*  event) { this->onEntry(event); }
inline void promoted_onExit(QEvent*  event) { this->onExit(event); }
inline bool  py_q_event(QEvent*  e) { return QHistoryState::event(e); }
inline void py_q_onEntry(QEvent*  event) { QHistoryState::onEntry(event); }
inline void py_q_onExit(QEvent*  event) { QHistoryState::onExit(event); }
};

class PythonQtWrapper_QHistoryState : public QObject
{ Q_OBJECT
public:
public slots:
QHistoryState* new_QHistoryState(QHistoryState::HistoryType  type, QState*  parent = nullptr);
QHistoryState* new_QHistoryState(QState*  parent = nullptr);
void delete_QHistoryState(QHistoryState* obj) { delete obj; } 
   QAbstractState*  defaultState(QHistoryState* theWrappedObject) const;
   QAbstractTransition*  defaultTransition(QHistoryState* theWrappedObject) const;
   bool  py_q_event(QHistoryState* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QHistoryState*)theWrappedObject)->py_q_event(e));}
   QHistoryState::HistoryType  historyType(QHistoryState* theWrappedObject) const;
   void py_q_onEntry(QHistoryState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QHistoryState*)theWrappedObject)->py_q_onEntry(event));}
   void py_q_onExit(QHistoryState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QHistoryState*)theWrappedObject)->py_q_onExit(event));}
   void setDefaultState(QHistoryState* theWrappedObject, QAbstractState*  state);
   void setDefaultTransition(QHistoryState* theWrappedObject, QAbstractTransition*  transition);
   void setHistoryType(QHistoryState* theWrappedObject, QHistoryState::HistoryType  type);
};





class PythonQtShell_QIODevice : public QIODevice
{
public:
    PythonQtShell_QIODevice():QIODevice(),_wrapper(NULL) {};
    PythonQtShell_QIODevice(QObject*  parent):QIODevice(parent),_wrapper(NULL) {};

   ~PythonQtShell_QIODevice();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void close();
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual qint64  size() const;
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIODevice : public QIODevice
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return this->readLineData(data, maxlen); }
inline void promoted_setErrorString(const QString&  errorString) { this->setErrorString(errorString); }
inline void promoted_setOpenMode(QIODevice::OpenMode  openMode) { this->setOpenMode(openMode); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QIODevice::atEnd(); }
inline qint64  py_q_bytesAvailable() const { return QIODevice::bytesAvailable(); }
inline qint64  py_q_bytesToWrite() const { return QIODevice::bytesToWrite(); }
inline bool  py_q_canReadLine() const { return QIODevice::canReadLine(); }
inline void py_q_close() { QIODevice::close(); }
inline bool  py_q_isSequential() const { return QIODevice::isSequential(); }
inline bool  py_q_open(QIODevice::OpenMode  mode) { return QIODevice::open(mode); }
inline qint64  py_q_pos() const { return QIODevice::pos(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  py_q_readLineData(char*  data, qint64  maxlen) { return QIODevice::readLineData(data, maxlen); }
inline bool  py_q_reset() { return QIODevice::reset(); }
inline bool  py_q_seek(qint64  pos) { return QIODevice::seek(pos); }
inline qint64  py_q_size() const { return QIODevice::size(); }
inline bool  py_q_waitForBytesWritten(int  msecs) { return QIODevice::waitForBytesWritten(msecs); }
inline bool  py_q_waitForReadyRead(int  msecs) { return QIODevice::waitForReadyRead(msecs); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
};

class PythonQtWrapper_QIODevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OpenModeFlag )
Q_FLAGS(OpenMode )
enum OpenModeFlag{
  NotOpen = QIODevice::NotOpen,   ReadOnly = QIODevice::ReadOnly,   WriteOnly = QIODevice::WriteOnly,   ReadWrite = QIODevice::ReadWrite,   Append = QIODevice::Append,   Truncate = QIODevice::Truncate,   Text = QIODevice::Text,   Unbuffered = QIODevice::Unbuffered,   NewOnly = QIODevice::NewOnly,   ExistingOnly = QIODevice::ExistingOnly};
Q_DECLARE_FLAGS(OpenMode, OpenModeFlag)
public slots:
QIODevice* new_QIODevice();
QIODevice* new_QIODevice(QObject*  parent);
void delete_QIODevice(QIODevice* obj) { delete obj; } 
   bool  atEnd(QIODevice* theWrappedObject) const;
   bool  py_q_atEnd(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_atEnd());}
   qint64  bytesAvailable(QIODevice* theWrappedObject) const;
   qint64  py_q_bytesAvailable(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_bytesAvailable());}
   qint64  bytesToWrite(QIODevice* theWrappedObject) const;
   qint64  py_q_bytesToWrite(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_bytesToWrite());}
   bool  canReadLine(QIODevice* theWrappedObject) const;
   bool  py_q_canReadLine(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_canReadLine());}
   void close(QIODevice* theWrappedObject);
   void py_q_close(QIODevice* theWrappedObject){  (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_close());}
   void commitTransaction(QIODevice* theWrappedObject);
   int  currentReadChannel(QIODevice* theWrappedObject) const;
   int  currentWriteChannel(QIODevice* theWrappedObject) const;
   QString  errorString(QIODevice* theWrappedObject) const;
   bool  getChar(QIODevice* theWrappedObject, char*  c);
   bool  isOpen(QIODevice* theWrappedObject) const;
   bool  isReadable(QIODevice* theWrappedObject) const;
   bool  isSequential(QIODevice* theWrappedObject) const;
   bool  py_q_isSequential(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_isSequential());}
   bool  isTextModeEnabled(QIODevice* theWrappedObject) const;
   bool  isTransactionStarted(QIODevice* theWrappedObject) const;
   bool  isWritable(QIODevice* theWrappedObject) const;
   bool  open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode);
   bool  py_q_open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_open(mode));}
   QIODevice::OpenMode  openMode(QIODevice* theWrappedObject) const;
   QByteArray  peek(QIODevice* theWrappedObject, qint64  maxlen);
   qint64  pos(QIODevice* theWrappedObject) const;
   qint64  py_q_pos(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_pos());}
   bool  putChar(QIODevice* theWrappedObject, char  c);
   QByteArray  read(QIODevice* theWrappedObject, qint64  maxlen);
   QByteArray  readAll(QIODevice* theWrappedObject);
   int  readChannelCount(QIODevice* theWrappedObject) const;
   qint64  readData(QIODevice* theWrappedObject, char*  data, qint64  maxlen);
   qint64  py_q_readData(QIODevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_readData(data, maxlen));}
   QByteArray  readLine(QIODevice* theWrappedObject, qint64  maxlen = 0);
   qint64  readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen);
   qint64  py_q_readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_readLineData(data, maxlen));}
   bool  reset(QIODevice* theWrappedObject);
   bool  py_q_reset(QIODevice* theWrappedObject){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_reset());}
   void rollbackTransaction(QIODevice* theWrappedObject);
   bool  seek(QIODevice* theWrappedObject, qint64  pos);
   bool  py_q_seek(QIODevice* theWrappedObject, qint64  pos){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_seek(pos));}
   void setCurrentReadChannel(QIODevice* theWrappedObject, int  channel);
   void setCurrentWriteChannel(QIODevice* theWrappedObject, int  channel);
   void setErrorString(QIODevice* theWrappedObject, const QString&  errorString);
   void setOpenMode(QIODevice* theWrappedObject, QIODevice::OpenMode  openMode);
   void setTextModeEnabled(QIODevice* theWrappedObject, bool  enabled);
   qint64  size(QIODevice* theWrappedObject) const;
   qint64  py_q_size(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_size());}
   qint64  skip(QIODevice* theWrappedObject, qint64  maxSize);
   void startTransaction(QIODevice* theWrappedObject);
   void ungetChar(QIODevice* theWrappedObject, char  c);
   bool  waitForBytesWritten(QIODevice* theWrappedObject, int  msecs);
   bool  py_q_waitForBytesWritten(QIODevice* theWrappedObject, int  msecs){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_waitForBytesWritten(msecs));}
   bool  waitForReadyRead(QIODevice* theWrappedObject, int  msecs);
   bool  py_q_waitForReadyRead(QIODevice* theWrappedObject, int  msecs){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_waitForReadyRead(msecs));}
   qint64  write(QIODevice* theWrappedObject, const QByteArray&  data);
   qint64  write(QIODevice* theWrappedObject, const char*  data);
   int  writeChannelCount(QIODevice* theWrappedObject) const;
   qint64  writeData(QIODevice* theWrappedObject, const char*  data, qint64  len);
   qint64  py_q_writeData(QIODevice* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtShell_QIdentityProxyModel : public QIdentityProxyModel
{
public:
    PythonQtShell_QIdentityProxyModel(QObject*  parent = nullptr):QIdentityProxyModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QIdentityProxyModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual QVariant  data(const QModelIndex&  proxyIndex, int  role = Qt::DisplayRole) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual void fetchMore(const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QModelIndex  mapFromSource(const QModelIndex&  sourceIndex) const;
virtual QItemSelection  mapSelectionFromSource(const QItemSelection&  selection) const;
virtual QItemSelection  mapSelectionToSource(const QItemSelection&  selection) const;
virtual QModelIndex  mapToSource(const QModelIndex&  proxyIndex) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QStringList  mimeTypes() const;
virtual bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual QModelIndex  parent(const QModelIndex&  child) const;
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void revert();
virtual QHash<int , QByteArray >  roleNames() const;
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual void setSourceModel(QAbstractItemModel*  sourceModel);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDragActions() const;
virtual Qt::DropActions  supportedDropActions() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIdentityProxyModel : public QIdentityProxyModel
{ public:
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QIdentityProxyModel::columnCount(parent); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QIdentityProxyModel::dropMimeData(data, action, row, column, parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QIdentityProxyModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QIdentityProxyModel::index(row, column, parent); }
inline bool  py_q_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::insertColumns(column, count, parent); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::insertRows(row, count, parent); }
inline QModelIndex  py_q_mapFromSource(const QModelIndex&  sourceIndex) const { return QIdentityProxyModel::mapFromSource(sourceIndex); }
inline QItemSelection  py_q_mapSelectionFromSource(const QItemSelection&  selection) const { return QIdentityProxyModel::mapSelectionFromSource(selection); }
inline QItemSelection  py_q_mapSelectionToSource(const QItemSelection&  selection) const { return QIdentityProxyModel::mapSelectionToSource(selection); }
inline QModelIndex  py_q_mapToSource(const QModelIndex&  proxyIndex) const { return QIdentityProxyModel::mapToSource(proxyIndex); }
inline QList<QModelIndex >  py_q_match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { return QIdentityProxyModel::match(start, role, value, hits, flags); }
inline bool  py_q_moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QIdentityProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild); }
inline bool  py_q_moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QIdentityProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild); }
inline QModelIndex  py_q_parent(const QModelIndex&  child) const { return QIdentityProxyModel::parent(child); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::removeColumns(column, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::removeRows(row, count, parent); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QIdentityProxyModel::rowCount(parent); }
inline void py_q_setSourceModel(QAbstractItemModel*  sourceModel) { QIdentityProxyModel::setSourceModel(sourceModel); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QIdentityProxyModel::sibling(row, column, idx); }
};

class PythonQtWrapper_QIdentityProxyModel : public QObject
{ Q_OBJECT
public:
public slots:
QIdentityProxyModel* new_QIdentityProxyModel(QObject*  parent = nullptr);
void delete_QIdentityProxyModel(QIdentityProxyModel* obj) { delete obj; } 
   int  py_q_columnCount(QIdentityProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_columnCount(parent));}
   bool  py_q_dropMimeData(QIdentityProxyModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   QVariant  py_q_headerData(QIdentityProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QModelIndex  py_q_index(QIdentityProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_index(row, column, parent));}
   bool  py_q_insertColumns(QIdentityProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_insertColumns(column, count, parent));}
   bool  py_q_insertRows(QIdentityProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   QModelIndex  py_q_mapFromSource(QIdentityProxyModel* theWrappedObject, const QModelIndex&  sourceIndex) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapFromSource(sourceIndex));}
   QItemSelection  py_q_mapSelectionFromSource(QIdentityProxyModel* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapSelectionFromSource(selection));}
   QItemSelection  py_q_mapSelectionToSource(QIdentityProxyModel* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapSelectionToSource(selection));}
   QModelIndex  py_q_mapToSource(QIdentityProxyModel* theWrappedObject, const QModelIndex&  proxyIndex) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapToSource(proxyIndex));}
   QList<QModelIndex >  py_q_match(QIdentityProxyModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_match(start, role, value, hits, flags));}
   bool  py_q_moveColumns(QIdentityProxyModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild));}
   bool  py_q_moveRows(QIdentityProxyModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild));}
   QModelIndex  py_q_parent(QIdentityProxyModel* theWrappedObject, const QModelIndex&  child) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_parent(child));}
   bool  py_q_removeColumns(QIdentityProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   bool  py_q_removeRows(QIdentityProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   int  py_q_rowCount(QIdentityProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_rowCount(parent));}
   void py_q_setSourceModel(QIdentityProxyModel* theWrappedObject, QAbstractItemModel*  sourceModel){  (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_setSourceModel(sourceModel));}
   QModelIndex  py_q_sibling(QIdentityProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
};





class PythonQtShell_QJsonParseError : public QJsonParseError
{
public:
    PythonQtShell_QJsonParseError():QJsonParseError(),_wrapper(NULL) {};

   ~PythonQtShell_QJsonParseError();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QJsonParseError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ParseError )
enum ParseError{
  NoError = QJsonParseError::NoError,   UnterminatedObject = QJsonParseError::UnterminatedObject,   MissingNameSeparator = QJsonParseError::MissingNameSeparator,   UnterminatedArray = QJsonParseError::UnterminatedArray,   MissingValueSeparator = QJsonParseError::MissingValueSeparator,   IllegalValue = QJsonParseError::IllegalValue,   TerminationByNumber = QJsonParseError::TerminationByNumber,   IllegalNumber = QJsonParseError::IllegalNumber,   IllegalEscapeSequence = QJsonParseError::IllegalEscapeSequence,   IllegalUTF8String = QJsonParseError::IllegalUTF8String,   UnterminatedString = QJsonParseError::UnterminatedString,   MissingObject = QJsonParseError::MissingObject,   DeepNesting = QJsonParseError::DeepNesting,   DocumentTooLarge = QJsonParseError::DocumentTooLarge,   GarbageAtEnd = QJsonParseError::GarbageAtEnd};
public slots:
QJsonParseError* new_QJsonParseError();
void delete_QJsonParseError(QJsonParseError* obj) { delete obj; } 
   QString  errorString(QJsonParseError* theWrappedObject) const;
void py_set_error(QJsonParseError* theWrappedObject, QJsonParseError::ParseError  error){ theWrappedObject->error = error; }
QJsonParseError::ParseError  py_get_error(QJsonParseError* theWrappedObject){ return theWrappedObject->error; }
void py_set_offset(QJsonParseError* theWrappedObject, int  offset){ theWrappedObject->offset = offset; }
int  py_get_offset(QJsonParseError* theWrappedObject){ return theWrappedObject->offset; }
};


