#ifndef TELEGRAMWINDOW_H
#define TELEGRAMWINDOW_H

#include <QDialog>
#include "Data/telegram.h"

namespace Ui {
class TelegramWindow;
}

using namespace ShadowScreen;

class TelegramWindow : public QDialog {
    Q_OBJECT

public:
    explicit TelegramWindow(QWidget *parent = nullptr);
    ~TelegramWindow();

private:
    Ui::TelegramWindow *ui;

    Data::Telegram telegram;


    void initField();

public slots:

    void getTelegram(ShadowScreen::Data::Telegram telegram);
private slots:
    void on_pushButton_close_clicked();
};

#endif // TELEGRAMWINDOW_H
