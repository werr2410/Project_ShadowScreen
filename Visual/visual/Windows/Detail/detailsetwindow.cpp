#include "detailsetwindow.h"
#include "ui_detailsetwindow.h"

DetailSetWindow::DetailSetWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DetailSetWindow)
{
    ui->setupUi(this);

    description = "";
    status = "";
    image = QPixmap();
    isSale = false;
}

DetailSetWindow::~DetailSetWindow()
{
    delete ui;

}

void DetailSetWindow::init() {

    this->description = "";
    this->status = "";
    this->isSale = false;
    this->image = QPixmap();
    this->type = "";


    ui->textEdit_Mnufacturer->setReadOnly(true);
    ui->textEdit_Field1->setReadOnly(true);
    ui->textEdit_Field2->setReadOnly(true);

    ui->textEdit_Description->setReadOnly(false);
    ui->textEdit_Status->setReadOnly(false);
    ui->radioButton_Sale->setChecked(false);

    ui->label_Field0->setText("Manufacturer: ");
    ui->label_Field1->setText("");
    ui->label_Field2->setText("");

    ui->textEdit_Mnufacturer->setText("");
    ui->textEdit_Field1->setText("");
    ui->textEdit_Field2->setText("");

    ui->textEdit_Field1->hide();
    ui->textEdit_Field2->hide();

    ui->label_Field1->hide();
    ui->label_Field2->hide();
}

void DetailSetWindow::receiveData(Detail *data, DetailInfo* datainfo) {
    init();

    type = data->type();

    if(data->type() == "cpu") {
        CPU* cpu = dynamic_cast<CPU*>(data);

        if(cpu != nullptr) {
            ui->textEdit_Mnufacturer->setText(cpu->getManufacturer());

            ui->label_Field1->show();
            ui->label_Field1->setText("Name: ");

            ui->textEdit_Field1->show();
            ui->textEdit_Field1->setText(cpu->getName());
        }
    } else if(data->type() == "gpu") {
        GPU* gpu = dynamic_cast<GPU*>(data);

        if(gpu != nullptr) {
            ui->textEdit_Mnufacturer->setText(gpu->getManufacturer());
        }
    } else if(data->type() == "Memorychip") {
        Memorychip* mc = dynamic_cast<Memorychip*>(data);

        if(mc != nullptr) {
            ui->textEdit_Mnufacturer->setText(mc->getManufacturer());

            ui->label_Field1->show();
            ui->label_Field1->setText("Capacity: ");

            ui->textEdit_Field1->show();
            ui->textEdit_Field1->setText(mc->getCapacity());
        }
    } else if(data->type() == "baseboard") {
        Baseboard* bc = dynamic_cast<Baseboard*>(data);

        if(bc != nullptr) {
            ui->textEdit_Mnufacturer->setText(bc->getManufacturer());

            ui->label_Field1->show();
            ui->label_Field1->setText("Product: ");

            ui->textEdit_Field1->show();
            ui->textEdit_Field1->setText(bc->getProduct());
        }
    } else if(data->type() == "diskdrive") {
        Storage* stg = dynamic_cast<Storage*>(data);

        if(stg != nullptr)  {
            ui->textEdit_Mnufacturer->setText(stg->getManufacturer());

            ui->label_Field1->show();
            ui->label_Field1->setText("Model: ");

            ui->textEdit_Field1->show();
            ui->textEdit_Field1->setText(stg->getModel());

            ui->label_Field2->show();
            ui->label_Field2->setText("Size: ");

            ui->textEdit_Field2->show();
            ui->textEdit_Field2->setText(stg->getSize());
        }
    }

    // detail info

    this->description = datainfo->getDescription();
    this->status = datainfo->getStatus();
    this->isSale = datainfo->getIsSale();

    ui->textEdit_Description->setText(description);
    ui->textEdit_Status->setText(status);
    ui->radioButton_Sale->setChecked(isSale);
}

void DetailSetWindow::on_pushButton_File_clicked() {
    // Открыть диалог выбора файла
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"), ".", tr("Image Files (*.png *.jpg *.bmp)"));

    // Если файл выбран, загрузить его в QPixmap
    if (!fileName.isEmpty()) {
        QPixmap image;
        if (image.load(fileName)) {
            this->image = image;
        } else {
            QMessageBox box;
            box.setText("IMAGE BADDD!");
            box.exec();
        }
    } else {
        QMessageBox box;
        box.setText("IMAGE BADDD!");
        box.exec();
    }
}


void DetailSetWindow::on_pushButton_Save_clicked() {
    this->description = ui->textEdit_Description->toPlainText();
    this->status = ui->textEdit_Status->toPlainText();

   //emit sendDetailInfo(description, status, image, isSale, type);

    close();
}


void DetailSetWindow::on_radioButton_Sale_clicked() {
    this->isSale = !isSale;

    ui->radioButton_Sale->setChecked(isSale);
}

