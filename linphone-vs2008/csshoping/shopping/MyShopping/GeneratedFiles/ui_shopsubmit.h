/********************************************************************************
** Form generated from reading UI file 'shopsubmit.ui'
**
** Created: Fri Oct 23 16:11:07 2015
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPSUBMIT_H
#define UI_SHOPSUBMIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shopsubmit
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *manageBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *xgClassBtn;
    QPushButton *xgProductBtn;
    QPushButton *shProductBtn;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QTableWidget *tableWidgetClass;
    QLabel *label_8;
    QTableWidget *tableWidgetProduct;
    QHBoxLayout *horizontalLayout_2;
    QLabel *countdownLabel;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QLineEdit *purchaseLE;
    QLabel *label;
    QComboBox *comboproduct;
    QPushButton *productModeBtn;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QComboBox *sh_product_box;
    QSpacerItem *horizontalSpacer_4;
    QTableWidget *tablesHProduct;
    QHBoxLayout *horizontalLayout_5;
    QLabel *shImageLabel;
    QListWidget *shDetailInfoList;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit_2;
    QPushButton *requireShBtn;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QLabel *label_16;
    QLineEdit *lineEdit_14;
    QComboBox *comboBox;
    QLineEdit *lineEdit_8;
    QLabel *label_15;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *lineEdit_16;
    QLabel *label_14;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_10;
    QLabel *label_22;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_21;
    QLabel *label_18;
    QLabel *label_24;
    QLineEdit *lineEdit_13;
    QLabel *label_17;
    QLabel *label_23;
    QLabel *label_28;
    QLabel *label_43;
    QLabel *label_45;
    QLineEdit *lineEdit_24;
    QLineEdit *lineEdit_25;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit_22;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_44;
    QLabel *label_19;
    QPushButton *spUploadBtn;
    QLineEdit *lineEdit_20;
    QPushButton *bigpicBtn;
    QPushButton *smallpicBtn;
    QLabel *label_26;
    QTextEdit *textEdit_3;
    QLabel *label_25;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_19;
    QPushButton *bigpicBtn_2;
    QLabel *label_42;
    QPushButton *goodsInfoOkBtn;
    QPushButton *goodsDelBtn;
    QPushButton *addProductBtn;
    QPushButton *goodsBackBtn;
    QSpacerItem *horizontalSpacer;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *classGroupBox;
    QLabel *label_4;
    QLineEdit *goodIDLine;
    QLineEdit *goodNameLine;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *goodScaleLine;
    QLabel *label_13;
    QLineEdit *goodOrderLine;
    QPushButton *addClassOkBtn;
    QPushButton *classDelBtn;
    QPushButton *classOkBtn;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *shopsubmit)
    {
        if (shopsubmit->objectName().isEmpty())
            shopsubmit->setObjectName(QString::fromUtf8("shopsubmit"));
        shopsubmit->resize(1155, 790);
        shopsubmit->setStyleSheet(QString::fromUtf8("background-color: rgb(232, 232, 232);"));
        verticalLayout_3 = new QVBoxLayout(shopsubmit);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        manageBtn = new QPushButton(shopsubmit);
        manageBtn->setObjectName(QString::fromUtf8("manageBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(manageBtn->sizePolicy().hasHeightForWidth());
        manageBtn->setSizePolicy(sizePolicy);
        manageBtn->setMinimumSize(QSize(199, 42));
        manageBtn->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        manageBtn->setFont(font);
        manageBtn->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"border-image: url(:/MyShopping/anniu_1.png);\n"
"background-image: url(:/MyShopping/anniu_1.png);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover { \n"
"background-image: url(:/MyShopping/anniu_2.png);\n"
"border-image: url(:/MyShopping/anniu_2.png);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-image: url(:/MyShopping/anniu_3.png);\n"
"border-image: url(:/MyShopping/anniu_3.png);\n"
"color: rgb(255, 255, 255);\n"
"}"));

        horizontalLayout->addWidget(manageBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        xgClassBtn = new QPushButton(shopsubmit);
        xgClassBtn->setObjectName(QString::fromUtf8("xgClassBtn"));
        sizePolicy.setHeightForWidth(xgClassBtn->sizePolicy().hasHeightForWidth());
        xgClassBtn->setSizePolicy(sizePolicy);
        xgClassBtn->setMinimumSize(QSize(150, 42));
        xgClassBtn->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        xgClassBtn->setFont(font1);
        xgClassBtn->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"border-image: url(:/MyShopping/anniu_1.png);\n"
"background-image: url(:/MyShopping/anniu_1.png);\n"
"color: rgb(74, 74, 74);\n"
"}\n"
"QPushButton:hover { \n"
"background-image: url(:/MyShopping/anniu_2.png);\n"
"border-image: url(:/MyShopping/anniu_2.png);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-image: url(:/MyShopping/anniu_3.png);\n"
"border-image: url(:/MyShopping/anniu_3.png);\n"
"color: rgb(255, 255, 255);\n"
"}"));

        horizontalLayout->addWidget(xgClassBtn);

        xgProductBtn = new QPushButton(shopsubmit);
        xgProductBtn->setObjectName(QString::fromUtf8("xgProductBtn"));
        sizePolicy.setHeightForWidth(xgProductBtn->sizePolicy().hasHeightForWidth());
        xgProductBtn->setSizePolicy(sizePolicy);
        xgProductBtn->setMinimumSize(QSize(150, 42));
        xgProductBtn->setMaximumSize(QSize(16777215, 30));
        xgProductBtn->setFont(font1);
        xgProductBtn->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"border-image: url(:/MyShopping/anniu_1.png);\n"
"background-image: url(:/MyShopping/anniu_1.png);\n"
"color: rgb(74, 74, 74);\n"
"}\n"
"QPushButton:hover { \n"
"background-image: url(:/MyShopping/anniu_2.png);\n"
"border-image: url(:/MyShopping/anniu_2.png);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-image: url(:/MyShopping/anniu_3.png);\n"
"border-image: url(:/MyShopping/anniu_3.png);\n"
"color: rgb(255, 255, 255);\n"
"}"));

        horizontalLayout->addWidget(xgProductBtn);

        shProductBtn = new QPushButton(shopsubmit);
        shProductBtn->setObjectName(QString::fromUtf8("shProductBtn"));
        sizePolicy.setHeightForWidth(shProductBtn->sizePolicy().hasHeightForWidth());
        shProductBtn->setSizePolicy(sizePolicy);
        shProductBtn->setMinimumSize(QSize(150, 42));
        shProductBtn->setMaximumSize(QSize(16777215, 30));
        shProductBtn->setFont(font1);
        shProductBtn->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"border-image: url(:/MyShopping/anniu_1.png);\n"
"background-image: url(:/MyShopping/anniu_1.png);\n"
"color: rgb(74, 74, 74);\n"
"}\n"
"QPushButton:hover { \n"
"background-image: url(:/MyShopping/anniu_2.png);\n"
"border-image: url(:/MyShopping/anniu_2.png);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-image: url(:/MyShopping/anniu_3.png);\n"
"border-image: url(:/MyShopping/anniu_3.png);\n"
"color: rgb(255, 255, 255);\n"
"}"));

        horizontalLayout->addWidget(shProductBtn);


        verticalLayout_3->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(shopsubmit);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 0));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setFont(font1);
        label_7->setMouseTracking(false);

        verticalLayout->addWidget(label_7);

        tableWidgetClass = new QTableWidget(page);
        tableWidgetClass->setObjectName(QString::fromUtf8("tableWidgetClass"));
        tableWidgetClass->setMaximumSize(QSize(16777215, 300));
        tableWidgetClass->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(tableWidgetClass);

        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setFont(font1);
        label_8->setMouseTracking(false);

        verticalLayout->addWidget(label_8);

        tableWidgetProduct = new QTableWidget(page);
        tableWidgetProduct->setObjectName(QString::fromUtf8("tableWidgetProduct"));
        tableWidgetProduct->setMinimumSize(QSize(0, 0));
        tableWidgetProduct->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(tableWidgetProduct);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        countdownLabel = new QLabel(page);
        countdownLabel->setObjectName(QString::fromUtf8("countdownLabel"));
        countdownLabel->setMinimumSize(QSize(250, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        countdownLabel->setFont(font2);
        countdownLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_2->addWidget(countdownLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 0));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        label_2->setFont(font3);

        horizontalLayout_2->addWidget(label_2);

        purchaseLE = new QLineEdit(page);
        purchaseLE->setObjectName(QString::fromUtf8("purchaseLE"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(purchaseLE->sizePolicy().hasHeightForWidth());
        purchaseLE->setSizePolicy(sizePolicy2);
        purchaseLE->setMinimumSize(QSize(0, 30));
        purchaseLE->setMaximumSize(QSize(150, 30));
        purchaseLE->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(purchaseLE);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font3);

        horizontalLayout_2->addWidget(label);

        comboproduct = new QComboBox(page);
        comboproduct->setObjectName(QString::fromUtf8("comboproduct"));
        comboproduct->setMinimumSize(QSize(150, 25));
        comboproduct->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(comboproduct);

        productModeBtn = new QPushButton(page);
        productModeBtn->setObjectName(QString::fromUtf8("productModeBtn"));
        sizePolicy.setHeightForWidth(productModeBtn->sizePolicy().hasHeightForWidth());
        productModeBtn->setSizePolicy(sizePolicy);
        productModeBtn->setMinimumSize(QSize(100, 25));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        productModeBtn->setFont(font4);
        productModeBtn->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"border-image: url(:/MyShopping/anniu_1.png);\n"
"background-image: url(:/MyShopping/anniu_1.png);\n"
"color: rgb(74,74,74);\n"
"}\n"
"QPushButton:hover { \n"
"background-image: url(:/MyShopping/anniu_2.png);\n"
"border-image: url(:/MyShopping/anniu_2.png);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-image: url(:/MyShopping/anniu_3.png);\n"
"border-image: url(:/MyShopping/anniu_3.png);\n"
"color: rgb(255, 255, 255);\n"
"}"));

        horizontalLayout_2->addWidget(productModeBtn);


        verticalLayout->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(page);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_2 = new QVBoxLayout(page_4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(page_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(100, 25));
        label_9->setMaximumSize(QSize(100, 25));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Aharoni"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        label_9->setFont(font5);

        horizontalLayout_3->addWidget(label_9);

        sh_product_box = new QComboBox(page_4);
        sh_product_box->setObjectName(QString::fromUtf8("sh_product_box"));
        sh_product_box->setMinimumSize(QSize(150, 25));
        sh_product_box->setMaximumSize(QSize(150, 25));
        sh_product_box->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(sh_product_box);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tablesHProduct = new QTableWidget(page_4);
        tablesHProduct->setObjectName(QString::fromUtf8("tablesHProduct"));
        tablesHProduct->setEnabled(true);
        tablesHProduct->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(tablesHProduct);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        shImageLabel = new QLabel(page_4);
        shImageLabel->setObjectName(QString::fromUtf8("shImageLabel"));
        shImageLabel->setEnabled(true);
        shImageLabel->setMinimumSize(QSize(350, 300));
        shImageLabel->setMaximumSize(QSize(350, 350));
        shImageLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 245, 255);"));

        horizontalLayout_5->addWidget(shImageLabel);

        shDetailInfoList = new QListWidget(page_4);
        shDetailInfoList->setObjectName(QString::fromUtf8("shDetailInfoList"));
        shDetailInfoList->setMinimumSize(QSize(100, 300));
        shDetailInfoList->setMaximumSize(QSize(16777215, 300));
        shDetailInfoList->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(shDetailInfoList);

        groupBox_2 = new QGroupBox(page_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(250, 280));
        groupBox_2->setMaximumSize(QSize(280, 300));
        textEdit_2 = new QTextEdit(groupBox_2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(0, 0, 250, 241));
        textEdit_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        requireShBtn = new QPushButton(groupBox_2);
        requireShBtn->setObjectName(QString::fromUtf8("requireShBtn"));
        requireShBtn->setGeometry(QRect(0, 250, 250, 41));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Aharoni"));
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        requireShBtn->setFont(font6);
        requireShBtn->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"border-image: url(:/MyShopping/anniu_1.png);\n"
"background-image: url(:/MyShopping/anniu_1.png);\n"
"color: rgb(74, 74, 74);\n"
"}\n"
"QPushButton:hover { \n"
"background-image: url(:/MyShopping/anniu_2.png);\n"
"border-image: url(:/MyShopping/anniu_2.png);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-image: url(:/MyShopping/anniu_3.png);\n"
"border-image: url(:/MyShopping/anniu_3.png);\n"
"color: rgb(255, 255, 255);\n"
"}"));

        horizontalLayout_5->addWidget(groupBox_2);


        verticalLayout_2->addLayout(horizontalLayout_5);

        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_4 = new QVBoxLayout(page_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(1100, 500));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(22, 169, 160, 30));
        label_16->setMinimumSize(QSize(160, 30));
        label_16->setMaximumSize(QSize(160, 30));
        label_16->setFont(font4);
        label_16->setLayoutDirection(Qt::RightToLeft);
        lineEdit_14 = new QLineEdit(groupBox);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(740, 90, 300, 30));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_14->sizePolicy().hasHeightForWidth());
        lineEdit_14->setSizePolicy(sizePolicy3);
        lineEdit_14->setMinimumSize(QSize(300, 30));
        lineEdit_14->setMaximumSize(QSize(16777215, 30));
        lineEdit_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(188, 131, 300, 30));
        sizePolicy3.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy3);
        comboBox->setMinimumSize(QSize(300, 30));
        comboBox->setMaximumSize(QSize(16777215, 30));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setEnabled(false);
        lineEdit_8->setGeometry(QRect(188, 89, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy3);
        lineEdit_8->setMinimumSize(QSize(300, 30));
        lineEdit_8->setMaximumSize(QSize(16777215, 30));
        lineEdit_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 129, 160, 30));
        label_15->setMinimumSize(QSize(160, 30));
        label_15->setMaximumSize(QSize(160, 16777215));
        label_15->setFont(font4);
        label_15->setLayoutDirection(Qt::RightToLeft);
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(610, 89, 110, 30));
        label_20->setMinimumSize(QSize(110, 30));
        label_20->setFont(font4);
        label_20->setLayoutDirection(Qt::RightToLeft);
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(610, 131, 110, 30));
        label_21->setMinimumSize(QSize(110, 30));
        label_21->setFont(font4);
        label_21->setLayoutDirection(Qt::RightToLeft);
        lineEdit_16 = new QLineEdit(groupBox);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(740, 169, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_16->sizePolicy().hasHeightForWidth());
        lineEdit_16->setSizePolicy(sizePolicy3);
        lineEdit_16->setMinimumSize(QSize(300, 30));
        lineEdit_16->setMaximumSize(QSize(16777215, 30));
        lineEdit_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(22, 89, 160, 30));
        label_14->setMinimumSize(QSize(160, 30));
        label_14->setMaximumSize(QSize(160, 16777215));
        label_14->setFont(font4);
        label_14->setLayoutDirection(Qt::RightToLeft);
        lineEdit_15 = new QLineEdit(groupBox);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(740, 129, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_15->sizePolicy().hasHeightForWidth());
        lineEdit_15->setSizePolicy(sizePolicy3);
        lineEdit_15->setMinimumSize(QSize(300, 30));
        lineEdit_15->setMaximumSize(QSize(16777215, 30));
        lineEdit_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_10 = new QLineEdit(groupBox);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(188, 173, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_10->sizePolicy().hasHeightForWidth());
        lineEdit_10->setSizePolicy(sizePolicy3);
        lineEdit_10->setMinimumSize(QSize(300, 30));
        lineEdit_10->setMaximumSize(QSize(16777215, 30));
        lineEdit_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(610, 173, 110, 30));
        label_22->setMinimumSize(QSize(110, 30));
        label_22->setFont(font4);
        label_22->setLayoutDirection(Qt::RightToLeft);
        lineEdit_18 = new QLineEdit(groupBox);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(740, 249, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_18->sizePolicy().hasHeightForWidth());
        lineEdit_18->setSizePolicy(sizePolicy3);
        lineEdit_18->setMinimumSize(QSize(300, 30));
        lineEdit_18->setMaximumSize(QSize(16777215, 30));
        lineEdit_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_12 = new QLineEdit(groupBox);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(188, 249, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_12->sizePolicy().hasHeightForWidth());
        lineEdit_12->setSizePolicy(sizePolicy3);
        lineEdit_12->setMinimumSize(QSize(300, 30));
        lineEdit_12->setMaximumSize(QSize(16777215, 30));
        lineEdit_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_17 = new QLineEdit(groupBox);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(740, 209, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_17->sizePolicy().hasHeightForWidth());
        lineEdit_17->setSizePolicy(sizePolicy3);
        lineEdit_17->setMinimumSize(QSize(300, 30));
        lineEdit_17->setMaximumSize(QSize(16777215, 30));
        lineEdit_17->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_11 = new QLineEdit(groupBox);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(188, 209, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_11->sizePolicy().hasHeightForWidth());
        lineEdit_11->setSizePolicy(sizePolicy3);
        lineEdit_11->setMinimumSize(QSize(300, 30));
        lineEdit_11->setMaximumSize(QSize(16777215, 30));
        lineEdit_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_21 = new QLineEdit(groupBox);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(740, 289, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_21->sizePolicy().hasHeightForWidth());
        lineEdit_21->setSizePolicy(sizePolicy3);
        lineEdit_21->setMinimumSize(QSize(300, 30));
        lineEdit_21->setMaximumSize(QSize(16777215, 30));
        lineEdit_21->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(20, 249, 160, 30));
        label_18->setMinimumSize(QSize(160, 30));
        label_18->setMaximumSize(QSize(160, 30));
        label_18->setFont(font4);
        label_18->setLayoutDirection(Qt::RightToLeft);
        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(610, 249, 112, 30));
        label_24->setMinimumSize(QSize(110, 30));
        label_24->setFont(font4);
        label_24->setLayoutDirection(Qt::RightToLeft);
        lineEdit_13 = new QLineEdit(groupBox);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(188, 291, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_13->sizePolicy().hasHeightForWidth());
        lineEdit_13->setSizePolicy(sizePolicy3);
        lineEdit_13->setMinimumSize(QSize(300, 30));
        lineEdit_13->setMaximumSize(QSize(16777215, 30));
        lineEdit_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 207, 160, 30));
        label_17->setMinimumSize(QSize(160, 30));
        label_17->setMaximumSize(QSize(160, 30));
        label_17->setFont(font4);
        label_17->setLayoutDirection(Qt::RightToLeft);
        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(610, 207, 110, 30));
        label_23->setMinimumSize(QSize(110, 30));
        label_23->setFont(font4);
        label_23->setLayoutDirection(Qt::RightToLeft);
        label_28 = new QLabel(groupBox);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(20, 291, 160, 30));
        label_28->setMinimumSize(QSize(160, 30));
        label_28->setMaximumSize(QSize(160, 16777215));
        label_28->setFont(font4);
        label_28->setLayoutDirection(Qt::RightToLeft);
        label_43 = new QLabel(groupBox);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(610, 291, 110, 30));
        label_43->setMinimumSize(QSize(110, 30));
        label_43->setFont(font4);
        label_43->setLayoutDirection(Qt::RightToLeft);
        label_45 = new QLabel(groupBox);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(20, 369, 163, 30));
        label_45->setMinimumSize(QSize(110, 30));
        label_45->setFont(font4);
        lineEdit_24 = new QLineEdit(groupBox);
        lineEdit_24->setObjectName(QString::fromUtf8("lineEdit_24"));
        lineEdit_24->setGeometry(QRect(740, 369, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_24->sizePolicy().hasHeightForWidth());
        lineEdit_24->setSizePolicy(sizePolicy3);
        lineEdit_24->setMinimumSize(QSize(300, 30));
        lineEdit_24->setMaximumSize(QSize(16777215, 30));
        lineEdit_24->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_25 = new QLineEdit(groupBox);
        lineEdit_25->setObjectName(QString::fromUtf8("lineEdit_25"));
        lineEdit_25->setGeometry(QRect(740, 329, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_25->sizePolicy().hasHeightForWidth());
        lineEdit_25->setSizePolicy(sizePolicy3);
        lineEdit_25->setMinimumSize(QSize(300, 30));
        lineEdit_25->setMaximumSize(QSize(16777215, 30));
        lineEdit_25->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_23 = new QLineEdit(groupBox);
        lineEdit_23->setObjectName(QString::fromUtf8("lineEdit_23"));
        lineEdit_23->setGeometry(QRect(188, 369, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_23->sizePolicy().hasHeightForWidth());
        lineEdit_23->setSizePolicy(sizePolicy3);
        lineEdit_23->setMinimumSize(QSize(300, 30));
        lineEdit_23->setMaximumSize(QSize(16777215, 30));
        lineEdit_23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_22 = new QLineEdit(groupBox);
        lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));
        lineEdit_22->setGeometry(QRect(188, 329, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_22->sizePolicy().hasHeightForWidth());
        lineEdit_22->setSizePolicy(sizePolicy3);
        lineEdit_22->setMinimumSize(QSize(300, 30));
        lineEdit_22->setMaximumSize(QSize(16777215, 30));
        lineEdit_22->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_46 = new QLabel(groupBox);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(610, 369, 110, 30));
        label_46->setMinimumSize(QSize(110, 30));
        label_46->setFont(font4);
        label_46->setLayoutDirection(Qt::RightToLeft);
        label_47 = new QLabel(groupBox);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(610, 327, 110, 30));
        label_47->setMinimumSize(QSize(110, 30));
        label_47->setFont(font4);
        label_47->setLayoutDirection(Qt::RightToLeft);
        label_44 = new QLabel(groupBox);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(20, 327, 160, 30));
        label_44->setMinimumSize(QSize(110, 30));
        label_44->setMaximumSize(QSize(160, 16777215));
        label_44->setFont(font4);
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(70, 499, 110, 30));
        label_19->setMinimumSize(QSize(110, 30));
        label_19->setMaximumSize(QSize(130, 16777215));
        label_19->setFont(font4);
        label_19->setLayoutDirection(Qt::RightToLeft);
        spUploadBtn = new QPushButton(groupBox);
        spUploadBtn->setObjectName(QString::fromUtf8("spUploadBtn"));
        spUploadBtn->setEnabled(true);
        spUploadBtn->setGeometry(QRect(600, 409, 100, 30));
        spUploadBtn->setMinimumSize(QSize(100, 30));
        spUploadBtn->setMaximumSize(QSize(200, 16777215));
        lineEdit_20 = new QLineEdit(groupBox);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(188, 409, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_20->sizePolicy().hasHeightForWidth());
        lineEdit_20->setSizePolicy(sizePolicy3);
        lineEdit_20->setMinimumSize(QSize(300, 30));
        lineEdit_20->setMaximumSize(QSize(16777215, 30));
        lineEdit_20->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        bigpicBtn = new QPushButton(groupBox);
        bigpicBtn->setObjectName(QString::fromUtf8("bigpicBtn"));
        bigpicBtn->setEnabled(false);
        bigpicBtn->setGeometry(QRect(500, 449, 100, 30));
        bigpicBtn->setMinimumSize(QSize(100, 30));
        bigpicBtn->setMaximumSize(QSize(200, 16777215));
        smallpicBtn = new QPushButton(groupBox);
        smallpicBtn->setObjectName(QString::fromUtf8("smallpicBtn"));
        smallpicBtn->setEnabled(true);
        smallpicBtn->setGeometry(QRect(500, 409, 100, 30));
        smallpicBtn->setMinimumSize(QSize(100, 30));
        smallpicBtn->setMaximumSize(QSize(200, 16777215));
        label_26 = new QLabel(groupBox);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(70, 404, 110, 30));
        label_26->setMinimumSize(QSize(110, 30));
        label_26->setMaximumSize(QSize(160, 16777215));
        label_26->setFont(font4);
        label_26->setLayoutDirection(Qt::RightToLeft);
        textEdit_3 = new QTextEdit(groupBox);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(188, 549, 300, 50));
        sizePolicy3.setHeightForWidth(textEdit_3->sizePolicy().hasHeightForWidth());
        textEdit_3->setSizePolicy(sizePolicy3);
        textEdit_3->setMinimumSize(QSize(300, 0));
        textEdit_3->setMaximumSize(QSize(16777215, 50));
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_25 = new QLabel(groupBox);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(70, 447, 110, 30));
        label_25->setMinimumSize(QSize(110, 30));
        label_25->setMaximumSize(QSize(160, 16777215));
        label_25->setFont(font4);
        label_25->setLayoutDirection(Qt::RightToLeft);
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(188, 489, 300, 50));
        sizePolicy3.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy3);
        textEdit->setMinimumSize(QSize(300, 0));
        textEdit->setMaximumSize(QSize(16777215, 50));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_19 = new QLineEdit(groupBox);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(188, 449, 300, 30));
        sizePolicy3.setHeightForWidth(lineEdit_19->sizePolicy().hasHeightForWidth());
        lineEdit_19->setSizePolicy(sizePolicy3);
        lineEdit_19->setMinimumSize(QSize(300, 30));
        lineEdit_19->setMaximumSize(QSize(16777215, 30));
        lineEdit_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        bigpicBtn_2 = new QPushButton(groupBox);
        bigpicBtn_2->setObjectName(QString::fromUtf8("bigpicBtn_2"));
        bigpicBtn_2->setEnabled(false);
        bigpicBtn_2->setGeometry(QRect(600, 449, 100, 30));
        bigpicBtn_2->setMinimumSize(QSize(100, 30));
        bigpicBtn_2->setMaximumSize(QSize(200, 16777215));
        label_42 = new QLabel(groupBox);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(70, 559, 110, 30));
        label_42->setMinimumSize(QSize(110, 30));
        label_42->setFont(font4);
        label_42->setLayoutDirection(Qt::RightToLeft);
        goodsInfoOkBtn = new QPushButton(groupBox);
        goodsInfoOkBtn->setObjectName(QString::fromUtf8("goodsInfoOkBtn"));
        goodsInfoOkBtn->setGeometry(QRect(510, 660, 150, 30));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(goodsInfoOkBtn->sizePolicy().hasHeightForWidth());
        goodsInfoOkBtn->setSizePolicy(sizePolicy4);
        goodsInfoOkBtn->setMinimumSize(QSize(150, 25));
        goodsInfoOkBtn->setMaximumSize(QSize(16777215, 30));
        goodsInfoOkBtn->setFont(font4);
        goodsInfoOkBtn->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"border-image: url(:/MyShopping/anniu_1.png);\n"
"background-image: url(:/MyShopping/anniu_1.png);\n"
"color: rgb(74,74,74);\n"
"}\n"
"QPushButton:hover { \n"
"background-image: url(:/MyShopping/anniu_2.png);\n"
"border-image: url(:/MyShopping/anniu_2.png);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-image: url(:/MyShopping/anniu_3.png);\n"
"border-image: url(:/MyShopping/anniu_3.png);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        goodsDelBtn = new QPushButton(groupBox);
        goodsDelBtn->setObjectName(QString::fromUtf8("goodsDelBtn"));
        goodsDelBtn->setGeometry(QRect(680, 660, 150, 30));
        sizePolicy4.setHeightForWidth(goodsDelBtn->sizePolicy().hasHeightForWidth());
        goodsDelBtn->setSizePolicy(sizePolicy4);
        goodsDelBtn->setMinimumSize(QSize(150, 25));
        goodsDelBtn->setMaximumSize(QSize(16777215, 30));
        goodsDelBtn->setFont(font4);
        goodsDelBtn->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"border-image: url(:/MyShopping/anniu_1.png);\n"
"background-image: url(:/MyShopping/anniu_1.png);\n"
"color: rgb(74,74,74);\n"
"}\n"
"QPushButton:hover { \n"
"background-image: url(:/MyShopping/anniu_2.png);\n"
"border-image: url(:/MyShopping/anniu_2.png);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-image: url(:/MyShopping/anniu_3.png);\n"
"border-image: url(:/MyShopping/anniu_3.png);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        addProductBtn = new QPushButton(groupBox);
        addProductBtn->setObjectName(QString::fromUtf8("addProductBtn"));
        addProductBtn->setGeometry(QRect(350, 660, 150, 30));
        sizePolicy4.setHeightForWidth(addProductBtn->sizePolicy().hasHeightForWidth());
        addProductBtn->setSizePolicy(sizePolicy4);
        addProductBtn->setMinimumSize(QSize(150, 25));
        addProductBtn->setMaximumSize(QSize(16777215, 30));
        addProductBtn->setFont(font4);
        addProductBtn->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"border-image: url(:/MyShopping/anniu_1.png);\n"
"background-image: url(:/MyShopping/anniu_1.png);\n"
"color: rgb(74,74,74);\n"
"}\n"
"QPushButton:hover { \n"
"background-image: url(:/MyShopping/anniu_2.png);\n"
"border-image: url(:/MyShopping/anniu_2.png);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-image: url(:/MyShopping/anniu_3.png);\n"
"border-image: url(:/MyShopping/anniu_3.png);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        goodsBackBtn = new QPushButton(groupBox);
        goodsBackBtn->setObjectName(QString::fromUtf8("goodsBackBtn"));
        goodsBackBtn->setGeometry(QRect(940, 660, 150, 30));
        sizePolicy4.setHeightForWidth(goodsBackBtn->sizePolicy().hasHeightForWidth());
        goodsBackBtn->setSizePolicy(sizePolicy4);
        goodsBackBtn->setMinimumSize(QSize(150, 25));
        goodsBackBtn->setMaximumSize(QSize(16777215, 30));
        goodsBackBtn->setFont(font4);
        goodsBackBtn->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"border-image: url(:/MyShopping/anniu_1.png);\n"
"background-image: url(:/MyShopping/anniu_2.png);\n"
"color: rgb(74,74,74);\n"
"}\n"
"QPushButton:hover { \n"
"background-image: url(:/MyShopping/anniu_2.png);\n"
"border-image: url(:/MyShopping/anniu_2.png);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-image: url(:/MyShopping/anniu_3.png);\n"
"border-image: url(:/MyShopping/anniu_3.png);\n"
"color: rgb(255, 255, 255);\n"
"}"));

        horizontalLayout_4->addWidget(groupBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_4);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        horizontalLayout_7 = new QHBoxLayout(page_3);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        classGroupBox = new QGroupBox(page_3);
        classGroupBox->setObjectName(QString::fromUtf8("classGroupBox"));
        classGroupBox->setMinimumSize(QSize(690, 520));
        classGroupBox->setMaximumSize(QSize(690, 520));
        label_4 = new QLabel(classGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 110, 101, 30));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy5);
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setMaximumSize(QSize(300, 16777215));
        label_4->setFont(font4);
        label_4->setLayoutDirection(Qt::LeftToRight);
        goodIDLine = new QLineEdit(classGroupBox);
        goodIDLine->setObjectName(QString::fromUtf8("goodIDLine"));
        goodIDLine->setEnabled(false);
        goodIDLine->setGeometry(QRect(270, 110, 270, 30));
        sizePolicy3.setHeightForWidth(goodIDLine->sizePolicy().hasHeightForWidth());
        goodIDLine->setSizePolicy(sizePolicy3);
        goodIDLine->setMinimumSize(QSize(0, 30));
        goodIDLine->setMaximumSize(QSize(450, 30));
        goodIDLine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        goodIDLine->setMaxLength(100);
        goodNameLine = new QLineEdit(classGroupBox);
        goodNameLine->setObjectName(QString::fromUtf8("goodNameLine"));
        goodNameLine->setGeometry(QRect(270, 170, 270, 30));
        sizePolicy3.setHeightForWidth(goodNameLine->sizePolicy().hasHeightForWidth());
        goodNameLine->setSizePolicy(sizePolicy3);
        goodNameLine->setMinimumSize(QSize(0, 30));
        goodNameLine->setMaximumSize(QSize(450, 30));
        goodNameLine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        goodNameLine->setMaxLength(200);
        label_5 = new QLabel(classGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 170, 111, 30));
        sizePolicy5.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy5);
        label_5->setMinimumSize(QSize(0, 30));
        label_5->setMaximumSize(QSize(300, 16777215));
        label_5->setFont(font4);
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_6 = new QLabel(classGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(150, 240, 101, 30));
        sizePolicy5.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy5);
        label_6->setMinimumSize(QSize(0, 30));
        label_6->setMaximumSize(QSize(300, 16777215));
        label_6->setFont(font4);
        label_6->setLayoutDirection(Qt::LeftToRight);
        goodScaleLine = new QLineEdit(classGroupBox);
        goodScaleLine->setObjectName(QString::fromUtf8("goodScaleLine"));
        goodScaleLine->setGeometry(QRect(270, 240, 270, 30));
        sizePolicy3.setHeightForWidth(goodScaleLine->sizePolicy().hasHeightForWidth());
        goodScaleLine->setSizePolicy(sizePolicy3);
        goodScaleLine->setMinimumSize(QSize(0, 30));
        goodScaleLine->setMaximumSize(QSize(450, 30));
        goodScaleLine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_13 = new QLabel(classGroupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(150, 310, 101, 30));
        sizePolicy5.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy5);
        label_13->setMinimumSize(QSize(0, 30));
        label_13->setMaximumSize(QSize(300, 16777215));
        label_13->setFont(font4);
        label_13->setLayoutDirection(Qt::LeftToRight);
        goodOrderLine = new QLineEdit(classGroupBox);
        goodOrderLine->setObjectName(QString::fromUtf8("goodOrderLine"));
        goodOrderLine->setGeometry(QRect(270, 310, 270, 30));
        sizePolicy3.setHeightForWidth(goodOrderLine->sizePolicy().hasHeightForWidth());
        goodOrderLine->setSizePolicy(sizePolicy3);
        goodOrderLine->setMinimumSize(QSize(0, 30));
        goodOrderLine->setMaximumSize(QSize(450, 30));
        goodOrderLine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        addClassOkBtn = new QPushButton(classGroupBox);
        addClassOkBtn->setObjectName(QString::fromUtf8("addClassOkBtn"));
        addClassOkBtn->setGeometry(QRect(110, 480, 180, 35));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(addClassOkBtn->sizePolicy().hasHeightForWidth());
        addClassOkBtn->setSizePolicy(sizePolicy6);
        addClassOkBtn->setMinimumSize(QSize(180, 35));
        addClassOkBtn->setFont(font4);
        addClassOkBtn->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"border-image: url(:/MyShopping/anniu_1.png);\n"
"background-image: url(:/MyShopping/anniu_1.png);\n"
"color: rgb(74,74,74);\n"
"}\n"
"QPushButton:hover { \n"
"background-image: url(:/MyShopping/anniu_2.png);\n"
"border-image: url(:/MyShopping/anniu_2.png);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-image: url(:/MyShopping/anniu_3.png);\n"
"border-image: url(:/MyShopping/anniu_3.png);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        classDelBtn = new QPushButton(classGroupBox);
        classDelBtn->setObjectName(QString::fromUtf8("classDelBtn"));
        classDelBtn->setGeometry(QRect(500, 480, 180, 35));
        sizePolicy6.setHeightForWidth(classDelBtn->sizePolicy().hasHeightForWidth());
        classDelBtn->setSizePolicy(sizePolicy6);
        classDelBtn->setMinimumSize(QSize(180, 35));
        classDelBtn->setFont(font4);
        classDelBtn->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"border-image: url(:/MyShopping/anniu_1.png);\n"
"background-image: url(:/MyShopping/anniu_1.png);\n"
"color: rgb(74,74,74);\n"
"}\n"
"QPushButton:hover { \n"
"background-image: url(:/MyShopping/anniu_2.png);\n"
"border-image: url(:/MyShopping/anniu_2.png);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-image: url(:/MyShopping/anniu_3.png);\n"
"border-image: url(:/MyShopping/anniu_3.png);\n"
"color: rgb(255, 255, 255);\n"
"}"));
        classOkBtn = new QPushButton(classGroupBox);
        classOkBtn->setObjectName(QString::fromUtf8("classOkBtn"));
        classOkBtn->setGeometry(QRect(310, 480, 180, 35));
        sizePolicy6.setHeightForWidth(classOkBtn->sizePolicy().hasHeightForWidth());
        classOkBtn->setSizePolicy(sizePolicy6);
        classOkBtn->setMinimumSize(QSize(180, 35));
        classOkBtn->setFont(font4);
        classOkBtn->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"border-image: url(:/MyShopping/anniu_1.png);\n"
"background-image: url(:/MyShopping/anniu_1.png);\n"
"color: rgb(74,74,74);\n"
"}\n"
"QPushButton:hover { \n"
"background-image: url(:/MyShopping/anniu_2.png);\n"
"border-image: url(:/MyShopping/anniu_2.png);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-image: url(:/MyShopping/anniu_3.png);\n"
"border-image: url(:/MyShopping/anniu_3.png);\n"
"color: rgb(255, 255, 255);\n"
"}"));

        horizontalLayout_6->addWidget(classGroupBox);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        stackedWidget->addWidget(page_3);

        verticalLayout_3->addWidget(stackedWidget);


        retranslateUi(shopsubmit);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(shopsubmit);
    } // setupUi

    void retranslateUi(QWidget *shopsubmit)
    {
        shopsubmit->setWindowTitle(QApplication::translate("shopsubmit", "shopsubmit", 0, QApplication::UnicodeUTF8));
        manageBtn->setText(QApplication::translate("shopsubmit", "\344\272\247\345\223\201\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        xgClassBtn->setText(QApplication::translate("shopsubmit", "\345\210\206\347\261\273\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        xgProductBtn->setText(QApplication::translate("shopsubmit", "\344\272\247\345\223\201\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        shProductBtn->setText(QApplication::translate("shopsubmit", "\344\272\247\345\223\201\345\256\241\346\240\270", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("shopsubmit", "\350\257\267\351\200\211\346\213\251\345\225\206\345\223\201\345\210\206\347\261\273\357\274\232", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("shopsubmit", "\344\272\247\345\223\201\346\230\216\347\273\206\357\274\232", 0, QApplication::UnicodeUTF8));
        countdownLabel->setText(QApplication::translate("shopsubmit", "\344\272\247\345\223\201\345\261\236\346\200\247", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("shopsubmit", "\350\257\267\345\241\253\345\206\231\345\233\242\350\264\255\346\227\266\351\227\264\346\256\265\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("shopsubmit", "\344\272\247\345\223\201\345\261\236\346\200\247\344\277\256\346\224\271\357\274\232", 0, QApplication::UnicodeUTF8));
        productModeBtn->setText(QApplication::translate("shopsubmit", "\347\241\256\345\256\232\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("shopsubmit", "\350\257\267\351\200\211\346\213\251\345\210\206\347\261\273\357\274\232", 0, QApplication::UnicodeUTF8));
        shImageLabel->setText(QApplication::translate("shopsubmit", "                     \350\217\234\347\205\247\345\212\240\350\275\275\344\270\255.........", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        textEdit_2->setHtml(QApplication::translate("shopsubmit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\270\251\351\246\250\346\217\220\347\244\272\357\274\232</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">     \350\257\267\344\273\224\347\273\206\346\243\200\346\237\245\345\233\276\347\211\207\345\222\214\346\226\207\345\255\227\347\233\270\345\205\263\344\277\241\346\201\257\357\274\214\347\241\256\350\256\244\346\227\240\350\257"
                        "\257\345\220\216\347\202\271\345\207\273\342\200\234\345\256\241\346\240\270\351\200\232\350\277\207\346\214\211\351\222\256\343\200\202\342\200\235</p></body></html>", 0, QApplication::UnicodeUTF8));
        requireShBtn->setText(QApplication::translate("shopsubmit", "\345\256\241\346\240\270\351\200\232\350\277\207", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("shopsubmit", "\345\225\206\345\223\201\346\267\273\345\212\240(\345\246\202\346\236\234\350\246\201\346\267\273\345\212\240\357\274\214\350\257\267\345\205\210\347\202\271\345\207\273\342\200\234\346\267\273\345\212\240\342\200\235\346\214\211\351\222\256)", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("shopsubmit", "  \345\225\206\345\223\201\345\220\215\347\247\260\346\213\274\351\237\263\357\274\232", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit_8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_15->setText(QApplication::translate("shopsubmit", "  \347\274\226\347\240\201\351\203\250\351\227\250\357\274\232", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("shopsubmit", " \345\225\206\345\223\201\344\272\247\345\234\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("shopsubmit", " \345\225\206\345\223\201\345\236\213\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_14->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        label_14->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        label_14->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_14->setText(QApplication::translate("shopsubmit", "\345\225\206\345\223\201  ID\357\274\232", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("shopsubmit", " \345\225\206\345\223\201\345\223\201\347\211\214\357\274\232", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("shopsubmit", "      \345\225\206\345\223\201\347\237\255\345\220\215\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("shopsubmit", " \345\225\206\345\223\201\345\210\206\347\261\273ID\357\274\232", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("shopsubmit", "  \345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("shopsubmit", " \345\225\206\345\223\201\345\215\225\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("shopsubmit", "  \344\272\244\346\230\223\347\212\266\346\200\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("shopsubmit", "  \346\255\243\345\270\270\345\224\256\344\273\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("shopsubmit", "\345\277\227\346\204\277\350\200\205500\345\260\217\346\227\266\345\224\256\344\273\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("shopsubmit", "\345\270\256\345\233\260\345\224\256\344\273\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("shopsubmit", "\345\225\206\345\223\201\346\257\233\351\207\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("shopsubmit", "\345\277\227\346\204\277\350\200\205200\345\260\217\346\227\266\345\224\256\344\273\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("shopsubmit", " \345\225\206\345\223\201\344\273\213\347\273\215\357\274\232", 0, QApplication::UnicodeUTF8));
        spUploadBtn->setText(QApplication::translate("shopsubmit", "\344\270\212\344\274\240", 0, QApplication::UnicodeUTF8));
        bigpicBtn->setText(QApplication::translate("shopsubmit", "\346\265\217\350\247\210", 0, QApplication::UnicodeUTF8));
        smallpicBtn->setText(QApplication::translate("shopsubmit", "\346\265\217\350\247\210", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("shopsubmit", "\345\260\217\345\233\276\347\211\207\351\223\276\346\216\245\357\274\232", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("shopsubmit", "\345\244\247\345\233\276\347\211\207\351\223\276\346\216\245\357\274\232", 0, QApplication::UnicodeUTF8));
        bigpicBtn_2->setText(QApplication::translate("shopsubmit", "\344\270\212\344\274\240", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("shopsubmit", "  \346\272\257\346\272\220\346\217\217\350\277\260\357\274\232", 0, QApplication::UnicodeUTF8));
        goodsInfoOkBtn->setText(QApplication::translate("shopsubmit", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        goodsDelBtn->setText(QApplication::translate("shopsubmit", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        addProductBtn->setText(QApplication::translate("shopsubmit", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
        goodsBackBtn->setText(QApplication::translate("shopsubmit", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        classGroupBox->setTitle(QApplication::translate("shopsubmit", "\347\261\273\345\210\253\347\256\241\347\220\206\357\274\210\345\246\202\346\236\234\350\246\201\346\267\273\345\212\240\347\261\273\345\210\253\350\257\267\345\205\210\346\267\273\345\212\240\342\200\234\346\267\273\345\212\240\342\200\235\346\214\211\351\222\256\357\274\211", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("shopsubmit", "\347\261\273\345\210\253\347\274\226\345\217\267 \357\274\232    ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("shopsubmit", "\345\210\206\347\261\273\345\220\215\347\247\260 \357\274\232    ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("shopsubmit", "\350\277\224\345\210\251\346\257\224\347\216\207 \357\274\232    ", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("shopsubmit", "\346\230\276\347\244\272\351\241\272\345\272\217 \357\274\232    ", 0, QApplication::UnicodeUTF8));
        addClassOkBtn->setText(QApplication::translate("shopsubmit", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
        classDelBtn->setText(QApplication::translate("shopsubmit", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        classOkBtn->setText(QApplication::translate("shopsubmit", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class shopsubmit: public Ui_shopsubmit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPSUBMIT_H