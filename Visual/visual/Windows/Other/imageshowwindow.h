#ifndef IMAGESHOWWINDOW_H
#define IMAGESHOWWINDOW_H

#include <QDialog>

#include <QPixmap>

namespace Ui {
class ImageShowWindow;
}

class ImageShowWindow : public QDialog
{
    Q_OBJECT

public slots:
    void getPixmap(QPixmap map);

public:
    explicit ImageShowWindow(QWidget *parent = nullptr);
    ~ImageShowWindow();

private:
    Ui::ImageShowWindow *ui;

    QPixmap map;
};

#endif // IMAGESHOWWINDOW_H
