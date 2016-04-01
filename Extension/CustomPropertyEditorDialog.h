#pragma once

#include "CustomPropertyOptionsDialog.h"
#include "PropertyWidgetEx.h"

#include <QDialog>
#include <QVariant>

#include <functional>

namespace Ui
{
	class CustomPropertyEditorDialog;
}

class QAbstractButton;
class QtnProperty;
class QtnPropertyBase;
class QtnPropertySet;
class VarProperty;

class CustomPropertyEditorDialog : public QDialog, public QtnPropertyWidgetExDelegate
{
	Q_OBJECT

public:
	explicit CustomPropertyEditorDialog(QWidget *parent = nullptr);
	virtual ~CustomPropertyEditorDialog();

	bool execute(const QString &title, QVariant &data);

	void setReadOnly(bool value);

	virtual void accept() override;
	virtual void reject() override;

	virtual bool canRemoveProperty(QtnPropertyBase *property) override;
	virtual bool canCutToClipboard() override;
	virtual bool canCopyToClipboard() override;
	virtual bool canPasteFromClipboard() override;

protected:
	virtual bool dataHasSupportedFormats(const QMimeData *data) override;
	virtual void removeProperty(QtnPropertyBase *property) override;
	virtual QMimeData *getPropertyDataForAction(QtnPropertyBase *property,
												Qt::DropAction action) override;
	virtual bool applyPropertyData(const QMimeData *data,
								   QtnPropertyBase *destination,
								   QtnApplyPosition position) override;

signals:
	void apply(const QVariant &data);

private slots:
	void onActivePropertyChanged(QtnPropertyBase* activeProperty);
	void onPropertyValueAccept(const QtnProperty *property, void *valueToAccept, bool *accept);

	void on_buttonBox_clicked(QAbstractButton *button);

	void on_propertyWidget_customContextMenuRequested(const QPoint &pos);

	void on_actionPropertyAdd_triggered();

	void on_actionPropertyDuplicate_triggered();

	void on_actionPropertyOptions_triggered();

private:
	void updateData();
	void updateSet(QtnPropertyBase *set_property, int child_index);
	void updateActions(QtnPropertyBase *property = nullptr);
	void updateTitle();
	bool getActiveVarProperty(QtnPropertyBase *&property, VarProperty *&var_property);
	static VarProperty *getVarProperty(QtnPropertyBase *source);
	QtnPropertyBase *newProperty(QtnPropertySet *parent,
								 const QVariant &value,
								 const QString &key,
								 int index,
								 VarProperty *map_parent);


	void addProperty(QtnPropertyBase *source, const CustomPropertyData &data);
	void duplicateProperty(QtnPropertyBase *source, const CustomPropertyData &data);
	void updatePropertyOptions(QtnPropertyBase *source, const CustomPropertyData &data);

	void addShortcutForAction(const QKeySequence &key_seq, QAction *action);

	Ui::CustomPropertyEditorDialog *ui;
	QVariant::Type last_add_type;
	QVariant *data_ptr;

	bool read_only;
};
