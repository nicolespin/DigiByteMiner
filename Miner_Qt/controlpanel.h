#ifndef CONTROLPANEL_H
#define CONTROLPANEL_H

#include <QMainWindow>

namespace Ui {
class ControlPanel;
}

class ControlPanel : public QMainWindow
{
    Q_OBJECT

public:
    explicit ControlPanel(QWidget *parent = nullptr);
    ~ControlPanel();

private:
    Ui::ControlPanel *ui;
};

#endif // CONTROLPANEL_H
