/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_9;
    QTextEdit *textEdit_2;
    QListWidget *recordingsList;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *inputDeviceComboBox;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *outputDeviceComboBox;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *recordButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *summaryButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModality::ApplicationModal);
        MainWindow->resize(723, 969);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(400, 350));
        QPalette palette;
        QBrush brush(QColor(141, 143, 238, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(140, 142, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(70, 70, 70, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        QBrush brush4(QColor(77, 77, 77, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush4);
        QBrush brush5(QColor(61, 61, 61, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette.setBrush(QPalette::Active, QPalette::Window, brush5);
        QBrush brush6(QColor(94, 94, 94, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        QBrush brush7(QColor(6, 6, 6, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush7);
        QBrush brush8(QColor(81, 81, 81, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(59, 59, 59, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        MainWindow->setFont(font);
        MainWindow->setWindowOpacity(1.000000000000000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setEnabled(false);
        textEdit->setMinimumSize(QSize(0, 80));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush7);
        QBrush brush10(QColor(102, 0, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush10);
        QBrush brush11(QColor(52, 52, 52, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush11);
        textEdit->setPalette(palette1);
        textEdit->setFrameShape(QFrame::Shape::Box);
        textEdit->setFrameShadow(QFrame::Shadow::Sunken);
        textEdit->setLineWidth(1);
        textEdit->setMidLineWidth(1);
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(3);
        verticalLayout_9->setObjectName("verticalLayout_9");
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setEnabled(false);
        textEdit_2->setMinimumSize(QSize(0, 35));
        textEdit_2->setMaximumSize(QSize(16777215, 30));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush11);
        textEdit_2->setPalette(palette2);
        textEdit_2->setFrameShape(QFrame::Shape::Box);
        textEdit_2->setFrameShadow(QFrame::Shadow::Sunken);
        textEdit_2->setLineWidth(1);
        textEdit_2->setMidLineWidth(1);
        textEdit_2->setReadOnly(true);

        verticalLayout_9->addWidget(textEdit_2);

        recordingsList = new QListWidget(centralwidget);
        recordingsList->setObjectName("recordingsList");
        recordingsList->setMinimumSize(QSize(165, 0));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush11);
        recordingsList->setPalette(palette3);
        recordingsList->setMouseTracking(true);
        recordingsList->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        recordingsList->setFrameShape(QFrame::Shape::Box);
        recordingsList->setFrameShadow(QFrame::Shadow::Sunken);
        recordingsList->setLineWidth(1);
        recordingsList->setMidLineWidth(1);
        recordingsList->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        recordingsList->setAlternatingRowColors(true);
        recordingsList->setResizeMode(QListView::ResizeMode::Adjust);

        verticalLayout_9->addWidget(recordingsList);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        verticalLayout_9->setStretch(0, 1);
        verticalLayout_9->setStretch(1, 2);
        verticalLayout_9->setStretch(2, 1);

        horizontalLayout_7->addLayout(verticalLayout_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(-1, 13, -1, -1);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        verticalLayout_8->setStretch(0, 5);

        horizontalLayout_7->addLayout(verticalLayout_8);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 2);
        horizontalLayout_7->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        inputDeviceComboBox = new QComboBox(centralwidget);
        inputDeviceComboBox->setObjectName("inputDeviceComboBox");
        inputDeviceComboBox->setMinimumSize(QSize(165, 0));
        inputDeviceComboBox->setMaximumSize(QSize(400, 16777215));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush10);
        QBrush brush12(QColor(255, 255, 255, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush11);
        QBrush brush13(QColor(255, 255, 255, 128));
        brush13.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        inputDeviceComboBox->setPalette(palette4);
        inputDeviceComboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #3d3d3d;\n"
"    color: white; /* tekstin v\303\244ri, jos haluat */\n"
"}\n"
"\n"
"/* Alasvetolista (Popup) */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #3d3d3d;\n"
"    color: white;\n"
"    selection-background-color: #5e5e5e; /* korostusv\303\244ri klikatulle */\n"
"}\n"
"\n"
"/* Vuorottelu jokatoiselle riville: */\n"
"QComboBox QAbstractItemView::item {\n"
"    background-color: #3d3d3d;\n"
"}\n"
"\n"
"/* Jokatoiselle riville v\303\244h\303\244n eriv\303\244ri: */\n"
"QComboBox QAbstractItemView::item:alternate {\n"
"    background-color: #5e5e5e;\n"
"}"));

        horizontalLayout_3->addWidget(inputDeviceComboBox);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        outputDeviceComboBox = new QComboBox(centralwidget);
        outputDeviceComboBox->setObjectName("outputDeviceComboBox");
        outputDeviceComboBox->setMinimumSize(QSize(165, 0));
        outputDeviceComboBox->setMaximumSize(QSize(400, 16777215));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush7);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        outputDeviceComboBox->setPalette(palette5);
        outputDeviceComboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #3d3d3d;\n"
"    color: white; /* tekstin v\303\244ri, jos haluat */\n"
"}\n"
"\n"
"/* Alasvetolista (Popup) */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #3d3d3d;\n"
"    color: white;\n"
"    selection-background-color: #5e5e5e; /* korostusv\303\244ri klikatulle */\n"
"}\n"
"\n"
"/* Vuorottelu jokatoiselle riville: */\n"
"QComboBox QAbstractItemView::item {\n"
"    background-color: #3d3d3d;\n"
"}\n"
"\n"
"/* Jokatoiselle riville v\303\244h\303\244n eriv\303\244ri: */\n"
"QComboBox QAbstractItemView::item:alternate {\n"
"    background-color: #5e5e5e;\n"
"}"));

        horizontalLayout_3->addWidget(outputDeviceComboBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(3, 2);
        horizontalLayout_3->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        recordButton = new QPushButton(centralwidget);
        recordButton->setObjectName("recordButton");
        sizePolicy.setHeightForWidth(recordButton->sizePolicy().hasHeightForWidth());
        recordButton->setSizePolicy(sizePolicy);
        recordButton->setMinimumSize(QSize(165, 25));
        recordButton->setMaximumSize(QSize(400, 50));
        QPalette palette6;
        QBrush brush14(QColor(41, 124, 202, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush14);
        QBrush brush15(QColor(39, 0, 0, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush15);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush14);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush14);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush15);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush15);
        QBrush brush16(QColor(41, 124, 202, 128));
        brush16.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush16);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush14);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush15);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush14);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush14);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush15);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush15);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush15);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush15);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        recordButton->setPalette(palette6);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(12);
        recordButton->setFont(font1);
        recordButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        recordButton->setMouseTracking(true);
        recordButton->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        recordButton->setAcceptDrops(false);
        recordButton->setAutoFillBackground(false);
        recordButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-icon: url(\"C:/Users/valle/Downloads/rec-button\");\n"
"    qproperty-iconSize: 21px 21px;\n"
"    background-color: #270000;\n"
"    color: #297cca;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../Downloads/rec-button.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        recordButton->setIcon(icon);
        recordButton->setIconSize(QSize(21, 21));
        recordButton->setCheckable(false);

        horizontalLayout_6->addWidget(recordButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        summaryButton = new QPushButton(centralwidget);
        summaryButton->setObjectName("summaryButton");
        sizePolicy.setHeightForWidth(summaryButton->sizePolicy().hasHeightForWidth());
        summaryButton->setSizePolicy(sizePolicy);
        summaryButton->setMinimumSize(QSize(165, 25));
        summaryButton->setMaximumSize(QSize(400, 50));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush15);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush15);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush15);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush15);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush15);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush15);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush15);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush14);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush15);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush15);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush15);
        palette7.setBrush(QPalette::Active, QPalette::Highlight, brush15);
        palette7.setBrush(QPalette::Active, QPalette::HighlightedText, brush15);
        palette7.setBrush(QPalette::Active, QPalette::Link, brush15);
        palette7.setBrush(QPalette::Active, QPalette::LinkVisited, brush15);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush15);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush15);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette7.setBrush(QPalette::Active, QPalette::Accent, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush14);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::Highlight, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::Link, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush15);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::Accent, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Link, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush15);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::Accent, brush15);
        summaryButton->setPalette(palette7);
        summaryButton->setFont(font1);
        summaryButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        summaryButton->setMouseTracking(true);
        summaryButton->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        summaryButton->setAcceptDrops(false);
#if QT_CONFIG(whatsthis)
        summaryButton->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        summaryButton->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        summaryButton->setAutoFillBackground(false);
        summaryButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-icon: url(\"C:/Users/valle/Downloads/bot\");\n"
"    qproperty-iconSize: 21px 21px;\n"
"    background-color: #270000;\n"
"    color: #297cca;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../../Downloads/bot.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        summaryButton->setIcon(icon1);
        summaryButton->setIconSize(QSize(21, 21));
        summaryButton->setCheckable(false);
        summaryButton->setAutoDefault(false);

        horizontalLayout_6->addWidget(summaryButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);
        horizontalLayout_6->setStretch(3, 2);
        horizontalLayout_6->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 7);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 2);

        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 723, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        summaryButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; color:#297cca;\">VaREX 0.2</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; color:#297cca;\">Recorder</span></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#297cca;\">Recordings</span></p></body></html>", nullptr));
        recordButton->setText(QCoreApplication::translate("MainWindow", "Aloita nauhoitus", nullptr));
        summaryButton->setText(QCoreApplication::translate("MainWindow", "Luo kooste", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
