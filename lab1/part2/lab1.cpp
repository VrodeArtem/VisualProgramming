#include "lab1.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    setWindowTitle("Калькулятор (обычный)");
    setWindowOpacity(0.98);
    setMinimumSize(380, 450);
    setMaximumSize(380, 450);

    ui->lineEdit->setPlaceholderText("0");
    ui->lineEdit->setReadOnly(true);
    ui->radioButtonSimple->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    ui->radioButtonCompl->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    ui->radioButtonSimple->setChecked(true);
    connect(ui->radioButtonSimple, SIGNAL(toggled(bool)), SLOT(SwitchMode()));

    CreateSimpleCalcWidget();
    CreateComplCalcWidget();
    CreateDefaultCalcWidget();
    mainWidget = new QWidget;
    SpawnSimpleMode();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::SwitchMode() {
    mainWidget->setParent(this);
    simpleCalcWidget->setParent(this);
    complCalcWidget->setParent(this);
        delete mainLayout;
        setWindowTitle("Калькулятор (обычный)");
        setMinimumSize(380, 450);
        setMaximumSize(380, 450);
        SpawnSimpleMode();
}

void MainWindow::SpawnSimpleMode() {
    mainLayout = new QGridLayout;
    mainLayout->setSpacing(0);
    complCalcWidget->hide();
    mainLayout->addWidget(defaultCalcWidget, 0, 0, 1, 3);
    mainLayout->addWidget(simpleCalcWidget, 1, 0, 2, 3);

    mainWidget->setLayout(mainLayout);
    setCentralWidget(mainWidget);
    centralWidget()->layout()->setContentsMargins(0, 0, 0, 0);
}

void MainWindow::SpawnComplMode() {
    mainLayout = new QGridLayout;
    mainLayout->setSpacing(0);
    mainLayout->addWidget(defaultCalcWidget, 0, 0, 1, 9);
    mainLayout->addWidget(complCalcWidget, 1, 0, 2, 4);
    mainLayout->addWidget(simpleCalcWidget, 1, 4, 2, 5);
    complCalcWidget->show();

    mainWidget->setLayout(mainLayout);
    setCentralWidget(mainWidget);
    centralWidget()->layout()->setContentsMargins(0, 0, 0, 0);
}

void MainWindow::CreateSimpleCalcWidget() {
    QPushButton* pushButton0 = new QPushButton("0");
    QPushButton* pushButton1 = new QPushButton("1");
    QPushButton* pushButton2 = new QPushButton("2");
    QPushButton* pushButton3 = new QPushButton("3");
    QPushButton* pushButton4 = new QPushButton("4");
    QPushButton* pushButton5 = new QPushButton("5");
    QPushButton* pushButton6 = new QPushButton("6");
    QPushButton* pushButton7 = new QPushButton("7");
    QPushButton* pushButton8 = new QPushButton("8");
    QPushButton* pushButton9 = new QPushButton("9");
    QPushButton* pushButtonDot = new QPushButton(",");
    QPushButton* pushButtonPlus = new QPushButton("+");
    QPushButton* pushButtonMinus = new QPushButton(QString::fromUtf8("-"));
    QPushButton* pushButtonMult = new QPushButton(QString::fromUtf8("\u00D7"));
    QPushButton* pushButtonDivide = new QPushButton(QString::fromUtf8("\u00F7"));
    QPushButton* pushButtonEquals = new QPushButton("=");
    QPushButton* pushButtonSqrt = new QPushButton(QString::fromUtf8("\u221A"));
    QPushButton* pushButtonInvert = new QPushButton(QString::fromUtf8("x\u207B\u00B9"));
    simpleCalcLayout = new QGridLayout(this);
    simpleCalcLayout->setSpacing(0);
    simpleCalcLayout->setContentsMargins(0, 0, 0, 0);

    simpleCalcLayout->addWidget(pushButton7, 0, 0, 1, 1);
    simpleCalcLayout->addWidget(pushButton8, 0, 1, 1, 1);
    simpleCalcLayout->addWidget(pushButton9, 0, 2, 1, 1);
    simpleCalcLayout->addWidget(pushButtonDivide, 0, 3, 1, 1);
    simpleCalcLayout->addWidget(pushButtonSqrt, 0, 4, 1, 1);
    simpleCalcLayout->addWidget(pushButton4, 1, 0, 1, 1);
    simpleCalcLayout->addWidget(pushButton5, 1, 1, 1, 1);
    simpleCalcLayout->addWidget(pushButton6, 1, 2, 1, 1);
    simpleCalcLayout->addWidget(pushButtonMult, 1, 3, 1, 1);
    simpleCalcLayout->addWidget(pushButtonInvert, 1, 4, 1, 1);
    simpleCalcLayout->addWidget(pushButton1, 2, 0, 1, 1);
    simpleCalcLayout->addWidget(pushButton2, 2, 1, 1, 1);
    simpleCalcLayout->addWidget(pushButton3, 2, 2, 1, 1);
    simpleCalcLayout->addWidget(pushButtonMinus, 2, 3, 1, 1);
    simpleCalcLayout->addWidget(pushButtonEquals, 2, 4, 2, 1);
    simpleCalcLayout->addWidget(pushButton0, 3, 0, 1, 2);
    simpleCalcLayout->addWidget(pushButtonDot, 3, 2, 1, 1);
    simpleCalcLayout->addWidget(pushButtonPlus, 3, 3, 1, 1);

    simpleCalcWidget = new QWidget(this);
    simpleCalcWidget->setLayout(simpleCalcLayout);

}