
#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();

    bool OnlyDigits();
    void SetDigits(bool);

private:
    Ui::MainWindow* ui;

    QWidget* defaultCalcWidget;
    QWidget* simpleCalcWidget;
    QWidget* complCalcWidget;
    QWidget* mainWidget;

    QGridLayout* defaultCalcLayout;
    QGridLayout* simpleCalcLayout;
    QGridLayout* complCalcLayout;
    QGridLayout* mainLayout;

    void CreateDefaultCalcWidget();
    void CreateSimpleCalcWidget();
    void CreateComplCalcWidget();

    void SpawnSimpleMode();
    void SpawnComplMode();
    void SwitchMode();
};