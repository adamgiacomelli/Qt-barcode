#include <QGuiApplication>
#include "barcodeprinter.h"

int main(int argc, char *argv[])
{
    QGuiApplication a(argc, argv);

    BarcodePrinter *printer = new BarcodePrinter();

    //List available printers
    qDebug() << "Available printers: " << printer->getAvailablePrinters();

    //Configure printer (no argument means it prints pdf)
    printer->configurePrinter();

    //Print barcode
    printer->printBarcode("test1234");

    return 0;
}
