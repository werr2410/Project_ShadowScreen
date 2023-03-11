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
    TelegramWindow(Data::Telegram telegram);

    ~TelegramWindow();

private:
    Ui::TelegramWindow *ui;

    void initFields(Data::Telegram telegram);
};

#endif // TELEGRAMWINDOW_H
