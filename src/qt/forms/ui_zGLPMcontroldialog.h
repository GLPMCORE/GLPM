/********************************************************************************
** Form generated from reading UI file 'zGLPMcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGLPMCONTROLDIALOG_H
#define UI_ZGLPMCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZGLPMControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZGLPM;
    QLabel *labelZGLPM_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZGLPMControlDialog)
    {
        if (ZGLPMControlDialog->objectName().isEmpty())
            ZGLPMControlDialog->setObjectName(QStringLiteral("ZGLPMControlDialog"));
        ZGLPMControlDialog->resize(681, 384);
        ZGLPMControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZGLPMControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZGLPMControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZGLPMControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZGLPM = new QLabel(ZGLPMControlDialog);
        labelZGLPM->setObjectName(QStringLiteral("labelZGLPM"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZGLPM);

        labelZGLPM_int = new QLabel(ZGLPMControlDialog);
        labelZGLPM_int->setObjectName(QStringLiteral("labelZGLPM_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZGLPM_int);

        pushButtonAll = new QPushButton(ZGLPMControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZGLPMControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zGLPM Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZGLPMControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZGLPMControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZGLPMControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZGLPMControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZGLPMControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZGLPMControlDialog)
    {
        ZGLPMControlDialog->setWindowTitle(QApplication::translate("ZGLPMControlDialog", "Select zGLPM to Spend", Q_NULLPTR));
        labelQuantity->setText(QApplication::translate("ZGLPMControlDialog", "Quantity", Q_NULLPTR));
        labelQuantity_int->setText(QApplication::translate("ZGLPMControlDialog", "0", Q_NULLPTR));
        labelZGLPM->setText(QApplication::translate("ZGLPMControlDialog", "zGLPM", Q_NULLPTR));
        labelZGLPM_int->setText(QApplication::translate("ZGLPMControlDialog", "0", Q_NULLPTR));
        pushButtonAll->setText(QApplication::translate("ZGLPMControlDialog", "Select/Deselect All", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZGLPMControlDialog", "Is Spendable", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZGLPMControlDialog: public Ui_ZGLPMControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGLPMCONTROLDIALOG_H
