#include "hidrofor.h"

hidrofor::hidrofor(QObject *parent) : QObject(parent)
{

}

void hidrofor::hidroforHesap()
{
    sonucDegeri = aDegeri * bDegeri * tDegeri * fDegeri / 1000;
    qDebug() << "sonucDegeri is:" << sonucDegeri;
}
