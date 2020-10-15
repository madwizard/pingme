//
// Created by trochej on 9/19/20.
//

#ifndef PINGME_PINGME_H
#define PINGME_PINGME_H

#include <qt5/QtWidgets/QMainWindow>
#include <memory>

namespace Ui {
    class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    std::shared_ptr<MainWindow> ui { std::make_shared<MainWindow>() };
};

#endif //PINGME_PINGME_H
